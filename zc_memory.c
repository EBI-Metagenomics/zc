#include "zc_memory.h"
#include <assert.h>
#include <stdlib.h>
#include <string.h>

#define ZC_API

ZC_API void *zc_reallocf(void *ptr, size_t size)
{
    assert(size > 0);
    void *new_ptr = realloc(ptr, size);

    if (!new_ptr) free(ptr);
    return new_ptr;
}

ZC_API void zc_bzero(void *dst, size_t dsize) { memset(dst, 0, dsize); }
