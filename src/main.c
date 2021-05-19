#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "string.h"
#include "web.h"
#include "file.h"
#include "cli.h"
#include "lexer.h"

bool verbose;

void language(char *data) {
    char *tokens = tokenize(data);
    free(data);
    printf("%s\n", tokens);
    free(tokens);
}

int main(int argc, char *argv[]) {
    if (parse(argc, argv)) {
        return 0;
    }

    for (int i = 1; i < argc; i++) {
        const char *file = argv[i];
        if (!strsta("-", file)) {
            if (strsta("http://", file) || strsta("https://", file)) {
                char *data = read_page(file);
                if (data) {
                    language(data);
                } else {
                    printf("An error occurred.\n");
                }
            } else {
                char *data = read_file(file);
                if (data) {
                    language(data);
                } else {
                    printf("File not found.\n");
                }
            }
            return 0;
        }
    }

    usage();
    printf("\n");
    printf("For more information try --help\n");
    return 1;
}