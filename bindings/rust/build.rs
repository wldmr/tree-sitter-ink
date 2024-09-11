use std::path::Path;

fn main() {
    #[cfg(feature = "type-sitter")]
    compile_type_sitter();

    compile_lib();
}

fn compile_lib() {
    let src_dir = Path::new("src");

    let mut c_config = cc::Build::new();
    c_config.std("c11").include(src_dir);

    #[cfg(target_env = "msvc")]
    c_config.flag("-utf-8");

    let parser_path = src_dir.join("parser.c");
    c_config.file(&parser_path);
    println!("cargo:rerun-if-changed={}", parser_path.to_str().unwrap());

    // NOTE: if your language uses an external scanner, uncomment this block:
    let scanner_path = src_dir.join("scanner.c");
    c_config.file(&scanner_path);
    println!("cargo:rerun-if-changed={}", scanner_path.to_str().unwrap());

    c_config.compile("tree-sitter-ink");
}

#[cfg(feature = "type-sitter")]
fn compile_type_sitter() {
    use rust_format::Formatter;
    use type_sitter_gen::{generate_nodes, tree_sitter};

    let out_dir = std::env::var_os("OUT_DIR").unwrap();
    let formatter = rust_format::RustFmt::new();
    let type_sitter_input = "src/node-types.json";
    println!("cargo::rerun-if-changed={type_sitter_input}");
    let type_sitter_ink_path = Path::new(&out_dir).join("type_sitter_ink.rs");
    let type_sitter_ink_types = generate_nodes(type_sitter_input, &tree_sitter())
        .map(|nodes| format!("{}", nodes))
        .unwrap();
    let type_sitter_ink_types = formatter.format_str(type_sitter_ink_types).unwrap();
    std::fs::write(&type_sitter_ink_path, type_sitter_ink_types).unwrap();
}
