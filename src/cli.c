#include "cli.h"

bool help() {
    printf("USAGE:\n");
    printf("    cinyras [FLAGS] <FILE> [ARGS]...\n");
    printf("\n");
    printf("FLAGS:\n");
    printf("    -h, --help      Prints help information\n");
    printf("    -V, --version   Prints version information\n");
    printf("    -v, --verbose   Use verbose output\n");
    printf("\n");
    printf("ARGS:\n");
    printf("    <FILE>      Sets the input file to use\n");
    printf("    <ARGS>...   Arguments passed to script\n");
    return true;
}

bool version() {
    printf("Cinyras 0.0.1\n");
    return true;
}

bool verbose() {
    printf("Coming Soon\n");
    return false;
}

bool parse(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        const char *w = argv[i];
        if (strsta("--", w)) {
            w += 2;
            if (strcmp(w, "help") == 0) {
                return help();
            } else if(strcmp(w, "version") == 0) {
                return version();
            } else if(strcmp(w, "verbose") == 0) {
                return verbose();
            }
        } else if (strsta("-", w)) {
            for (int j = 1; j < strlen(w); j++) {
                switch(w[j]) {
                    case 'h': return help();
                    case 'V': return version();
                    case 'v': return verbose();
                }
            }
        }
    }
    return false;
}