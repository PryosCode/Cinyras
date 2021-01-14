fn main() {
    if std::env::args().len() > 1 {
        let arg = std::env::args().nth(1).unwrap();
        let string = std::fs::read_to_string(arg).expect("Error");
        println!("{}", string);
    }
}