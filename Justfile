alias gen := generate

test filter="''": generate
	tree-sitter test --filter {{filter}} -D

testlog filter="''": generate
	tree-sitter test --filter {{filter}} -d

generate:
	tree-sitter generate

# Identify the most complicated rules for refactoring.
states:
	# From: https://github.com/tree-sitter/tree-sitter/wiki/Tips-and-Tricks-for-a-grammar-author#reducing-state-count
	tree-sitter generate --report-states-for-rule -
