(comment) @comment

(identifier) @variable
(qualified_name "." @punctuation.delimiter)
(string) @string

(number) @number
(boolean) @boolean

(return "return" @keyword)
(global ["VAR" "CONST"] @keyword
        "=" @operator)
(temp "temp" @keyword
      name: (identifier) @variable.member) ; not really, but temp vars are the closest thing to members that ink has
(include "INCLUDE" @keyword
         (path) @string.special)
(external "EXTERNAL" @keyword
          (identifier) @function)
(todo_comment "TODO" @keyword ":" @comment) @comment

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
(binary "%" @operator)
(binary "and" @operator)
(binary "or" @operator)
(binary "has" @operator)
(binary "hasnt" @operator)
(binary "mod" @operator)

(postfix "++" @operator)
(postfix "--" @operator)

(unary "!" @operator)
(unary "-" @operator)
(unary "not" @operator)

(code "~" @keyword)
(assignment ["=" "+=" "-="] @operator)
["=" "+=" "-="] @operator

["[" "]" "{" "}" "(" ")"] @punctuation.bracket

["," "|" ":"] @punctuation.delimiter

(call (identifier) @function)

(knot "==" @markup.heading)
(knot (identifier) @markup.link.url)
(knot "function" @keyword
      (identifier) @function)

(stitch "=" @markup.heading)
(stitch (identifier) @markup.link.url)

(choice ["*" "+"] @markup.list)
(choice label: (identifier) @markup.link.url)

(gather "-" @markup.list.unnumbered)
(gather label: (identifier) @markup.link.url)

(params "ref" @keyword)
(params (identifier) @variable.parameter)

(cond_arm "-" @keyword)
(alt_arm "-" @keyword)
(else) @variable.builtin

(list "LIST" @keyword
      (identifier) @type
      "=" @operator)

(list_values (identifier) @constructor) ; constructor in the Haskell sense: value constructors for sum types (i.e. enum values)
(lv_init (identifier) @constructor)  ; same for parenthized names
(lv_assign (identifier) @constructor ; dito for assigments
           "=" @operator)

(glue) @keyword

["->" "->->" "<-"] @markup.link

(divert (identifier)+ @markup.link.url)
(params (divert (identifier) @variable.parameter)) ; exception to normal divert coloring: parameters should be distinguishable
(divert (call (identifier) @markup.link.url))
(divert (call (qualified_name (identifier) @markup.link.url)))
(divert (identifier) @constant.builtin
        (#any-of? @constant.builtin "END" "DONE"))

(thread [(identifier) (call)] @markup.link.url)

(call (identifier) @function.builtin
      (#any-of? @function.builtin
       ; List Functions
       "LIST_VALUE"
       "LIST_COUNT"
       "LIST_MIN"
       "LIST_MAX"
       "LIST_RANDOM"
       "LIST_RANGE"
       "LIST_INVERT"
       ; Game Queries
       "CHOICE_COUNT"
       "TURNS"
       "TURNS_SINCE"
       "LIST_FOO"
       "SEED_RANDOM"))

(multiline_alternatives ["shuffle" "stopping" "cycle" "once"] @keyword)
(alternatives ["&" "$" "~" "!"] @keyword)

(tag "#" @punctuation.delimiter) @attribute; after expr stuff so that evals get highlighted
