module.exports = grammar({
  name: "bokunoscript",

  rules: {
    // TODO: add the actual grammar rules
    source_file: ($) => $._statement,

    _statement: ($) => choice($._expression),

    _expression: ($) =>
      choice(
        $.number,
        $.unary_expression,
        $.binary_expression,
        $.parenthesized_expression
      ),

    parenthesized_expression: ($) => seq("(", $._expression, ")"),
    unary_expression: ($) =>
      prec(
        4,
        choice(
          seq(field("op", "+"), field("expr", $._expression)),
          seq(field("op", "-"), field("expr", $._expression))
        )
      ),
    binary_expression: ($) =>
      choice(
        prec.left(
          2,
          seq(
            field("lhs", $._expression),
            field("op", "*"),
            field("rhs", $._expression)
          )
        ),
        prec.left(
          2,
          seq(
            field("lhs", $._expression),
            field("op", "/"),
            field("rhs", $._expression)
          )
        ),
        prec.left(
          1,
          seq(
            field("lhs", $._expression),
            field("op", "+"),
            field("rhs", $._expression)
          )
        ),
        prec.left(
          1,
          seq(
            field("lhs", $._expression),
            field("op", "-"),
            field("rhs", $._expression)
          )
        ),
        prec.left(
          3,
          seq(
            field("lhs", $._expression),
            field("op", "**"),
            field("rhs", $._expression)
          )
        )
      ),

    number: ($) => /\d+/,
  },
});
