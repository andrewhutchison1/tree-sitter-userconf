module.exports = grammar({
    name: 'Userconf',

    extras: $ => [
        /\s/,
        $.comment,
    ],

    rules: {
        document: $ => optional($._record_body),

        record:         $ => seq('{', optional($._record_body), '}'),
        _record_body:   $ => separated1($, $.record_entry),
        record_entry:   $ => seq($.key, $.value),
        key:            $ => $._str_key,
        value:          $ => choice($._str_any, $.record, $.list),
        
        list:           $ => seq('[', optional(separated1($, $._list_element)), ']'),
        _list_element:  $ => choice($._str_any, $.record, $.list),

        comment:            $ => token(seq(';', /.*/)),
        _linebreak:         $ => token(/\r?\n|\r|\n|\u2028|\u2029/),
        _logical_linebreak: $ => choice($.comment, $._linebreak),
        _separator:         $ => choice(',', $._logical_linebreak),

        str_unquoted:       $ => /[^\s\[\]\{\}";,>]+/,
        str_quoted:         $ => /"[^"]*"/,

        _str_key:           $ => choice($.str_unquoted, $.str_quoted),
        _str_any:           $ => $._str_key,
    }
});

function separated1($, prod) {
    return seq(prod, repeat(seq($._separator, prod)), optional($._separator));
}
