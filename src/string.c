#include "string.h"

bool strsta(const char *pre, const char* str) {
    return strncmp(pre, str, strlen(pre)) == 0;
}