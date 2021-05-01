#include <stdio.h>
#include <string.h>
#include "curl.h"
#include "string.h"
#include "cli.h"

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
                const char *data = read_file(file);
                printf("%s\n", data);
            }
            return 0;
        }
    }

    usage();
    printf("\n");
    printf("For more information try --help\n");
    return 1;
}