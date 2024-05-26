module.exports = grammar({
  name: "bend",
  externals: ($) => [$._indent, $._dedent, $._newline, $.error_recovery],
  rules: {
    source_file: ($) => repeat($.item),
    gidentifier: _ => /[A-Za-z0-9.-/]+/,
    item: ($) => choice($.function_def, $.type_def),

    function_def: ($) =>
      seq(
        "def",
        alias($.gidentifier, $.identifier),
        "(",
        sep($.gidentifier, ","),
        ")",
        ":",
        $._newline,
        $._indent,

        $._dedent,
      ),

    type_def: $ => seq(
      "type",
      alias($.gidentifier, $.identifier),
      ":",
      $._newline,
      $._indent,
      sep(
        alias($.gidentifier, $.identifier),
        choice($._newline, "|")
      )
    )
  },
});

function sep1(el, delimiter = ",") {
  return seq(el, repeat(seq(delimiter, el)), optional(delimiter))
}

function sep(el, delimiter = ",") {
  return optional(sep1(el, delimiter))
}

