module.exports = grammar({
    name: 'Userconf',

    extras: $ => [
        /\s/,
        $.comment,
    ],

    rules: {
        document: $ => optional($._record_body),

        _separator:
            $ => choice(',', $.comment, /\r?\n/),

        _value: $ =>
            choice($.unquoted_string, $.quoted_string, $.multiline_string, $.record, $.list),

        record: $ =>
            seq('{', optional($._record_body), '}'),

        _record_body: $ =>
            separated1($.record_entry, $._separator),

        record_entry: $ =>
            seq(
                field('key', choice($.quoted_string, $.unquoted_string)),
                ':',
                field('value', $._value)
            ),

        list: $ =>
            seq('[', optional($._list_body), ']'),

        _list_body: $ =>
            separated1($._value, $._separator),

        unquoted_string: $ =>
            token(/[^\s\[\]\{\}":;,>]+/),

        quoted_string: $ =>
            token(seq(
                '"',
                repeat(
                    choice(
                        /[^"\\]/,
                        /\\("|\\|0|[a-z]|(x[0-9a-fA-F]{2})|(u[0-9a-fA-F]{6}))/
                    )
                ),
                '"'
            )),

        _multiline_line: $ =>
            token(seq(
                '>>',
                repeat(
                    choice(
                        /[^\r\n\\]/,
                        /\\("|\\|0|[a-z]|(x[0-9a-fA-F]{2})|(u[0-9a-fA-F]{6}))/
                    )
                ),
                optional(/\r?\n/)
            )),

        multiline_string: $ =>
            repeat1($._multiline_line),

        comment:
            $ => token(seq(';', /.*/)),
    }
});

function separated1(prod, sep) {
    return seq(prod, repeat(seq(sep, prod)), optional(sep));
}
