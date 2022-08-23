#ifndef ZC_STRING_H
#define ZC_STRING_H

#include <stddef.h>

char *zc_strdup(const char *s);
size_t zc_strlcat(char *dst, char const *src, size_t dsize);
size_t zc_strlcpy(char *dst, char const *src, size_t dsize);

#endif
