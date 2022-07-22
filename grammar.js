module.exports = grammar({
    name: 'userconf',

    extras: $ => [/\s/, $.comment],

    rules: {
        document: $ =>
            optional($._record_body),

        _separator: $ =>
            choice(',', $.comment, /\r?\n/),

        //
        // Records
        //

        record: $ =>
            seq('{', optional($._record_body), '}'),

        _record_body: $ =>
            separated1($.record_entry, $._separator),

        record_entry: $ =>
            seq(
                field('key', $._record_key),
                field('value', $._value)
            ),

        _record_key: $ =>
            choice($.quoted_string, $.unquoted_string),

        //
        // Lists
        //

        list: $ =>
            seq('[', optional($._list_body), ']'),

        _list_body: $ =>
            separated1($._value, $._separator),

        //
        // Join expressions
        //

        join_expression: $ =>
            seq('(', optional($._join_expression_body), ')'),

        _join_expression_body: $ =>
            separated1($._any_string, $._separator),

        //
        // Values and strings
        //

        _value: $ =>
            choice(
                $.record,
                $.list,
                $._any_string
            ),

        _any_string: $ =>
            choice(
                $.unquoted_string,
                $.eol_string,
                $.quoted_string,
                $.join_expression
            ),

        unquoted_string: $ =>
            token(/[^\s\(\)\[\]\{\}";,>]+/),

        quoted_string: $ =>
            seq(
                '"',
                repeat(choice($._quoted_string_char, $.escape_sequence)),
                '"'
            ),

        _quoted_string_char: $ =>
            token.immediate(prec(1, /[^"\n\\]+/)),

        eol_string: $ =>
            seq(
                '>>',
                repeat(choice($._eol_string_char, $.escape_sequence)),
            ),

        _eol_string_char: $ =>
            token.immediate(prec(1, /[^\n\\]+/)),

        escape_sequence: $ =>
            token.immediate(
                seq(
                    '\\',
                    choice(
                        /n|r|t|0|"|\\/,
                        /x[a-fA-F0-9]{2}/,
                        /u\{[a-fA-F0-9]{1,6}\}/
                    )
                )
            ),

        comment: $ =>
            token(seq(';', /.*/)),
    }
});

function separated1(prod, sep) {
    return seq(prod, repeat(seq(sep, prod)), optional(sep));
}
