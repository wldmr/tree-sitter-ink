const _tp = n => (rule => token(prec(n, rule)));

module.exports = grammar({
  name: 'ink',

  inline: $ => [$._expr],

  conflicts: $ => [
    // If I enable any of these, tree-sitter tells me 'unnecessary conflicts' 🤷
    [$.alternatives, $.conditional_text],
    [$._expr, $.text],
    [$.identifier, $.text],
  ],

  rules: {
    ink: $ => seq(repeat($._line)),
    _line: $ =>  seq($.flow, alias(/\n/, '\\n')),

    // positive or negative precedence here determines if the flow rule tries conditional_text or alternatives,
    // but it doesn't get it right in context.
    text: _ => token(prec(-10, /[^\n\{\}|]+/)),

    flow: $ => prec.right(repeat1(choice(
      $.conditional_text,
      $.alternatives,
      $.text,
    ))),

    alternatives: $ => seq(
      '{',
      repeat1(choice('|', $.flow)),
      '}',
    ),

    conditional_text: $ => seq(
      '{',
      field('condition', $._expr),
      ":",
      field('iftrue', $.flow),
      "|",
      field('else', $.flow),
      '}',
    ),

    _expr: $ => choice(
      $.identifier,
      $.binary,
    ),

    binary: $ => prec.left(seq($._expr, field('op', $._binary_operator), $._expr)),

    _binary_operator: _ => choice("and", "or"),

    identifier: _ => /[a-zA-z_][a-zA-Z0-9_]*/,

  },

});
