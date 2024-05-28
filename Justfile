alias gen := generate

test *args: generate
	tree-sitter test {{args}}

bench: generate
	tree-sitter parse examples/**/*.ink --quiet --stat

parse *args: generate
	tree-sitter parse {{args}}

generate:
	tree-sitter generate

# Identify the most complicated rules for refactoring.
states:
	# From: https://github.com/tree-sitter/tree-sitter/wiki/Tips-and-Tricks-for-a-grammar-author#reducing-state-count
	tree-sitter generate --report-states-for-rule -

play filename="examples/ink/test.ink":
	inklecate -p {{filename}}

wasm:
	tree-sitter build --wasm -o tree-sitter-ink.wasm

playground *args: wasm
	tree-sitter playground {{args}}
