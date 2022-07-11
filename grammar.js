module.exports = grammar({
    name: 'Userconf',

    extras: $ => [
        /\s/,
        $.comment,
        $._linebreak,
    ],

    rules: {
        // The document's top-level is a record content, ie. a record
        // without the '{' and '}' delimiters.
        document:
            $ => optional($._record_body),

        // Records
        // A record is composed of the record delimiters '{' and '}' that
        // surround zero or more record entries, which are comma-separated.
        // An optional comma separator can appear at the end.

        record:
            $ => seq('{', optional($._record_body), '}'),

        _record_body:
            $ => commaSeparated1($, $.record_entry),

        record_entry:
            $ => seq($.record_key, $.record_value),

        record_key:
            $ => $.str_quoted,

        record_value:
            $ => choice($.str_quoted, $.record, $.list),

        // Lists
        // A list is composed of the list delimiters '[' and ']' that surround
        // zero or more values, which are comma-separated. An optional comma separator
        // can appear at the end.
        
        list:
            $ => seq('[', optional(commaSeparated1($, $._list_element)), ']'),

        _list_element:
            $ => choice($.str_quoted, $.record, $.list),

        // Comments
        comment:
            $ => token(seq(';', /.*/)),

        // Linebreak
        _linebreak:
            $ => token(/\r?\n|\r|\n|\u2028|\u2029/),

        // Logical linebreak
        _logical_linebreak:
            $ => choice($.comment, $._linebreak),

        // Item separator
        _separator:
            $ => choice(',', $._logical_linebreak),

        // Lexical
        str_quoted: $ => /"[^"]*"/
    }
});

function commaSeparated1($, prod) {
    return seq(prod, repeat(seq($._separator, prod)), optional($._separator));
}