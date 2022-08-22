#ifndef ZC_MEMPOOL_H
#define ZC_MEMPOOL_H

#include <stddef.h>

struct mempool;

struct mempool *zc_mempool_new(unsigned bits, size_t object_size);
void zc_mempool_del(struct mempool *);

void *zc_mempool_new_object(struct mempool *);
void zc_mempool_del_object(struct mempool *, void *object);

#endif
