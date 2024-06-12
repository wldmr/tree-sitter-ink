# Tree-Sitter-Ink: 

This is a [Tree-sitter] grammar for the [Ink] interactive fiction scripting language.
It supports all syntax up to version 1.1.1. (1.2 incoming, see issue
[#3](https://github.com/wldmr/tree-sitter-ink/issues/3)).

[Tree-sitter]: https://tree-sitter.github.io/tree-sitter/
[Ink]: https://www.inklestudios.com/ink/

> [!CAUTION]
> It's still early days. Things are likely to behave in strange, unintuitive ways.
> Please get in touch (by filing an issue, or by starting a discussion) so we can iron out the kinks.

```ink
=== back_in_london ===

We arrived into London at 9.45pm exactly.
*	"There is not a moment to lose!"[] I declared.
	-> hurry_outside
*	"Monsieur, let us savour this moment!"[] I declared.
	My master clouted me firmly around the head and dragged me out of the door.
	-> dragged_outside
*	[We hurried home] -> hurry_outside

=== hurry_outside ===
We hurried home to Savile Row -> as_fast_as_we_could

=== dragged_outside ===
He insisted that we hurried home to Savile Row
-> as_fast_as_we_could

=== as_fast_as_we_could ===
<> as fast as we could.
```


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
