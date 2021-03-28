use regex::Regex;

pub fn tokenize(input: String) -> Vec<String> {
    let tokens: Vec<&str> = vec![
        "+",
        "-",
        "*",
        "/",
        ";"
    ];

    let mut tokenized: Vec<String> = vec![];
    let lines: Vec<String> = input.lines().map(|s| s.to_owned()).collect();

    'liner: for line in lines {
        let mut token: String = "".to_string();

        for char in line.chars() {
            match char {
                '+' | '-' | '*' | '/' | ';' => {
                    tokenized.push(char.to_string());
                }
                '0' | '1' | '2' | '3' | '4' | '5' | '6' | '7' | '8' | '9' => {
                    token.push(char);
                }
                _ => {

                }
            }
        }

        if !token.is_empty() {
            tokenized.push(token)
        }
    }
    tokenized
}