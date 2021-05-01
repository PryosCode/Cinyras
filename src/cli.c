#include "cli.h"

void usage() {
    printf("USAGE:\n");
    printf("    cinyras [FLAGS] <FILE> [ARGS]...\n");
}

void help() {
    version();
    printf("Cinyras is a high level general purpose interpreted scripting language with its own interpreter.\n");
    printf("\n");
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
}

void version() {
    printf("Cinyras 0.0.1\n");
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
                help();
                return true;
            } else if(!strcmp(w, "version")) {
                version();
                return true;
            } else if(!strcmp(w, "verbose")) {
                verbose();
                return false;
            }
        } else if (strsta("-", w)) {
            for (int j = 1; j < strlen(w); j++) {
                switch(w[j]) {
                    case 'h': help(); return true;
                    case 'V': version(); return true;
                    case 'v': verbose(); break;
                }
            }
        }
    }
    return false;
}