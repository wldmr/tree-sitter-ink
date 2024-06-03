alias gen := generate
CURRENT_VERSION:=`sed -nr 's/\s*"version"\s*:\s*"(.+?)",\s*/\1/p' package.json`

test *args: generate
	tree-sitter test {{args}}

bench: generate
	tree-sitter parse examples/**/*.ink --quiet --stat

parse *args: generate
	tree-sitter parse {{args}}

highlight:
	tree-sitter highlight --html --check "test/highlight/showcase.ink" > highlight.html

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

# Set version information (Makefile, etc) to VERSION. Careful: The version string is simply replaced verbatim.
# Then run tests. If everything is successful, create a "bump version" commit.
version-start VERSION:
	echo "Current version: {{CURRENT_VERSION}}"
	sed -ri 's/^version\s*=\s*".+"$/version = "{{VERSION}}"/' Cargo.toml pyproject.toml
	sed -ri 's/^VERSION\s*:=\s*.+$/VERSION := {{VERSION}}/' Makefile
	sed -ri 's/^(\s*)"version"\s*:\s*".+",\s*$/\1"version": "{{VERSION}}",/' package.json
	just bench
	just test
	git commit --all -m "bump version to v{{VERSION}}"

# Tag the latest commit. VERSION must match the version in package.json.
version-release VERSION: bench test
	@echo "Current version: {{CURRENT_VERSION}}"
	test "{{CURRENT_VERSION}}" = "{{VERSION}}"
	git tag -a "v{{CURRENT_VERSION}}" -m "Release Version v{{CURRENT_VERSION}}"
	git push origin
	git push --tags origin
