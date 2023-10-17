module.exports = grammar({
  name: "bokunoscript",

  precedences: ($) => [
    [
      $.member_expression,
      $.call_expression,
      $.unary_expression,
      "binary_times",
      "binary_plus",
    ],
    [$.block, $.object_expression],
  ],

  rules: {
    // TODO: add the actual grammar rules
    source_file: ($) => repeat($._statement),

    _statement: ($) =>
      seq(
        choice(
          $.expression_statement,
          $.function_declaration,
          $.variable_declaration
        ),
        "\n"
      ),
    expression_statement: ($) => seq($._expression),

    _expression: ($) =>
      choice(
        $.number,
        $.string,
        $.identifier,
        $.object_expression,
        $.unary_expression,
        $.binary_expression,
        $.member_expression,
        $.call_expression
      ),

    parenthesized_expression: ($) => seq("(", $._expression, ")"),
    unary_expression: ($) =>
      seq(field("op", choice("+", "-")), field("expr", $._expression)),
    binary_expression: ($) =>
      choice(
        prec.left(
          "binary_times",
          seq(
            field("lhs", $._expression),
            field("op", "*"),
            field("rhs", $._expression)
          )
        ),
        prec.left(
          "binary_times",
          seq(
            field("lhs", $._expression),
            field("op", "/"),
            field("rhs", $._expression)
          )
        ),
        prec.left(
          "binary_plus",
          seq(
            field("lhs", $._expression),
            field("op", "+"),
            field("rhs", $._expression)
          )
        ),
        prec.left(
          "binary_plus",
          seq(
            field("lhs", $._expression),
            field("op", "-"),
            field("rhs", $._expression)
          )
        )
      ),

    number: ($) => /\d+/,
    string: ($) => seq('"', repeat($.unescaped_string_fragment), '"'),
    unescaped_string_fragment: (_) => token.immediate(/[^"\\]+/),

    object_expression: ($) =>
      seq("{", commaSep(optional($.object_property)), "}"),
    object_property: ($) =>
      seq(field("key", $._property_key), ":", field("value", $._expression)),
    _property_key: ($) => choice($.number, $.string),

    member_expression: ($) =>
      seq(field("object", $._expression), ".", field("property", $.identifier)),
    call_expression: ($) =>
      seq(
        field("receiver", $._expression),
        ".",
        field("function", $.identifier),
        $.call_arguments
      ),
    call_arguments: ($) => seq("(", commaSep($._expression), ")"),

    function_declaration: ($) =>
      seq("fun", $.identifier, $.function_parameters, $.block),
    function_parameters: ($) => seq("(", commaSep($.identifier), ")"),
    variable_declaration: ($) => seq("val", $.identifier, "=", $._expression),

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
