#ifndef ZC_MEMORY_H
#define ZC_MEMORY_H

#include <stddef.h>

void *zc_reallocf(void *ptr, size_t size);
void zc_bzero(void *dst, size_t dsize);

#endif
