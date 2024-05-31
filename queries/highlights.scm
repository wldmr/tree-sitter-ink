"function" @keyword.function
"return" @keyword.control.return
"LIST" @keyword.storage.type
"VAR" @keyword.storage.type
"CONST" @keyword.storage.type
"temp" @keyword.storage.type
"INCLUDE" @keyword.control.import
"EXTERNAL" @keyword.control.import

(include (path) @string.special.path)
(comment) @comment
(tag) @attribute

(number) @number

(identifier) @variable

(binary "+" @operator)
(binary "-" @operator)
(binary "*" @operator)
(binary "/" @operator)
(binary "?" @operator)
(binary "!?" @operator)
(binary "^" @operator)
(binary "==" @operator)
(binary "!=" @operator)
(binary "||" @operator)
(binary "&&" @operator)
(binary "<=" @operator)
(binary ">=" @operator)
(binary "<" @operator)
(binary ">" @operator)
(binary "and" @keyword.operator)
(binary "or" @keyword.operator)
(binary "has" @keyword.operator)
(binary "hasnt" @keyword.operator)
(binary "mod" @keyword.operator)

(postfix "++" @operator)
(postfix "--" @operator)

(unary "!" @operator)
(unary "-" @operator)
(unary "not" @keyword.operator)

(code "~" @keyword.directive)

"[" @punctuation.bracket
"]" @punctuation.bracket
"{" @punctuation.bracket
"}" @punctuation.bracket
"(" @punctuation.bracket
")" @punctuation.bracket

"," @punctuation.delimiter
"|" @punctuation.delimiter
":" @punctuation.delimiter

(identifier) @variable

(knot
  "==" @markup.heading.marker
  (identifier) @markup.heading.marker.1
  "=="? @markup.heading.marker)
(stitch
  "=" @markup.heading.marker
  (identifier) @markup.heading.marker.2)

(choice "*" @markup.list)
(choice "+" @markup.list)
(gather "-" @markup.list)
(gather label: (identifier) @label)

(call (identifier) @function)

(list name: (identifier) @type.enum
      values: (list_values (identifier)* @type.enum.variant))

(glue) @special
"->" @keyword.control
"<-" @keyword.control
"->->" @keyword.control
