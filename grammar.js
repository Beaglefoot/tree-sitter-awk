module.exports = grammar({
  name: 'awk',

  extras: $ => [$.comment, /[\s\t]/, '\\\n', '\\\r\n'],

  externals: $ => [$.concatenating_space, $._if_else_separator, $._ambiguous_comment, $._no_space],

  precedences: $ => [
    [
      $.getline_file,
      $.getline_input,
      $.grouping,
      $.field_ref,
      $.func_call,
      $.update_exp,
      'binary_exponent',
      'binary_times',
      'binary_plus',
      $.string_concat,
      $.unary_exp,
      $.piped_io_exp,
      'binary_relation',
      'binary_match',
      'binary_in',
      'binary_and',
      'binary_or',
      $.ternary_exp,
      $.exp_list,
      $.range_pattern,
      $._statement,
    ],
    [$.func_call, $._exp],
    [$.update_exp, $._exp],
    [$.if_statement, $._statement_separated],
    [$.else_clause, $._statement_separated],
    [$.print_statement, $.printf_statement, $.grouping],
    [$._print_args, $.grouping, $.piped_io_exp, 'binary_relation'],
    [$.for_in_statement, $._exp],
    [$._exp, $.string_concat, $.assignment_exp],
  ],

  conflicts: $ => [],

  word: $ => $.identifier,

  rules: {
    program: $ => repeat(choice($.rule, $.func_def, $.directive)),

    rule: $ =>
      prec.right(choice(seq($.pattern, optional($.block)), seq(optional($.pattern), $.block))),

    pattern: $ => prec.right(choice($._exp, $.range_pattern, $._special_pattern)),

    range_pattern: $ => seq(field('start', $._exp), ',', field('stop', $._exp)),

    _special_pattern: $ => choice('BEGIN', 'END', 'BEGINFILE', 'ENDFILE'),

    directive: $ => seq(choice('@include', '@load', '@namespace'), $.string),

    _statement: $ =>
      prec.left(
        choice(
          seq($._statement_separated, $._statement),
          $._statement_separated,
          $._control_statement,
          $._io_statement,
          $._exp
        )
      ),

    _statement_separated: $ => prec.right(seq($._statement, choice(';', '\n', '\r\n'))),

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
        $.return_statement,
        $.switch_statement
      ),

    if_statement: $ =>
      prec.right(
        seq(
          'if',
          field('condition', seq('(', $._exp, ')')),
          choice($.block, $._statement, ';'),
          optional(seq($._if_else_separator, $.else_clause))
        )
      ),

    else_clause: $ => seq('else', choice($.block, $._statement)),

    while_statement: $ =>
      prec.right(
        seq('while', field('condition', seq('(', $._exp, ')')), choice($.block, $._statement))
      ),

    do_while_statement: $ =>
      prec.right(
        seq('do', choice($.block, $._statement), 'while', field('condition', seq('(', $._exp, ')')))
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
          choice($.block, $._statement)
        )
      ),

    for_in_statement: $ =>
      prec.right(
        seq(
          'for',
          '(',
          field('left', choice($.identifier, $.ns_qualified_name)),
          'in',
          field('right', choice($.identifier, $.array_ref, $.ns_qualified_name)),
          ')',
          choice($.block, $._statement)
        )
      ),

    break_statement: $ => 'break',

    continue_statement: $ => 'continue',

    delete_statement: $ => seq('delete', choice($.identifier, $.array_ref, $.ns_qualified_name)),

    exit_statement: $ => prec.right(seq('exit', optional($._exp))),

    return_statement: $ => prec.right(seq('return', optional($._exp))),

    switch_statement: $ => seq('switch', '(', $._exp, ')', $.switch_body),

    switch_body: $ => seq('{', repeat(choice($.switch_case, $.switch_default)), '}'),

    switch_case: $ =>
      seq('case', field('value', choice($._primitive, $.regex)), ':', optional($._statement)),

    switch_default: $ => seq('default', ':', $._statement),

    _io_statement: $ =>
      choice(
        $.next_statement,
        $.nextfile_statement,
        $.print_statement,
        $.printf_statement,
        $.redirected_io_statement,
        $.piped_io_statement
      ),

    // Although it's referenced as statement in manual it acts as an expression
    _getline_exp: $ => choice($.getline_input, $.getline_file),

    getline_input: $ =>
      prec.right(seq('getline', optional(choice($.identifier, $.ns_qualified_name)))),

    getline_file: $ =>
      seq(
        'getline',
        optional(choice($.identifier, $.ns_qualified_name)),
        '<',
        field('filename', $._exp)
      ),

    next_statement: $ => 'next',

    nextfile_statement: $ => 'nextfile',

    _print_args: $ => prec.right(choice($._exp, $.exp_list)),

    print_statement: $ =>
      prec.right(
        seq('print', optional(choice($._print_args, seq(token.immediate('('), $._print_args, ')'))))
      ),

    printf_statement: $ => seq('printf', choice($._print_args, seq('(', $._print_args, ')'))),

    redirected_io_statement: $ =>
      prec.right(
        seq(
          choice($.print_statement, $.printf_statement),
          choice('>', '>>'),
          field('filename', $._exp)
        )
      ),

    piped_io_statement: $ =>
      prec.right(
        seq(
          choice($.print_statement, $.printf_statement),
          choice('|', '|&'),
          field('command', $._exp)
        )
      ),

    block: $ => seq('{', repeat($._block_content), '}'),

    _block_content: $ => prec.left(choice($.block, $._statement)),

    _exp: $ =>
      choice(
        $.identifier,
        $.ns_qualified_name,
        $.ternary_exp,
        $.binary_exp,
        $.unary_exp,
        $.update_exp,
        $.assignment_exp,
        $.field_ref,
        $.func_call,
        $.indirect_func_call,
        $._primitive,
        $.array_ref,
        $.regex,
        $.regex_constant,
        $.grouping,
        $.piped_io_exp,
        $.string_concat,
        $._getline_exp
      ),

    ternary_exp: $ =>
      prec.right(
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
      choice(...['!', '+', '-'].map(op => seq(field('operator', op), field('argument', $._exp)))),

    update_exp: $ => {
      const refs = choice($.identifier, $.field_ref, $.array_ref, $.ns_qualified_name);

      return prec.left(
        choice(
          seq(field('argument', refs), field('operator', choice('++', '--'))),
          seq(field('operator', choice('++', '--')), field('argument', refs))
        )
      );
    },

    assignment_exp: $ =>
      prec.right(
        seq(
          field('left', choice($.identifier, $.array_ref, $.field_ref, $.ns_qualified_name)),
          choice('=', '+=', '-=', '*=', '/=', '%=', '^='),
          field('right', $._exp)
        )
      ),

    piped_io_exp: $ => seq(field('command', $._exp), choice('|', '|&'), $.getline_input),

    string_concat: $ => {
      const applicable_exp = choice(
        $.identifier,
        $.ns_qualified_name,
        $.ternary_exp,
        $.binary_exp,
        $.unary_exp,
        $.field_ref,
        $.func_call,
        $._primitive,
        $.array_ref,
        $.grouping,
        $.string_concat
      );

      return prec.left(
        seq(field('left', applicable_exp), $.concatenating_space, field('right', applicable_exp))
      );
    },

    field_ref: $ => seq('$', $._exp),

    array_ref: $ =>
      seq(
        choice($.identifier, $.array_ref, $.ns_qualified_name),
        '[',
        field('index', choice($._exp, $.exp_list)),
        ']'
      ),

    exp_list: $ => seq(repeat1(seq($._exp, ',')), $._exp),

    regex: $ =>
      seq(
        '/',
        field('pattern', $.regex_pattern),
        token.immediate('/'),
        optional(field('flags', $.regex_flags))
      ),

    regex_pattern: $ => {
      const char = /[^/\\\[\n\r]/;
      const char_escaped = seq('\\', /./);
      const char_list = seq('[', repeat1(choice(char_escaped, /[^\]]/)), ']');

      return token.immediate(repeat(choice(char, char_escaped, char_list)));
    },

    regex_flags: $ => token.immediate(/[a-z]+/),

    regex_constant: $ => seq('@', $.regex),

    grouping: $ => seq('(', $._exp, ')'),

    _primitive: $ => choice($.number, $.string),

    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    namespace: $ => alias($.identifier, 'namespace'),

    ns_qualified_name: $ => seq($.namespace, token.immediate('::'), $._no_space, $.identifier),

    number: $ => /[\d.]+/,

    string: $ => seq('"', repeat(choice(/[^"\\]+/, $.escape_sequence, $._ambiguous_comment)), '"'),

    escape_sequence: $ =>
      token.immediate(seq('\\', choice('"', /[\\abfnrtv]/, /x[0-9a-fA-F]{1,2}/, /[0-7]{1,3}/))),

    func_def: $ =>
      seq(
        choice('function', 'func'),
        field('name', choice($.identifier, $.ns_qualified_name)),
        '(',
        optional($.param_list),
        ')',
        $.block
      ),

    param_list: $ => seq($.identifier, repeat(seq(',', $.identifier))),

    func_call: $ =>
      seq(
        field('name', choice($.identifier, $.ns_qualified_name)),
        token.immediate('('),
        optional($.args),
        ')'
      ),

    indirect_func_call: $ => seq('@', $.func_call),

    args: $ => seq($._exp, repeat(seq(',', $._exp))),

    comment: $ => seq('#', /.*/),
  },
});
