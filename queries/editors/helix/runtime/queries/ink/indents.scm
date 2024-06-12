(choice_block
  (choice ["*" "+"] . ["(" "{" "[" (_)] @anchor)  ; There doesn't seem to be a way to do a catch-all query for both named and anonymous nodes. Feels a little cumbersome. Maybe it's a sign that a choice should be `(choice (choice_marker) (choice_content))`?
  (#set! "scope" "tail")) @align
(gather_block
  (gather "-" . ["(" (_)] @anchor)
  (#set! "scope" "tail")) @align
