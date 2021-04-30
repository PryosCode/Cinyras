#include <stdio.h>
#include <string.h>
#include "string.h"
#include "curl.h"

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

    if (argc > 1) {
        const char *file = argv[1];
        if (strstarts("http://", file) || strstarts("https://", file)) {
            const char *data = read_page(file);
            printf("%s\n", data);
        } else {
            const char *data = read_file(file);
            printf("%s\n", data);
        }
    } else {
        printf("Wrong arguments\n");
    }
}