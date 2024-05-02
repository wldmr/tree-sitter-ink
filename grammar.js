const _tp = n => (rule => token(prec(n, rule)));
TOKEN = {
  text: _tp(-20),
  mark: _tp(20),
  alternatives_mark: _tp(40),
  conditional_text_mark: _tp(40),
  condition_mark: _tp(50),
}

module.exports = grammar({
  name: 'ink',

  extras: $ => [
    /[ \t]+/,
    $.comment,
  ],

  inline: $ => [
    $.expr,
    // $.flow,  // maybe?
  ],

  rules: {
    ink: $ => seq(
      repeat(seq(optional($._toplevel), /\n/)),
      optional($._toplevel), // last line might not have a newline
    ),

    _toplevel: $ => choice(
      $.todo_comment,
      repeat1($.tag),
      $.divert,
      $.paragraph,
      $.knot,
      $.stitch,
      $.choice,
      $.include,
    ),

    text: $ => prec.right(repeat1(
     choice(
      TOKEN.text(/[^\s\{\}\[\]#\-$!&~<>/*+|]+/),
      TOKEN.text(/[ \t]+/), // spaces and tabs are actually fine
      TOKEN.text(/\\[\{\}\[\]$!&~\-]/),  // escaped special char
      TOKEN.text(/[$!&~|]/), // repeat marks and separator can be text, if they're not in a position where a repeat mark is expected
      // TOKEN.text(/\[|\]/),  // outside of choices, square brackets are just text
      TOKEN.text(/\/[^\/*]/), // not yet a comment
      TOKEN.text(/-[^>]/), // not a divert
      TOKEN.text(/<[^-]/), // not a trevid
      TOKEN.text(/<[^>]/), // not a glue
    ) 
    )),

    paragraph: $ => seq(
      alias($.flow, ''),
      optional($.divert),
      repeat($.tag),
    ),

    // TODO: I think flow means something else in Ink; I think the Ink parser calls this 'Content'. Maybe call it text_content?
    flow: $ => prec.right(repeat1(choice(
      $.glue,
      $.logic,
      $.text,
    ))),

    glue: _ => TOKEN.mark('<>'),

    logic: $ => seq(
      '{',
      field('prefix', optional(choice(
        alias('$', $.sequence_mark),
        alias('&', $.repeat_mark),
        alias('~', $.shuffle_mark),
        alias('!', $.once_only_mark),
        alias(/[^&~!$][^:]*:/, $.logic_condition),
        // field('condition', seq($.expr, ':')),
        //                    ^^^^^^^^^^^^^^^^
        // I'd love to parse conditions as expr + ':', but that fails because a sequence may start with anything;
        // If the first thing after the opening brace is a word, the parser sees an identifier and has a nervous breakdown.
      ))),
      repeat1(choice('|', seq($.flow, optional($.divert)))),
      '}',
    ),

    tag: _ => /#[^\n#]+/,

    choice: $ => seq(
      field('mark', $.symbol),
      repeat($.condition),
      optional('\\'),
      $._choice_content
    ),

    condition: $ => prec.right(seq(
      // There can apparently be linebreaks between conditions.
      optional(/\n/),
      TOKEN.condition_mark('{'),
      $.expr,
      '}',
      optional(/\n/),
    )),

    _choice_content: $ => choice(
        seq(field('main', $.flow), optional($.divert)),
        seq($._compound_choice_content, optional($.divert)),
        // types of fallback choices:
        $.divert,
        $.divert_mark,
    ),

    _compound_choice_content: $ => prec.right(seq(
      field('main', optional($.flow)),
      '[',
      field('temporary', optional($.flow)),
      ']',
      field('final', optional($.flow),
    ))),

    knot: $ => prec.right(seq(
      $._knot_mark,
      field('name', $.identifier),
      optional($._knot_mark),
    )),

    _knot_mark: _ => alias(TOKEN.mark(/==+/), "=="), // TODO: Be sure to document that we collapse all knot marks to "==".
    divert_mark: _ => TOKEN.mark('->'),

    stitch: $ => prec.right(seq(
      '=',
      field('name', $.identifier),
    )),

    divert: $ => seq(
      $.divert_mark, field('target', choice($.identifier, $.qualified_name)),
    ),

    // Let's just accept any old characters for the path. We don't have to do anything with it …
    include: $ => seq(/INCLUDE\s/, alias(/[^\n]+/, $.path)),

    expr: $ => choice(

      // terminals
      $.identifier,
      $.qualified_name,
      alias(/\d+(\.\d+)?/, $.number),

      // compound
      $.paren,
      $.unary,
      $.binary,
      
    ),

    // TODO: These precs and associativities are completely bogus
    paren: $ => prec.right(100, seq("(", $.expr, ")")),
    binary: $ => prec.right(10, seq($.expr, field('op', $._binary_operator), $.expr)),
    unary: $ => prec(20, seq(field('op', $._unary_operator), $.expr)),

    _unary_operator: _ => choice(
      'not', '!'
    ),

    _binary_operator: _ => choice(
      '*', '+', "-", "/",
      "==", ">=", "<=", ">", "<",
      "or", "||",
      "and", "&&",
    ),

    identifier: _ => /[a-zA-z_][a-zA-Z0-9_]*/,
    qualified_name: $ => seq($.identifier, token.immediate('.'), $.identifier),

    symbol: _ => choice('*', '+'),

    comment: _ => /\/\/[^\n]*|\/\*(.|\r?\n)*?\*\//,

    todo_comment: _ => seq(
      TOKEN.mark('TODO'),
      ':',
      /[^\n]*/,
    ),

  },

});
