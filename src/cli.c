#include "cli.h"

void usage() {
    printf("USAGE:\n");
    printf("    cinyras [FLAGS] <FILE> [ARGS]...\n");
}

bool help() {
    usage();
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

void verbose() {
    printf("Coming Soon\n");
}

bool parse(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        const char *w = argv[i];
        if (strsta("--", w)) {
            w += 2;
            if (!strcmp(w, "help")) {
                return help();
            } else if(!strcmp(w, "version")) {
                return version();
            } else if(!strcmp(w, "verbose")) {
                verbose();
            }
        } else if (strsta("-", w)) {
            for (int j = 1; j < strlen(w); j++) {
                switch(w[j]) {
                    case 'h': return help();
                    case 'V': return version();
                    case 'v': verbose(); break;
                }
            }
        }
    }
    return false;
}