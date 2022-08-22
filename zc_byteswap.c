#include "zc_byteswap.h"

uint16_t zc_byteswap16(uint16_t x) { return (uint16_t)(x << 8 | x >> 8); }

uint32_t zc_byteswap32(uint32_t x)
{
    return (uint32_t)(x >> 24 | (x >> 8 & 0xff00) | (x << 8 & 0xff0000) |
                      x << 24);
}

uint64_t zc_byteswap64(uint64_t x)
{
    return (uint64_t)((zc_byteswap32(x) + 0ULL) << 32 | zc_byteswap32(x >> 32));
}
