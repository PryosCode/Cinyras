#ifndef CURL_H
#define CURL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <curl/curl.h>

extern bool verbose;

char *read_page(const char *url);

#endif