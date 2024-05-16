IDENT_REGEX = /[a-zA-z_][a-zA-Z0-9_]*/

module.exports = grammar({
  name: 'ink',

  inline: $ => [$._expr],

  conflicts: $ => [
    [$.identifier, $.text],
  ],

  rules: {
    ink: $ => seq(repeat($._line)),
    _line: $ =>  seq($.flow, alias('\n', '\\n')),

    text: $ => prec.right(repeat1(choice(
      IDENT_REGEX,  // this needs to come first, because the next regex is more general and tree-sitter goes by rule order. If the next regex matched an identifier, it wouldn't trigger the conflict.
      /[^\s\{\}|:]+/,
      ':',
      $._binary_operator,
    ))),

    flow: $ => prec.right(repeat1(choice(
      $.conditional_text,
      $.alternatives,
      $.text,
    ))),

    conditional_text: $ => seq(
      '{',
      field('condition', $._expr),
      ":",
      field('iftrue', $.flow),
      "|",
      field('else', $.flow),
      '}',
    ),

    alternatives: $ => seq(
      '{',
      repeat(choice('|', $.flow)),
      '}',
    ),

    _expr: $ => choice(
      $.identifier,
      $.binary,
    ),

    binary: $ => prec.left(seq($._expr, field('op', $._binary_operator), $._expr)),

    _binary_operator: _ => choice("and", "or"),

    identifier: _ => IDENT_REGEX,

  },

});
