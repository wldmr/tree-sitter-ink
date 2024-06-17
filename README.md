# Tree-Sitter-Ink

This is a [Tree-sitter] grammar for the [Ink] interactive fiction scripting language.
It supports all syntax up to version 1.2.0.

<video
	src="https://github.com/wldmr/tree-sitter-ink/assets/5498491/cbfa71db-1cec-4a19-9966-35b9c838bffc"
	width="767px">
</video>

> [!CAUTION]
> It's still early days. Things are likely to behave in strange, unintuitive ways. Or be plain buggy.
> Please get in touch (by filing an issue, or by starting a discussion) so we can iron out the kinks.

[Tree-sitter]: https://tree-sitter.github.io/tree-sitter/
[Ink]: https://www.inklestudios.com/ink/

## Editor Support

See the [`queries/editors`](queries/editors/) directory. If your editor is supported,
the corresponding subfolder should contain everything you need.

> [!NOTE]
> If you'd like to see your editor supported, please get in touch.
> I probably won't do it myself, but PRs are always welcome.

- [ ] Vim
- [ ] Neovim
- [ ] Emacs
- [x] Helix

	Put `languages.toml` and the `*.scm` files in your Helix user config (e.g. `~/.config/helix/`).

	For details see the [Helix guides](https://docs.helix-editor.com/languages.html).

- [ ] VSCode
- [ ] \[… your editor here …\]

## Why?

Inkle themselves provide [syntax files for Sublime 3](https://github.com/inkle/ink/tree/master/Sublime3Syntax),
but tree-sitter is more powerful. Notably, this grammar allows distinguishing between an expression in
conditional text, and similar-looking normal text in alternatives:

```ink
// Conditional text:
{blofeld and old: I saw that old git,|Dunno,} I said.
/*       ^^^ `and` is an operator, therefore
 --------------- <- all this is an expression */

// Alternative text:
{blofeld is old: and that's a fact,|I already told you about his age,} I said.
/*       ^^ `is` is *not* an operator, therefore
 ---------------------------------- <- all this is just text */
```

In addition, tree-sitter allows for not just highlighting, but also source code navigation, indenting, etc.
With this, advanced editor support is possible for multiple editors.
