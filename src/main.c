#include <stdio.h>
#include <string.h>

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
    if (argc > 1) {
        const char *content = read_file(argv[1]);
        printf(content);
    } else {
        printf("Wrong arguemnts\n");
    }
}