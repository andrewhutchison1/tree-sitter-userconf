module.exports = grammar({
    name: 'Userconf',

    extras: $ => [
        $.comment,
        /\s/,
    ],

    rules: {
        document: $ => optional($._record_body),

        record:             $ => seq('{', optional($._record_body), '}'),
        _record_body:       $ => separated1($.record_entry, $._separator),
        record_entry:       $ => seq($.key, $.value),
        key:                $ => $._str_key,
        value:              $ => choice($._str_any, $.record, $.list),
        
        list:               $ => seq('[', optional(separated1($._list_element, $._separator)), ']'),
        _list_element:      $ => choice($._str_any, $.record, $.list),

        comment:            $ => token(seq(';', /.*/)),
        _linebreak:         $ => /\r?\n|\r|\n|\u2028|\u2029/,
        _separator:         $ => choice(',', $.comment, $._linebreak),

        str_unquoted:       $ => /[^\s\[\]\{\}";,>]+/,
        str_quoted:         $ => /"[^"]*"/,

        _str_key:           $ => choice($.str_unquoted, $.str_quoted),
        _str_any:           $ => choice($.str_unquoted, $.str_quoted),
    }
});

function separated1(prod, sep) {
    return seq(prod, repeat(seq(sep, prod)), optional(sep));
}
