extern crate clap;
use clap::{App, Arg};

mod lexer;
mod parser;

fn main() {
    let matches = App::new("Cinyras")
        .version("0.0.1")
        .author("PryosCode <info@pryoscode.net>")
        .about("Cinyras is a high level general purpose interpreted scripting language with its own interpreter written in Rust.")
        .arg(Arg::with_name("INPUT")
            .help("Sets the input file to use")
            .required(true))
        .get_matches();

    let file = matches.value_of("INPUT").unwrap();
    let string = std::fs::read_to_string(file).expect("Error");
    println!("{}", string);
}