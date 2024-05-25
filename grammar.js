module.exports = grammar({
  name: "bend",
  externals: ($) => [$._indent, $._dedent, $._newline],
  rules: {
    source_file: ($) => repeat($.item),
    identifier: (_) => /[_\p{XID_Start}][_\p{XID_Continue}]*/,
    item: ($) => choice($.function_def),
    function_def: ($) =>
      seq(
        "def",
        $.identifier,
        $._newline,
        $._indent,

        $._dedent,
      ),
  },
});
