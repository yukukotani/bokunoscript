module.exports = grammar({
  name: "bokunoscript",

  rules: {
    // TODO: add the actual grammar rules
    source_file: ($) => repeat($._statement),

    _statement: ($) => choice($._expression, $.function_declaration),

    _expression: ($) =>
      choice(
        $.number,
        $.string,
        $.object_expression,
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
    string: ($) => seq('"', repeat($.unescaped_string_fragment), '"'),
    unescaped_string_fragment: (_) => token.immediate(prec(1, /[^"\\]+/)),

    object_expression: ($) =>
      seq("{", commaSep(optional($.object_property)), "}"),
    object_property: ($) =>
      seq(field("key", $._property_name), ":", field("value", $._expression)),
    _property_name: ($) => choice($.number),

    function_declaration: ($) => seq("fun", $.identifier, $.block),

    // from tree-sitter-javascript
    identifier: (_) => {
      // eslint-disable-next-line max-len
      const alpha =
        /[^\x00-\x1F\s\p{Zs}0-9:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/;
      // eslint-disable-next-line max-len
      const alphanumeric =
        /[^\x00-\x1F\s\p{Zs}:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/;
      return token(seq(alpha, repeat(alphanumeric)));
    },
    block: ($) => seq("{", repeat($._statement), "}"),
  },
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(",", rule)));
}

function commaSep(rule) {
  return optional(commaSep1(rule));
}
