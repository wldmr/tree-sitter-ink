(return "return" @keyword.control.return)
(global ["VAR" "CONST"] @keyword.storage.type
        "=" @operator)
(temp "temp" @keyword
      name: (identifier) @variable.member) ; not really, but temp vars are the closest thing to members that ink has
(include "INCLUDE" @keyword.control.import
         (path) @string.special.path)
(external "EXTERNAL" @keyword
          (identifier) @function)
(todo_comment "TODO" @keyword ":" @comment) @comment
(code "~" @keyword.directive)


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

["=" "+=" "-="] @operator

(choice ["[" "]" "(" ")"] @punctuation.bracket)  ; Need to specifiy choice here, because the grammar does always tokenize these brackets (for all text), but we don't want to highlight them outside of choices.
(gather ["(" ")"] @punctuation.bracket)
["{" "}"] @punctuation.bracket ; Curlies are never just text, no need to qualify

["," "|" ":"] @punctuation.delimiter

(call (identifier) @function)

(knot "==" @markup.heading)
(knot (identifier) @markup.link.url)
(knot "function" @keyword.function
      (identifier) @function)

(stitch "=" @markup.heading)
(stitch (identifier) @markup.link.url)

(choice ["*" "+"] @markup.list)
(choice label: (identifier) @markup.link.url)

(gather "-" @markup.list.unnumbered)
(gather label: (identifier) @markup.link.url)

(params "ref" @keyword)
(params (identifier) @variable.parameter)

(cond_arm "-" @keyword.control.conditional)
(alt_arm "-" @keyword.control.repeat)
(else) @variable.builtin

(list "LIST" @keyword.storage.type
      (identifier) @type.enum
      "=" @operator)

(list_values (identifier) @constructor) ; constructor in the Haskell sense: value constructors for sum types (i.e. enum values)
(lv_init (identifier) @constructor)  ; same for parenthized names
(lv_assign (identifier) @constructor ; dito for assigments
           "=" @operator)

(glue) @keyword

["->" "->->" "<-"] @markup.link

(params (divert (identifier) @variable.parameter)) ; exception to normal divert coloring: parameters should be distinguishable
(divert (identifier) @constant.builtin
        (#any-of? @constant.builtin "END" "DONE"))

(divert (identifier)+ @markup.link.url)
(divert (call (identifier) @markup.link.url))
(divert (call (qualified_name (identifier) @markup.link.url)))

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

(multiline_alternatives ["shuffle" "stopping" "cycle" "once"] @keyword.control.repeat)
(alternatives ["&" "$" "~" "!"] @keyword.control.repeat)

(comment) @comment

(identifier) @variable
(qualified_name "." @punctuation.delimiter)
(string) @string

(number) @constant.numeric
(boolean) @keyword.builtin.boolean

(tag "#" @punctuation.delimiter (content)* @embedded) @attribute; after expr stuff so that evals get highlighted
(content) @embedded
