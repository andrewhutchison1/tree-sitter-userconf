# tree-sitter-userconf
[![Build/test](https://github.com/andrewhutchison1/tree-sitter-userconf/actions/workflows/ci.yml/badge.svg?event=push)](https://github.com/andrewhutchison1/tree-sitter-userconf/actions/workflows/ci.yml)

This repository contains a Tree-sitter parser for the userconf configuration file format.
It also serves as the *source of truth* for userconf's syntax.

- [Syntax](#syntax)
- [Building and testing](#building-and-testing)

## Syntax

Userconf is a fairly spartan plaintext file format for expressing configuration settings.

- [Document](#document)
    - [Comments](#comments)
    - [Strings](#strings)
        - [Unquoted strings](#unquoted-strings)
        - [Quoted strings](#quoted-strings)
        - [EOL strings](#eol-strings)
        - [Join expressions](#join-expressions)
    - [Records](#records)
    - [Lists](#lists)

### Document

A userconf file is called a *document*.
Userconf documents must be encoded as UTF-8.

#### Comments

Comments start with `;` and extend until the end of the line.
```
; this is a comment
```

#### Strings

Userconf provides four ways to express strings, each of which may be more appropriate than
others in certain circumstances.
 - Unquoted strings
 - Quoted strings
 - EOL strings
 - Join expressions

The following characters are reserved:
```
{}          ; Record delimiters
[]          ; List delimiters
()          ; Join expression delimiters
>           ; EOL string sigil
"           ; Double quote
,           ; Comma
```

All strings except unquoted strings can contain escape characters.
The recognised escape characters are:
 - `\n` Linefeed
 - `\r` Carriage return
 - `\t` Horizontal tab
 - `\0` NUL byte
 - `\"` Literal double quote
 - `\\` Literal backslash
 - `\xYY` Literal byte value. `Y` must be a hexadecimal digit (lower or uppercase)
 - `\u{X}` Unicode codepoint. `X` must be a hexadecimal number of between one and six digits
  that represent the codepoint.

##### Unquoted strings

*Unquoted strings* resemble identifiers in many programming languages, and are simply whitespace-
delimited words that must not contain any reserved characters or escape sequences.
```
unquoted_string     ; Unquoted string
#ff0000             ; Unquoted string containing a HTML colour code
/usr/bin/env        ; Unquoted string containing a UNIX path
```

##### Quoted strings

*Quoted strings* are delimited by the double quote character `"` and can contain whitespace
(except newlines), reserved characters, and escape sequences. Quoted string can be empty.
```
"quoted string"         ; Quoted string
""                      ; Empty quoted string
"{}[]()>,;"             ; Quoted string containing reserved characters
"\n\r\t\0\x00\u{20AD}"  ; Quoted string containing some escape sequences
```

The double quote character `"` must be escaped inside a quoted string.
All other reserved characters can appear inside a quoted string.

##### EOL strings

An *EOL string* starts with the `>>` token and extends until the end of line, much in the same
way that a comment does.
They can contain whitespace (except newlines), reserved characters, and escape sequences.
EOL strings can be empty, and comments are not scanned in EOL strings.
```
; EOL string
>>EOL string

; Empty EOL string (linebreak immediately follows >>)
>>

; EOL string containing three > characters
>>>>>

; EOL string containing some escape characters
>>\n\r\t\0\x00\u{20AD}
```

The double quote character `"` does not need to be escaped inside an EOL string, but is still
accepted and equal to an unescaped double quote.
All other reserved characters can appear inside an EOL string.

##### Join expressions

A *join expression* is a syntactic entity that is somewhere between a compound datatype and an
atomic string.
As its name implies, it collects zero or more child strings into a single string as if they were
joined verbatim.
Join expressions are delimited by parentheses, can be empty, and can be nested.
```
; Equivalent to "hello world"
(hello, " world")

; Equivalent to "hello world!" (nested join expressions are flattened)
(
    hello
    (" world", !)
)

; Equivalent to "" (the empty string)
()
(((())))
```

The primary use of join expressions is to split large strings over multiple lines.
Note that linebreaks are not automatically inserted.
```
; Equivalent to "This is a large string that must be split over several lines."
(
    >>This is a large string that
    >> must be split over several
    >> lines.
)

; Equivalent to "This is a large string\nthat must be split over several\nlines."
(
    >>This is a large string\n
    >>that must be split over several\n
    >>lines.
)
```

All string types can appear inside a join expression, separated by the comma `,` or a linebreak.
Comments can appear inside join expressions, and they are stripped/ignored.
```
; Equivalent to "Join expression containing multiple string types."
(
    Join, " ", expression
    "containing"
    >> multiple string types.
)

; Equivalent to the empty string ""
(
    ; comment
)
```

#### Records

A *record* contains zero or more mappings from a string key to a value.
TODO

#### Lists

A *list* contains zero or more strings (of any type), lists or records.
TODO

## Building and testing

After cloning the repository, generate the parser with `npm run build`.

To run tests, use `npm test` (to execute the Tree-sitter syntax tree tests) and
`npm run test-examples` to ensure all examples parse successfully.

To compile for Nodejs inclusion, use `node-gyp configure && node-gyp build`.
