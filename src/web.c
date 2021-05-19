#include "web.h"
 
char *read_page(const char *url) {
  if (verbose) {
    printf("GET: %s\n", url);
  }

  char *content = malloc(1);
  const char *text = "Coming Soon";
  content = realloc(content, sizeof(content) + sizeof(text));
  strcat(content, text);

  return content;
}