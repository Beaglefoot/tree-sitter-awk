module.exports = grammar({
  name: 'awk',

  extras: $ => [$.comment, /[\s\t]/],

  precedences: $ => [
    [
      'field_ref',
      'call',
      'increment',
      'binary_exponent',
      'unary_not',
      'binary_times',
      'binary_plus',
      'binary_io',
      'binary_relation',
      'binary_match',
      'binary_in',
      'binary_and',
      'binary_or',
      'ternary',
    ],
  ],

  word: $ => $.identifier,

  rules: {
    program: $ => repeat(choice($.rule, $.func_def)),

    rule: $ => seq($.pattern, optional($.block)),

    // TODO: Need more thought
    pattern: $ => prec.left(choice($._exp, seq($._exp, ',', $._exp), $.regex, $._special_pattern)),

    _special_pattern: $ => choice('BEGIN', 'END', 'BEGINFILE', 'ENDFILE'),

    statement: $ => 'todo_statement',

    block: $ => seq('{', repeat(prec.left(choice($.statement, $._exp, $.regex))), '}'),

    _exp: $ =>
      choice(
        $.identifier,
        $.ternary_exp,
        $.binary_exp,
        $.unary_exp,
        $.update_exp,
        $.assignment_exp,
        $.func_call,
        $._primitive
      ),

    ternary_exp: $ =>
      prec.right(
        'ternary',
        seq(
          field('condition', $._exp),
          '?',
          field('consequence', $._exp),
          ':',
          field('alternative', $._exp)
        )
      ),

    binary_exp: $ =>
      choice(
        ...[
          ['^', 'binary_exponent'],
          ['**', 'binary_exponent'],
          ['*', 'binary_times'],
          ['/', 'binary_times'],
          ['%', 'binary_times'],
          ['+', 'binary_plus'],
          ['-', 'binary_plus'],
          ['|', 'binary_io'],
          ['|&', 'binary_io'],
          ['<', 'binary_relation'],
          ['>', 'binary_relation'],
          ['<=', 'binary_relation'],
          ['>=', 'binary_relation'],
          ['==', 'binary_relation'],
          ['!=', 'binary_relation'],
          ['~', 'binary_match'],
          ['!~', 'binary_match'],
          ['in', 'binary_in'],
          ['&&', 'binary_and'],
          ['||', 'binary_or'],
        ].map(([op, precedence]) =>
          prec.left(
            precedence,
            seq(field('left', $._exp), field('operator', op), field('right', $._exp))
          )
        )
      ),

    unary_exp: $ =>
      choice(
        ...[
          ['$', 'field_ref'],
          ['!', 'unary_not'],
          ['+', 'unary_not'],
          ['-', 'unary_not'],
        ].map(([op, precedence]) =>
          prec.left(precedence, seq(field('operator', op), field('argument', $._exp)))
        )
      ),

    update_exp: $ =>
      prec.left(
        'increment',
        choice(
          seq(field('argument', $._exp), field('operator', choice('++', '--'))),
          seq(field('operator', choice('++', '--')), field('argument', $._exp))
        )
      ),

    assignment_exp: $ =>
      prec.right(
        seq(
          field('left', $.identifier),
          choice('=', '+=', '-=', '*=', '/=', '%=', '^='),
          field('right', $._exp)
        )
      ),

    regex: $ => 'todo_regex',

    _primitive: $ => choice($.number, $.string),

    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

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

    func_def: $ =>
      seq('function', field('name', $.identifier), '(', optional($.param_list), ')', $.block),

    param_list: $ => seq($.identifier, repeat(seq(',', $.identifier))),

    func_call: $ => prec('call', seq(field('func_name', $.identifier), '(', optional($.args), ')')),

    args: $ => seq($._exp, repeat(seq(',', $._exp))),

    comment: $ => seq('#', /.*/),
  },
});
