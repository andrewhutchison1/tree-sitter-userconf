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

        record: $ =>
            seq('{', optional($._record_body), '}'),

        _record_body: $ =>
            separated1($.record_entry, $._separator),

        record_entry: $ =>
            seq(
                field('key', choice($.quoted_string, $.unquoted_string)),
                ':',
                field('value', choice($.unquoted_string, $.quoted_string, $.record, $.list))
            ),

        list: $ =>
            seq('[', optional($._list_body), ']'),

        _list_body: $ =>
            separated1(
                choice($.unquoted_string, $.quoted_string, $.record, $.list),
                $._separator
            ),

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

        comment:
            $ => token(seq(';', /.*/)),
    }
});

function separated1(prod, sep) {
    return seq(prod, repeat(seq(sep, prod)), optional(sep));
}
