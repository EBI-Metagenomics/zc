#ifndef ZC_LIMITS_H
#define ZC_LIMITS_H

#include <inttypes.h>
#include <limits.h>

#if SHRT_MAX == INT8_MAX
#define ZC_BYTES_PER_SHORT 1
#define ZC_SHORT_WIDTH 8
#elif SHRT_MAX == INT16_MAX
#define ZC_BYTES_PER_SHORT 2
#define ZC_SHORT_WIDTH 16
#elif SHRT_MAX == INT32_MAX
#define ZC_BYTES_PER_SHORT 4
#define ZC_SHORT_WIDTH 32
#elif SHRT_MAX == INT64_MAX
#define ZC_BYTES_PER_SHORT 8
#define ZC_SHORT_WIDTH 64
#else
#error "Cannot determine size of short"
#endif

#if INT_MAX == INT8_MAX
#define ZC_BYTES_PER_INT 1
#define ZC_INT_WIDTH 8
#elif INT_MAX == INT16_MAX
#define ZC_BYTES_PER_INT 2
#define ZC_INT_WIDTH 16
#elif INT_MAX == INT32_MAX
#define ZC_BYTES_PER_INT 4
#define ZC_INT_WIDTH 32
#elif INT_MAX == INT64_MAX
#define ZC_BYTES_PER_INT 8
#define ZC_INT_WIDTH 64
#else
#error "Cannot determine size of int"
#endif

#if LONG_MAX == INT8_MAX
#define ZC_BYTES_PER_LONG 1
#define ZC_LONG_WIDTH 8
#elif LONG_MAX == INT16_MAX
#define ZC_BYTES_PER_LONG 2
#define ZC_LONG_WIDTH 16
#elif LONG_MAX == INT32_MAX
#define ZC_BYTES_PER_LONG 4
#define ZC_LONG_WIDTH 32
#elif LONG_MAX == INT64_MAX
#define ZC_BYTES_PER_LONG 8
#define ZC_LONG_WIDTH 64
#else
#error "Cannot determine size of long"
#endif

#endif
