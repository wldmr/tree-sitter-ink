//! This crate provides Ink language support for the [tree-sitter][] parsing library.
//!
//! Typically, you will use the [language][language func] function to add this language to a
//! tree-sitter [Parser][], and then use the parser to parse some code:
//!
//! ```
//! let code = r#"
//! === Some_knot ===
//! It was a dark and stormy <>
//! * (night) night
//! * dark storm
//! - <> and I was feeling (night:tired|cold and was unable to see).
//! "#;
//! let mut parser = tree_sitter::Parser::new();
//! parser.set_language(&tree_sitter_ink::language()).expect("Error loading Ink grammar");
//! let tree = parser.parse(code, None).unwrap();
//! assert!(!tree.root_node().has_error());
//! ```
//!
//! [Language]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Language.html
//! [language func]: fn.language.html
//! [Parser]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Parser.html
//! [tree-sitter]: https://tree-sitter.github.io/
//!
//! # Features
//!
//! ## Typed syntax nodes with `type-sitter`
//!
//! Enabling this feature exports a module named `node_types` which contains type
//! definitions based on `node-types.json` build using the [type-sitter][] library.
//!
//! [type-sitter]: https://github.com/Jakobeha/type-sitter
//!
//! ### Example
//!
//! ```
//! let typed_root: tree_sitter_ink::node_types::Ink = tree
//!     .root_node()
//!     .try_into()
//!     .expect("We should have checked for errors.");
//! ```

use tree_sitter::Language;

extern "C" {
    fn tree_sitter_ink() -> Language;
}

/// Get the tree-sitter [Language][] for this grammar.
///
/// [Language]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Language.html
pub fn language() -> Language {
    unsafe { tree_sitter_ink() }
}

/// The content of the [`node-types.json`][] file for this grammar.
///
/// [`node-types.json`]: https://tree-sitter.github.io/tree-sitter/using-parsers#static-node-types
pub const NODE_TYPES: &str = include_str!("../../src/node-types.json");

/// The typed syntax nodes
#[cfg(feature = "type-sitter")]
pub mod node_types {
    include!(concat!(env!("OUT_DIR"), "/type_sitter_ink.rs"));
}

// Uncomment these to include any queries that this grammar contains

// pub const HIGHLIGHTS_QUERY: &str = include_str!("../../queries/highlights.scm");
// pub const INJECTIONS_QUERY: &str = include_str!("../../queries/injections.scm");
// pub const LOCALS_QUERY: &str = include_str!("../../queries/locals.scm");
// pub const TAGS_QUERY: &str = include_str!("../../queries/tags.scm");

#[cfg(test)]
mod tests {
    #[test]
    fn test_can_load_grammar() {
        let mut parser = tree_sitter::Parser::new();
        parser
            .set_language(&super::language())
            .expect("Error loading Ink grammar");
    }
}
