#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "tree_sitter/alloc.h"
#include "tree_sitter/array.h"
#include "tree_sitter/parser.h"

enum TokenType { _INDENT, _DEDENT, _NEWLINE } ;

struct bend_scanner {
    unsigned* indent_levels;
    unsigned  cap;
    unsigned  len;
    unsigned  expected_dedents;
};

#define N 1024
static char* bs_print(struct bend_scanner* scanner) {
    char*    s = malloc(N);
    unsigned len;
    sprintf(s, "bs{cap=%d, len=%d, dedents=%d, [", scanner->cap, scanner->len,
            scanner->expected_dedents);

    for (int i = 0; i < scanner->len; i++) {
        len = strlen(s);
        sprintf((s + len), "%d%s", scanner->indent_levels[i],
                i == scanner->len - 1 ? "" : ",");
    }
    len = strlen(s);
    sprintf((s + len), "]");

    return s;
}

static void bend_scanner_init(struct bend_scanner* scanner) {
    scanner->cap              = 8;
    scanner->len              = 0;
    scanner->expected_dedents = 0;
    scanner->indent_levels    = malloc(8 * sizeof(unsigned));
}

static unsigned bend_scanner_top(struct bend_scanner* scanner) {
    if (scanner->len == 0) {
        return 0;
    }
    return scanner->indent_levels[scanner->len - 1];
}

static unsigned newsize(unsigned cap) {
    if (cap == 0) {
        return 8;
    }

    return 2 * cap;
}

static void bend_scanner_push(struct bend_scanner* scanner, unsigned val) {
    if (scanner->len == scanner->cap) {
        unsigned newcap        = newsize(scanner->cap);
        scanner->indent_levels = realloc(scanner->indent_levels, newcap);
        scanner->cap           = newcap;
    }
    scanner->indent_levels[scanner->len] = val;
    scanner->len++;
}

// does not resize the underlying array
static unsigned bend_scanner_pop(struct bend_scanner* scanner) {
    if (scanner->len == 0) {
        return 0;
    }
    scanner->len--;
    return scanner->indent_levels[scanner->len];
}

void* tree_sitter_bend_external_scanner_create(void) {
    struct bend_scanner* scanner = malloc(sizeof(struct bend_scanner));
    bend_scanner_init(scanner);
    return scanner;
}

void tree_sitter_bend_external_scanner_destroy(void* payload) {
    free(((struct bend_scanner*)payload)->indent_levels);
    free(payload);
}

unsigned tree_sitter_bend_external_scanner_serialize(void* payload,
                                                     char* buffer) {
    // printf("tree_sitter_bend_external_scanner_serialize\n");
    struct bend_scanner* scanner = (struct bend_scanner*)payload;

    *((struct bend_scanner*)buffer) = *scanner;
    buffer += sizeof(struct bend_scanner);

    for (int i = 0; i < scanner->len; i++) {
        ((unsigned*)buffer)[i] = scanner->indent_levels[i];
    }

    return sizeof(struct bend_scanner) + scanner->len * sizeof(unsigned);
}

void tree_sitter_bend_external_scanner_deserialize(void*       payload,
                                                   const char* buffer,
                                                   unsigned    length) {
    // printf("tree_sitter_bend_external_scanner_deserialize(%p, %p, %u)\n",
    // payload, buffer, length);
    struct bend_scanner* buf    = (struct bend_scanner*)buffer;
    struct bend_scanner* result = (struct bend_scanner*)payload;

    unsigned* data = (unsigned*)(buffer + sizeof(struct bend_scanner));

    if (length == 0) {
        bend_scanner_init(result);
        return;
    }
    result->len              = buf->len;
    result->cap              = buf->len;
    result->expected_dedents = buf->expected_dedents;
    result->indent_levels    = malloc(result->cap * sizeof(unsigned));

    for (int i = 0; i < result->len; i++) {
        result->indent_levels[i] = data[i];
    }
}

enum scan_result { error = 0, found = 1, unknown = 2 };

static enum scan_result newline(void*       payload,
                                TSLexer*    lexer,
                                const bool* valid_symbols) {
    if (!valid_symbols[_NEWLINE]) {
        return unknown;
    }

    // \n
    if (lexer->lookahead == '\n') {
        lexer->result_symbol = _NEWLINE;
        lexer->advance(lexer, false);
        return found;
    }

    // \r\n
    if (lexer->lookahead != '\r') {
        return error;
    }

    lexer->advance(lexer, false);
    if (lexer->lookahead != '\n') {
        return error;
    }
    lexer->advance(lexer, false);

    lexer->result_symbol = _NEWLINE;
    return found;
}

static unsigned count_leading_whitespace(TSLexer* lexer) {
    unsigned indentation_depth = 0;

    while (lexer->lookahead == ' ') {
        lexer->advance(lexer, false);
        indentation_depth++;
    }

    return indentation_depth;
}

static enum scan_result indent(struct bend_scanner* scanner,
                               TSLexer*             lexer,
                               const bool*          valid_symbols,
                               unsigned             indentation_depth) {
    if (!valid_symbols[_INDENT]) {
        return unknown;
    }

    if (lexer->lookahead == '\r' || lexer->lookahead == '\n' ||
        lexer->eof(lexer)) {
        // the line is empty
        return error;
    }

    unsigned last_depth = bend_scanner_top(scanner);
    if (indentation_depth > last_depth) {
        bend_scanner_push(scanner, indentation_depth);
        lexer->result_symbol = _INDENT;
        return found;
    }

    return error;
}

static unsigned find_corresponding_indent(struct bend_scanner* scanner,
                                          unsigned indentation_depth) {
    for (int i = scanner->len - 1; i >= 0; i--) {
        if (scanner->indent_levels[i] == indentation_depth) {
            return i;
        }
    }

    return -1;
}

static enum scan_result dedent(struct bend_scanner* scanner,
                               TSLexer*             lexer,
                               const bool*          valid_symbols,
                               unsigned             indentation_depth) {
    int i;
    if (scanner->expected_dedents > 0) {
        if (!valid_symbols[_DEDENT]) {
            return error;
        }

        bend_scanner_pop(scanner);
        lexer->result_symbol = _DEDENT;
        scanner->expected_dedents--;
        return found;
    }

    if (!valid_symbols[_DEDENT]) {
        return unknown;
    }

    int corresponding_indent =
        find_corresponding_indent(scanner, indentation_depth);

    if (corresponding_indent == -1 && indentation_depth != 0) {
        return error;
    }

    scanner->expected_dedents = scanner->len - 1 - corresponding_indent;

    bend_scanner_pop(scanner);
    lexer->result_symbol = _DEDENT;
    return found;
}

bool tree_sitter_bend_external_scanner_scan(void*       payload,
                                            TSLexer*    lexer,
                                            const bool* valid_symbols) {
    struct bend_scanner* scanner = (struct bend_scanner*)payload;
    // printf("tree_sitter_bend_external_scanner_scan(%s, %p)\n",
    //        bs_print(payload), lexer);
    // printf("NEWLINE=%c, INDENT=%c, DEDENT=%c\n",
    //        valid_symbols[NEWLINE] ? 'y' : 'n',
    //        valid_symbols[INDENT] ? 'y' : 'n',
    //        valid_symbols[DEDENT] ? 'y' : 'n');
    // printf("%d '%c'\n", lexer->lookahead, lexer->lookahead);

    enum scan_result res;

    unsigned depth = count_leading_whitespace(lexer);
    res            = dedent(scanner, lexer, valid_symbols, depth);
    // printf("dedent %d\n", res);
    if (res == found || res == error) {
        return res;
    }

    res = newline(scanner, lexer, valid_symbols);
    // printf("newline %d\n", res);
    if (res == found || res == error) {
        return res;
    }

    res = indent(scanner, lexer, valid_symbols, depth);
    // printf("indent %d\n", res);
    if (res == found || res == error) {
        return res;
    }

    return false;
}
