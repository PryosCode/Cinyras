#ifndef FILE_H
#define FILE_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>

extern bool verbose;

char *read_file(const char *file);

#endif