#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "curl.h"
#include "file.h"
#include "cli.h"

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
                    printf("%s\n", data);
                    free(data);
                } else {
                    printf("An error occurred.\n");
                }
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