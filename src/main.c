#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "curl.h"
#include "string.h"
#include "cli.h"

char *read_file(const char *file) {
    FILE *f = fopen(file, "r");
    if (!f) {
        return NULL;
    }

    fseek(f, 0, SEEK_END);
    long size = ftell(f);
    fseek(f, 0, SEEK_SET);
    char *str = malloc(size);

    char c;
    while ((c = fgetc(f)) != EOF) {
        strncat(str, &c, 1);
    }

    return str;
}

int main(int argc, char *argv[]) {
    if (parse(argc, argv)) {
        return 0;
    }

    for (int i = 1; i < argc; i++) {
        const char *file = argv[i];
        if (!strsta("-", file)) {
            if (strsta("http://", file) || strsta("https://", file)) {
                const char *data = read_page(file);
                printf("%s\n", data);
            } else {
                char *data = read_file(file);
                if (data) {
                    printf("%s\n", data);
                    free(data);
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