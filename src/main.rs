use clap::{ App, Arg };
use inflector::Inflector;

mod lexer;
mod parser;

fn main() {
    let matches = App::new(env!("CARGO_PKG_NAME").to_title_case())
        .version(env!("CARGO_PKG_VERSION"))
        .author(env!("CARGO_PKG_AUTHORS"))
        .about(env!("CARGO_PKG_DESCRIPTION"))
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
        let request = reqwest::blocking::get(file).unwrap();
        if matches.is_present("verbose") {
            println!("{}", request.status());
        }
        content = request.text().unwrap();
    } else {
        content = std::fs::read_to_string(file).unwrap();
    }
    println!("{}", content);
    println!();

    if matches.is_present("ARGS") {
        for arg in matches.values_of("ARGS").unwrap().collect::<Vec<_>>() {
            print!("{} ", arg);
        }
    }

    let tokens = lexer::tokenize(content);
    print!("{:?}", tokens);
}