(number) @number

[
  "+"
  "-"
  "*"
  "/"
] @operator

[
  "fun"
  "val"
] @keyword

[
  "("
  ")"
  "{"
  "}"
]  @punctuation.bracket

(function_declaration
  name: (identifier) @function)
(call_expression
  function: (identifier) @function)
