module.exports = grammar({
  name: 'awk',

  extras: $ => [$.comment, /[\s\t]/],

  precedences: $ => [
    [
      'field_ref',
      'call',
      'increment',
      'binary_exponent',
      // TODO: Handle 1 + 1 to be a binary exp
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
      'statement',
    ],
  ],

  conflicts: $ => [[$.for_in_statement, $._exp]],

  word: $ => $.identifier,

  rules: {
    program: $ => repeat(choice($.rule, $.func_def)),

    rule: $ =>
      prec.left(choice(seq($.pattern, optional($.block)), seq(optional($.pattern), $.block))),

    // TODO: Need more thought
    pattern: $ => prec.left(choice($._exp, seq($._exp, ',', $._exp), $.regex, $._special_pattern)),

    _special_pattern: $ => choice('BEGIN', 'END', 'BEGINFILE', 'ENDFILE'),

    statement: $ =>
      prec.left(
        'statement',
        choice(
          seq($._statement_separated, $.statement),
          $._statement_separated,
          $._control_statement,
          $._io_statement,
          $._exp
        )
      ),

    _statement_separated: $ => seq($.statement, choice(';', '\n')),

    _control_statement: $ =>
      choice(
        $.if_statement,
        $.while_statement,
        $.do_while_statement,
        $.for_statement,
        $.for_in_statement,
        $.break_statement,
        $.continue_statement,
        $.delete_statement,
        $.exit_statement,
        $.switch_statement
      ),

    if_statement: $ =>
      prec.right(
        seq(
          'if',
          field('condition', seq('(', $._exp, ')')),
          choice($.block, $.statement),
          optional($.else_clause)
        )
      ),

    else_clause: $ => prec.right(seq('else', choice($.block, $.statement))),

    while_statement: $ =>
      prec.right(
        seq('while', field('condition', seq('(', $._exp, ')')), choice($.block, $.statement))
      ),

    do_while_statement: $ =>
      prec.right(
        seq('do', choice($.block, $.statement), 'while', field('condition', seq('(', $._exp, ')')))
      ),

    for_statement: $ =>
      prec.right(
        seq(
          'for',
          '(',
          field('initializer', optional($._exp)),
          ';',
          field('condition', optional($._exp)),
          ';',
          field('advancement', optional($._exp)),
          ')',
          choice($.block, $.statement)
        )
      ),

    for_in_statement: $ =>
      prec.right(
        seq(
          'for',
          '(',
          field('left', $.identifier),
          'in',
          field('right', $.identifier),
          ')',
          choice($.block, $.statement)
        )
      ),

    // TODO: Must be available in loops only
    break_statement: $ => 'break',

    // TODO: Must be available in loops only
    continue_statement: $ => 'continue',

    delete_statement: $ => seq('delete', choice($.identifier, $.array_ref)),

    exit_statement: $ => seq('exit', $._exp),

    switch_statement: $ => seq('switch', '(', $._exp, ')', $.switch_body),

    switch_body: $ => seq('{', repeat(choice($.switch_case, $.switch_default)), '}'),

    switch_case: $ => seq('case', field('value', $._primitive), ':', $.statement),

    switch_default: $ => seq('default', ':', $.statement),

    _io_statement: $ => 'todo_io_statement',

    block: $ => seq('{', optional(prec.left(choice($.block, $.statement, $.regex))), '}'),

    _exp: $ =>
      choice(
        $.identifier,
        $.ternary_exp,
        $.binary_exp,
        $.unary_exp,
        $.update_exp,
        $.assignment_exp,
        $.field_ref,
        $.func_call,
        $._primitive,
        $.array_ref
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

    field_ref: $ => prec('field_ref', seq('$', $._exp)),

    array_ref: $ => seq($.identifier, '[', field('index', $._exp), ']'),

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
