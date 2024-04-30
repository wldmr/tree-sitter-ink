const _tp = n => (rule => token(prec(n, rule)));

module.exports = grammar({
  name: 'ink',

  extras: _ => [/\s+/],

  inline: $ => [$._expr],

  conflicts: $ => [
    // If I enable any of these, tree-sitter tells me 'unnecessary conflicts'
    [$.alternatives, $.conditional_text],
    [$._expr, $.text],
  ],

  rules: {
    ink: $ => seq(repeat($._line)),
    _line: $ =>  seq($.flow, alias(/\n/, '\\n')),

    // the precedence here determines if it matches conditional text or alternatives in AHJ, but it doesn't get it right in context.
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
