#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 1
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 3

enum {
  sym_gidentifier = 1,
  anon_sym_def = 2,
  anon_sym_LPAREN = 3,
  anon_sym_COMMA = 4,
  anon_sym_RPAREN = 5,
  anon_sym_COLON = 6,
  anon_sym_type = 7,
  anon_sym_PIPE = 8,
  sym__indent = 9,
  sym__dedent = 10,
  sym__newline = 11,
  sym_error_recovery = 12,
  sym_source_file = 13,
  sym_item = 14,
  sym_function_def = 15,
  sym_type_def = 16,
  aux_sym_source_file_repeat1 = 17,
  aux_sym_function_def_repeat1 = 18,
  aux_sym_type_def_repeat1 = 19,
  alias_sym_identifier = 20,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_gidentifier] = "gidentifier",
  [anon_sym_def] = "def",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_type] = "type",
  [anon_sym_PIPE] = "|",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym__newline] = "_newline",
  [sym_error_recovery] = "error_recovery",
  [sym_source_file] = "source_file",
  [sym_item] = "item",
  [sym_function_def] = "function_def",
  [sym_type_def] = "type_def",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_function_def_repeat1] = "function_def_repeat1",
  [aux_sym_type_def_repeat1] = "type_def_repeat1",
  [alias_sym_identifier] = "identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_gidentifier] = sym_gidentifier,
  [anon_sym_def] = anon_sym_def,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym__newline] = sym__newline,
  [sym_error_recovery] = sym_error_recovery,
  [sym_source_file] = sym_source_file,
  [sym_item] = sym_item,
  [sym_function_def] = sym_function_def,
  [sym_type_def] = sym_type_def,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_function_def_repeat1] = aux_sym_function_def_repeat1,
  [aux_sym_type_def_repeat1] = aux_sym_type_def_repeat1,
  [alias_sym_identifier] = alias_sym_identifier,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_gidentifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_error_recovery] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_item] = {
    .visible = true,
    .named = true,
  },
  [sym_function_def] = {
    .visible = true,
    .named = true,
  },
  [sym_type_def] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_def_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_def_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_identifier] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_identifier,
  },
  [2] = {
    [1] = alias_sym_identifier,
    [5] = alias_sym_identifier,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '(') ADVANCE(17);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 'd') ADVANCE(9);
      if (lookahead == 't') ADVANCE(13);
      if (lookahead == '|') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 4:
      if (lookahead == 'f') ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == 'p') ADVANCE(3);
      END_STATE();
    case 6:
      if (lookahead == 'y') ADVANCE(5);
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == 'd') ADVANCE(2);
      if (lookahead == 't') ADVANCE(6);
      if (lookahead == '|') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_gidentifier);
      if (lookahead == 'e') ADVANCE(11);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_gidentifier);
      if (lookahead == 'e') ADVANCE(22);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_gidentifier);
      if (lookahead == 'f') ADVANCE(16);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_gidentifier);
      if (lookahead == 'p') ADVANCE(10);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_gidentifier);
      if (lookahead == 'y') ADVANCE(12);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_gidentifier);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_def);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_type);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 7},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 7, .external_lex_state = 2},
  [5] = {.lex_state = 7, .external_lex_state = 2},
  [6] = {.lex_state = 7, .external_lex_state = 2},
  [7] = {.lex_state = 7, .external_lex_state = 2},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 0, .external_lex_state = 2},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0, .external_lex_state = 3},
  [27] = {.lex_state = 0, .external_lex_state = 2},
  [28] = {.lex_state = 0, .external_lex_state = 3},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0, .external_lex_state = 2},
  [31] = {.lex_state = 0, .external_lex_state = 4},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0, .external_lex_state = 3},
  [35] = {.lex_state = 0, .external_lex_state = 4},
  [36] = {.lex_state = 0, .external_lex_state = 2},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 0, .external_lex_state = 4},
  [42] = {.lex_state = 0, .external_lex_state = 2},
  [43] = {.lex_state = 0, .external_lex_state = 3},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0, .external_lex_state = 4},
  [47] = {.lex_state = 0, .external_lex_state = 3},
};

enum {
  ts_external_token__indent = 0,
  ts_external_token__dedent = 1,
  ts_external_token__newline = 2,
  ts_external_token_error_recovery = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token__newline] = sym__newline,
  [ts_external_token_error_recovery] = sym_error_recovery,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__newline] = true,
    [ts_external_token_error_recovery] = true,
  },
  [2] = {
    [ts_external_token__newline] = true,
  },
  [3] = {
    [ts_external_token__indent] = true,
  },
  [4] = {
    [ts_external_token__dedent] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_gidentifier] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym_error_recovery] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(39),
    [sym_item] = STATE(2),
    [sym_function_def] = STATE(17),
    [sym_type_def] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_def] = ACTIONS(5),
    [anon_sym_type] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(5), 1,
      anon_sym_def,
    ACTIONS(7), 1,
      anon_sym_type,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(3), 2,
      sym_item,
      aux_sym_source_file_repeat1,
    STATE(17), 2,
      sym_function_def,
      sym_type_def,
  [18] = 5,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_def,
    ACTIONS(16), 1,
      anon_sym_type,
    STATE(3), 2,
      sym_item,
      aux_sym_source_file_repeat1,
    STATE(17), 2,
      sym_function_def,
      sym_type_def,
  [36] = 3,
    STATE(4), 1,
      aux_sym_type_def_repeat1,
    ACTIONS(21), 2,
      sym__newline,
      anon_sym_PIPE,
    ACTIONS(19), 3,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_type,
  [49] = 3,
    STATE(4), 1,
      aux_sym_type_def_repeat1,
    ACTIONS(26), 2,
      sym__newline,
      anon_sym_PIPE,
    ACTIONS(24), 3,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_type,
  [62] = 3,
    STATE(5), 1,
      aux_sym_type_def_repeat1,
    ACTIONS(30), 2,
      sym__newline,
      anon_sym_PIPE,
    ACTIONS(28), 3,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_type,
  [75] = 1,
    ACTIONS(32), 5,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_type,
      anon_sym_PIPE,
  [83] = 3,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    ACTIONS(36), 1,
      sym_gidentifier,
    ACTIONS(38), 2,
      anon_sym_def,
      anon_sym_type,
  [94] = 3,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 1,
      sym_gidentifier,
    ACTIONS(44), 2,
      anon_sym_def,
      anon_sym_type,
  [105] = 3,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 1,
      sym_gidentifier,
    ACTIONS(46), 2,
      anon_sym_def,
      anon_sym_type,
  [116] = 3,
    ACTIONS(48), 1,
      anon_sym_COMMA,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      aux_sym_function_def_repeat1,
  [126] = 3,
    ACTIONS(53), 1,
      anon_sym_COMMA,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      aux_sym_function_def_repeat1,
  [136] = 1,
    ACTIONS(57), 3,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_type,
  [142] = 1,
    ACTIONS(59), 3,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_type,
  [148] = 1,
    ACTIONS(61), 3,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_type,
  [154] = 3,
    ACTIONS(63), 1,
      anon_sym_COMMA,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      aux_sym_function_def_repeat1,
  [164] = 1,
    ACTIONS(67), 3,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_type,
  [170] = 1,
    ACTIONS(69), 3,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_type,
  [176] = 2,
    ACTIONS(71), 1,
      sym_gidentifier,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
  [183] = 2,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(71), 1,
      sym_gidentifier,
  [190] = 1,
    ACTIONS(51), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [195] = 2,
    ACTIONS(75), 1,
      sym_gidentifier,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
  [202] = 1,
    ACTIONS(71), 1,
      sym_gidentifier,
  [206] = 1,
    ACTIONS(79), 1,
      sym__newline,
  [210] = 1,
    ACTIONS(81), 1,
      sym_gidentifier,
  [214] = 1,
    ACTIONS(83), 1,
      sym__indent,
  [218] = 1,
    ACTIONS(85), 1,
      sym__newline,
  [222] = 1,
    ACTIONS(87), 1,
      sym__indent,
  [226] = 1,
    ACTIONS(89), 1,
      anon_sym_COLON,
  [230] = 1,
    ACTIONS(91), 1,
      sym__newline,
  [234] = 1,
    ACTIONS(93), 1,
      sym__dedent,
  [238] = 1,
    ACTIONS(95), 1,
      anon_sym_COLON,
  [242] = 1,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
  [246] = 1,
    ACTIONS(99), 1,
      sym__indent,
  [250] = 1,
    ACTIONS(101), 1,
      sym__dedent,
  [254] = 1,
    ACTIONS(103), 1,
      sym__newline,
  [258] = 1,
    ACTIONS(105), 1,
      anon_sym_COLON,
  [262] = 1,
    ACTIONS(107), 1,
      anon_sym_COLON,
  [266] = 1,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
  [270] = 1,
    ACTIONS(111), 1,
      sym_gidentifier,
  [274] = 1,
    ACTIONS(113), 1,
      sym__dedent,
  [278] = 1,
    ACTIONS(115), 1,
      sym__newline,
  [282] = 1,
    ACTIONS(117), 1,
      sym__indent,
  [286] = 1,
    ACTIONS(119), 1,
      sym_gidentifier,
  [290] = 1,
    ACTIONS(121), 1,
      anon_sym_COLON,
  [294] = 1,
    ACTIONS(123), 1,
      sym__dedent,
  [298] = 1,
    ACTIONS(125), 1,
      sym__indent,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 36,
  [SMALL_STATE(5)] = 49,
  [SMALL_STATE(6)] = 62,
  [SMALL_STATE(7)] = 75,
  [SMALL_STATE(8)] = 83,
  [SMALL_STATE(9)] = 94,
  [SMALL_STATE(10)] = 105,
  [SMALL_STATE(11)] = 116,
  [SMALL_STATE(12)] = 126,
  [SMALL_STATE(13)] = 136,
  [SMALL_STATE(14)] = 142,
  [SMALL_STATE(15)] = 148,
  [SMALL_STATE(16)] = 154,
  [SMALL_STATE(17)] = 164,
  [SMALL_STATE(18)] = 170,
  [SMALL_STATE(19)] = 176,
  [SMALL_STATE(20)] = 183,
  [SMALL_STATE(21)] = 190,
  [SMALL_STATE(22)] = 195,
  [SMALL_STATE(23)] = 202,
  [SMALL_STATE(24)] = 206,
  [SMALL_STATE(25)] = 210,
  [SMALL_STATE(26)] = 214,
  [SMALL_STATE(27)] = 218,
  [SMALL_STATE(28)] = 222,
  [SMALL_STATE(29)] = 226,
  [SMALL_STATE(30)] = 230,
  [SMALL_STATE(31)] = 234,
  [SMALL_STATE(32)] = 238,
  [SMALL_STATE(33)] = 242,
  [SMALL_STATE(34)] = 246,
  [SMALL_STATE(35)] = 250,
  [SMALL_STATE(36)] = 254,
  [SMALL_STATE(37)] = 258,
  [SMALL_STATE(38)] = 262,
  [SMALL_STATE(39)] = 266,
  [SMALL_STATE(40)] = 270,
  [SMALL_STATE(41)] = 274,
  [SMALL_STATE(42)] = 278,
  [SMALL_STATE(43)] = 282,
  [SMALL_STATE(44)] = 286,
  [SMALL_STATE(45)] = 290,
  [SMALL_STATE(46)] = 294,
  [SMALL_STATE(47)] = 298,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_def_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_def_repeat1, 2), SHIFT_REPEAT(44),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_def, 7, .production_id = 2),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_def, 6, .production_id = 2),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_def_repeat1, 2, .production_id = 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_def, 5, .production_id = 1),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_def, 5, .production_id = 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_def, 8, .production_id = 2),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_def, 8, .production_id = 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_def, 7, .production_id = 2),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2), SHIFT_REPEAT(23),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_def, 11, .production_id = 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_def, 10, .production_id = 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_def, 9, .production_id = 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_def, 8, .production_id = 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [109] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_bend_external_scanner_create(void);
void tree_sitter_bend_external_scanner_destroy(void *);
bool tree_sitter_bend_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_bend_external_scanner_serialize(void *, char *);
void tree_sitter_bend_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_bend(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_bend_external_scanner_create,
      tree_sitter_bend_external_scanner_destroy,
      tree_sitter_bend_external_scanner_scan,
      tree_sitter_bend_external_scanner_serialize,
      tree_sitter_bend_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
