#include "zc_endian.h"
#include "zc_byteswap.h"
#include <stdlib.h>

#define ZC_API

enum
{
    ZC_ENDIAN_LITTLE = 1234,
    ZC_ENDIAN_BIG = 4321,
};

#ifdef __STDC_ENDIAN_NATIVE__
#if __STDC_ENDIAN_NATIVE__ == __STDC_ENDIAN_LITTLE__
#define ZC_ENDIAN_NATIVE ZC_ENDIAN_LITTLE
#elif __STDC_ENDIAN_NATIVE__ == __STDC_ENDIAN_BIG__
#define ZC_ENDIAN_NATIVE ZC_ENDIAN_BIG
#else
#error "Unknown native byte order"
#endif
#endif

#ifdef ZC_ENDIAN_NATIVE

#if ZC_ENDIAN_NATIVE == ZC_ENDIAN_LITTLE

ZC_API uint16_t zc_htons(uint16_t x) { return zc_byteswap16(x); }
ZC_API uint32_t zc_htonl(uint32_t x) { return zc_byteswap32(x); }
ZC_API uint64_t zc_htonll(uint64_t x) { return zc_byteswap64(x); }

ZC_API uint16_t zc_ntohs(uint16_t x) { return zc_htons(x); }
ZC_API uint32_t zc_ntohl(uint32_t x) { return zc_htonl(x); }
ZC_API uint64_t zc_ntohll(uint64_t x) { return zc_htonll(x); }

#else
ZC_API uint16_t zc_htons(uint16_t x) { return x; }
ZC_API uint32_t zc_htonl(uint32_t x) { return x; }
ZC_API uint64_t zc_htonll(uint64_t x) { return x; }

ZC_API uint16_t zc_ntohs(uint16_t x) { return x; }
ZC_API uint32_t zc_ntohl(uint32_t x) { return x; }
ZC_API uint64_t zc_ntohll(uint64_t x) { return x; }
#endif

#else

static int zc_endianness(void)
{
    union
    {
        uint32_t value;
        uint8_t data[sizeof(uint32_t)];
    } number;

    number.data[0] = 0x00;
    number.data[1] = 0x01;
    number.data[2] = 0x02;
    number.data[3] = 0x03;

    switch (number.value)
    {
    case (uint32_t)(0x00010203):
        return ZC_ENDIAN_BIG;
    case (uint32_t)(0x03020100):
        return ZC_ENDIAN_LITTLE;
    default:
        exit(1);
        return -1;
    }
}

ZC_API uint16_t zc_htons(uint16_t x)
{
    if (zc_endianness() == ZC_ENDIAN_BIG) return x;
    return zc_byteswap16(x);
}

ZC_API uint32_t zc_htonl(uint32_t x)
{
    if (zc_endianness() == ZC_ENDIAN_BIG) return x;
    return zc_byteswap32(x);
}

ZC_API uint64_t zc_htonll(uint64_t x)
{
    if (zc_endianness() == ZC_ENDIAN_BIG) return x;
    return zc_byteswap64(x);
}

ZC_API uint16_t zc_ntohs(uint16_t x) { return zc_htons(x); }
ZC_API uint32_t zc_ntohl(uint32_t x) { return zc_htonl(x); }
ZC_API uint64_t zc_ntohll(uint64_t x) { return zc_htonll(x); }

#endif
