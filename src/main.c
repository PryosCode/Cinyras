#include <stdio.h>
#include <string.h>
#include <curl/curl.h>
#include "lexer.h"

const char *read_file(const char *file) {
    static char str[] = "";
    FILE *f = fopen(file, "r");
    char c;
    while ((c = fgetc(f)) != EOF) {
        strncat(str, &c, 1);
    }
    fclose(f);
    return str;
}

int main(int argc, char *argv[]) {
    for (int i = 0; i < argc; i++) {
        for (int j = 0; j < strlen(argv[i]); j++){
            printf("%c", argv[i][j]);
        }
        printf(" ");
    }
    printf("\n");

    tokenize();

    if (argc > 1) {
        printf("%s\n", read_file(argv[1]));
    } else {
        printf("Wrong arguemnts\n");
    }
}