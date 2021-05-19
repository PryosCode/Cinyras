#include "lexer.h"

enum IDENTIFIERS {
    INT, DOUBLE, BOOL, CHAR, STRING,
    TRUE, FALSE,
    IF, ELSE, WHILE, FOR,
    EQUAL, NOT, PLUS, MINUS, MULTIPLY, DIVIDE,
    COMMA,
    RETURN, BREAK, CONTINUE,
    PRINT, PRINTF,
    UNKNOWN
};

const char* IDENTIFIERS[] = {
    "INT", "DOUBLE", "BOOL", "CHAR", "STRING",
    "TRUE", "FALSE",
    "IF", "ELSE", "WHILE", "FOR",
    "EQUAL", "NOT", "PLUS", "MINUS", "MULTIPLY", "DIVIDE",
    "COMMA",
    "RETURN", "BREAK", "CONTINUE",
    "PRINT", "PRINTF",
    "UNKNOWN"
};

char *pack(enum IDENTIFIERS identifier, char *value) {

}

char *unpack() {
    
}

char *tokenize(char *data) {
    char *tokens = malloc(1);

    const char *item = IDENTIFIERS[UNKNOWN];
    tokens = realloc(tokens, sizeof(tokens) + sizeof(item));
    strcat(tokens, item);

    return tokens;
}