#ifndef ZC_ENDIAN_H
#define ZC_ENDIAN_H

#include "zc_byteswap.h"
#include <stdint.h>

uint16_t zc_htons(uint16_t);
uint32_t zc_htonl(uint32_t);
uint64_t zc_htonll(uint64_t);

uint16_t zc_ntohs(uint16_t);
uint32_t zc_ntohl(uint32_t);
uint64_t zc_ntohll(uint64_t);

#endif
