#ifndef WEB_H
#define WEB_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

extern bool verbose;

char *read_page(const char *url);

#endif