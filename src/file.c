#include "file.h"

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