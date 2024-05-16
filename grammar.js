IDENT_REGEX = /[a-zA-z_][a-zA-Z0-9_]*/

module.exports = grammar({
  name: 'ink',

  inline: $ => [$._expr],

  conflicts: $ => [
    [$.identifier, $.text],
    // [$.conditional_text, $.text],
  ],

  rules: {
    ink: $ => seq(repeat($._line)),
    _line: $ =>  seq($.flow, alias('\n', '\\n')),

    text: $ => prec.right(repeat1(choice(
      /[^\s\{\}|:]+/,
      // Have to include the following two to trigger the conflict.
      ':',
      IDENT_REGEX, // If I use $.idenifier here, then I'm told to add a [$.conditional_text, $.text] conflict instead. Same result.
    ))),

    flow: $ => prec.right(repeat1(choice(
      $.conditional_text,
      $.alternatives,
      $.text,
    ))),

    alternatives: $ => seq(
      '{',
      repeat(choice('|', $.flow)),
      '}',
    ),

    conditional_text: $ => prec.right(seq(
      '{',
      field('condition', $._expr),
      ":",
      field('iftrue', $.flow),
      "|",
      field('else', $.flow),
      '}',
    )),

    _expr: $ => choice(
      $.identifier,
      $.binary,
    ),

    binary: $ => prec.left(seq($._expr, field('op', $._binary_operator), $._expr)),

    _binary_operator: _ => choice("and", "or"),

    identifier: _ => IDENT_REGEX,

  },

});
