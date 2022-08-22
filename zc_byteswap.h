#ifndef ZC_BYTESWAP_H
#define ZC_BYTESWAP_H

// Acknowledgment: musl

#include <stdint.h>

uint16_t zc_byteswap16(uint16_t x);
uint32_t zc_byteswap32(uint32_t x);
uint64_t zc_byteswap64(uint64_t x);

#endif
