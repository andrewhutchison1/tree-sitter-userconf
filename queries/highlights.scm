; Comments
(comment) @comment

; Strings in key-position
(record_entry key: [(unquoted_string) (quoted_string)] @keyword)

; Strings elsewhere
[(eol_string) (unquoted_string) (quoted_string)] @string

; Escape sequences
(escape_sequence) @constant.builtin

; Join expression sigils
["(" ")"] @string.special

; Punctuation and delimiters
["{" "}" "[" "]"] @punctuation.bracket
[","] @punctuation.delimiter
