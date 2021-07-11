module.exports = grammar({
  name: 'awk',

  extras: $ => [$.comment, /[\s\t]/],

  word: $ => $.identifier,

  rules: {
    program: $ => repeat($.rule),

    rule: $ => seq($.pattern, optional($.block)),

    pattern: $ => choice($.exp, $.regex),

    statement: $ => 'todo_statement',

    block: $ => seq('{', repeat(choice($.statement, $.exp, $.regex)), '}'),

    exp: $ => choice($.identifier, $.number, $.string, $.binary_exp, $.unary_exp),

    binary_exp: $ => 'todo_binary_exp',

    unary_exp: $ => 'todo_unary_exp',

    regex: $ => 'todo_regex',

    identifier: $ => /[a-z]+/,

    number: $ => /\d+/,

    string: $ => seq('"', repeat(choice(/[^"\\]+/, $.escape_sequence)), '"'),

    // prettier-ignore
    escape_sequence: $ =>
      token.immediate(seq(
        '\\',
        choice(
          /[\\abfnrtv]/,
          /x[0-9a-fA-F]{1,2}/,
          /[0-7]{1,3}/
        )
      )),

    comment: $ => seq('#', /.*/),
  },
});
