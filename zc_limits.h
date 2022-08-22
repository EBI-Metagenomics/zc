#ifndef ZC_LIMITS_H
#define ZC_LIMITS_H

#include <inttypes.h>
#include <limits.h>

#if SHRT_MAX == INT8_MAX
#define ZC_BYTES_PER_SHORT 1
#define ZC_BITS_PER_SHORT 8
#elif SHRT_MAX == INT16_MAX
#define ZC_BYTES_PER_SHORT 2
#define ZC_BITS_PER_SHORT 16
#elif SHRT_MAX == INT32_MAX
#define ZC_BYTES_PER_SHORT 4
#define ZC_BITS_PER_SHORT 32
#elif SHRT_MAX == INT64_MAX
#define ZC_BYTES_PER_SHORT 8
#define ZC_BITS_PER_SHORT 64
#else
#error "Cannot determine size of short"
#endif

#if INT_MAX == INT8_MAX
#define ZC_BYTES_PER_INT 1
#define ZC_BITS_PER_INT 8
#elif INT_MAX == INT16_MAX
#define ZC_BYTES_PER_INT 2
#define ZC_BITS_PER_INT 16
#elif INT_MAX == INT32_MAX
#define ZC_BYTES_PER_INT 4
#define ZC_BITS_PER_INT 32
#elif INT_MAX == INT64_MAX
#define ZC_BYTES_PER_INT 8
#define ZC_BITS_PER_INT 64
#else
#error "Cannot determine size of int"
#endif

#if LONG_MAX == INT8_MAX
#define ZC_BYTES_PER_LONG 1
#define ZC_BITS_PER_LONG 8
#elif LONG_MAX == INT16_MAX
#define ZC_BYTES_PER_LONG 2
#define ZC_BITS_PER_LONG 16
#elif LONG_MAX == INT32_MAX
#define ZC_BYTES_PER_LONG 4
#define ZC_BITS_PER_LONG 32
#elif LONG_MAX == INT64_MAX
#define ZC_BYTES_PER_LONG 8
#define ZC_BITS_PER_LONG 64
#else
#error "Cannot determine size of long"
#endif

#if INTPTR_MAX == INT8_MAX
#define ZC_BYTES_PER_POINTER 1
#define ZC_BITS_PER_POINTER 8
#elif INTPTR_MAX == INT16_MAX
#define ZC_BYTES_PER_POINTER 2
#define ZC_BITS_PER_POINTER 16
#elif INTPTR_MAX == INT32_MAX
#define ZC_BYTES_PER_POINTER 4
#define ZC_BITS_PER_POINTER 32
#elif INTPTR_MAX == INT64_MAX
#define ZC_BYTES_PER_POINTER 8
#define ZC_BITS_PER_POINTER 64
#else
#error "Cannot determine size of void *"
#endif

#endif
