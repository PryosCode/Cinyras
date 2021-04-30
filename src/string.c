#include "string.h"

bool strstarts(const char *pre, const char* str) {
    return strncmp(pre, str, strlen(pre)) == 0;
}