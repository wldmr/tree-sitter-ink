alias gen := generate

# Current version as given in package.json
current-version:=`sed -nr 's/\s*"version"\s*:\s*"(.+?)",\s*/\1/p' package.json`

# Current version as given in package.json
version-suffix:=""

# What the next version would be if released now. Adds version-suffix if given.
next-version:=`date +%-y.%-m.%-d` + if version-suffix != "" { "-"+version-suffix} else {""}

test *args: generate
	tree-sitter test {{args}}

bench: generate
	tree-sitter parse examples/**/*.ink --quiet --stat

parse *args: generate
	tree-sitter parse {{args}}

highlight file="test/highlight/showcase.ink":
	tree-sitter highlight --html --check {{file}} > highlight.html

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

# Show version currently being worked on
version-show:
	@echo "Current version is:    {{current-version}}"
	@echo "Next version would be: {{next-version}}"

# Set version information (Makefile, etc) to current CalVer. Careful: The version string is simply replaced verbatim.
[confirm("This will release version {{next-version}}. Are you sure?")]
version-release: bench test
	@echo "Releasing version: {{next-version}} (previous: {{current-version}})"

	git diff --exit-code  # Abort if there are uncommited changes

	sed -ri 's/^version\s*=\s*".+"$/version = "{{next-version}}"/' Cargo.toml pyproject.toml
	sed -ri 's/^VERSION\s*:=\s*.+$/VERSION := {{next-version}}/' Makefile
	sed -ri 's/^(\s*)"version"\s*:\s*".+",\s*$/\1"version": "{{next-version}}",/' package.json

	git commit --all -m "Release Version {{next-version}}"
	git tag -a "v{{next-version}}" -m "Release Version {{next-version}}"
	git tag --force latest

	git push origin main "v{{next-version}}" +latest
