#ifndef CLI_H
#define CLI_H

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "string.h"

extern bool verbose;

void usage();
bool parse(int argc, char *argv[]);

#endif