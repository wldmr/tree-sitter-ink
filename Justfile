alias gen := generate

test filter="''": generate
	tree-sitter test --filter {{filter}} -D

generate:
	tree-sitter generate
