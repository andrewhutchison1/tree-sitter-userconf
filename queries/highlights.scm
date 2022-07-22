; Comments
(comment) @comment

; Strings in key-position
(record_entry key: [(unquoted_string) (quoted_string)] @keyword)

; Strings elsewhere
[(unquoted_string) (quoted_string)] @string

; Punctuation and delimiters
["{" "}" "[" "]"] @punctuation.bracket
[","] @punctuation.delimiter
