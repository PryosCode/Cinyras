extern crate clap;
use clap::{App, Arg};

mod lexer;
mod parser;

fn main() {
    let matches = App::new("Cinyras")
        .version("0.0.1")
        .author("PryosCode <info@pryoscode.net>")
        .about("Cinyras is a high level general purpose interpreted scripting language with its own interpreter written in Rust.")
        .arg(Arg::with_name("FILE")
            .help("Sets the input file to use")
            .required(true))
        .arg(Arg::with_name("ARGS")
            .help("Arguments passed to script")
            .multiple(true))
        .arg(Arg::with_name("verbose")
            .short("v")
            .long("verbose")
            .help("Use verbose output"))
        .get_matches();

    let file = matches.value_of("FILE").unwrap();
    let content;
    if file.to_lowercase().starts_with("http:") || file.to_lowercase().starts_with("https:") {
        content = reqwest::blocking::get(file).unwrap().text().unwrap();
    } else {
        content = std::fs::read_to_string(file).unwrap();
    }
    println!("{}", content);

    if matches.is_present("ARGS") {
        for arg in matches.values_of("ARGS").unwrap().collect::<Vec<_>>() {
            print!("{} ", arg)
        }
    }
}