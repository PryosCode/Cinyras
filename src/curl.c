#include "curl.h"

struct MemoryStruct {
  char *memory;
  size_t size;
};

static size_t write_memory_callback(void *contents, size_t size, size_t nmemb, void *userp) {
  size_t realsize = size * nmemb;
  struct MemoryStruct *mem = (struct MemoryStruct *) userp;
 
  char *ptr = realloc(mem->memory, mem->size + realsize + 1);

  mem->memory = ptr;
  memcpy(&(mem->memory[mem->size]), contents, realsize);
  mem->size += realsize;
  mem->memory[mem->size] = 0;
 
  return realsize;
}
 
char *read_page(const char *url) {
  CURL *curl_handle;
  CURLcode res;
  
  struct MemoryStruct chunk;
  chunk.memory = malloc(1);
  chunk.size = 0;
 
  curl_global_init(CURL_GLOBAL_ALL);
  curl_handle = curl_easy_init();
  curl_easy_setopt(curl_handle, CURLOPT_URL, url);
  curl_easy_setopt(curl_handle, CURLOPT_FOLLOWLOCATION, 1L);
  curl_easy_setopt(curl_handle, CURLOPT_WRITEFUNCTION, write_memory_callback);
  curl_easy_setopt(curl_handle, CURLOPT_WRITEDATA, (void *) &chunk);
  curl_easy_setopt(curl_handle, CURLOPT_USERAGENT, "libcurl-agent/1.0");

  if (verbose) {
    printf("GET: %s\n", url);
  }

  res = curl_easy_perform(curl_handle);
 
  if(res != CURLE_OK) {
    return NULL;
  }
 
  curl_easy_cleanup(curl_handle);
  curl_global_cleanup();
 
  return chunk.memory;
}