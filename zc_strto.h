#ifndef ZC_STRTO_H
#define ZC_STRTO_H

#include <inttypes.h>

long long zc_strto_llong(const char *restrict, char **restrict, int);
long zc_strto_long(const char *restrict, char **restrict, int);
int zc_strto_int(const char *restrict, char **restrict, int);
short zc_strto_short(const char *restrict, char **restrict, int);

unsigned long long zc_strto_ullong(const char *restrict, char **restrict, int);
unsigned long zc_strto_ulong(const char *restrict, char **restrict, int);
unsigned int zc_strto_uint(const char *restrict, char **restrict, int);
unsigned short zc_strto_ushort(const char *restrict, char **restrict, int);

int64_t zc_strto_int64(const char *restrict, char **restrict, int);
int32_t zc_strto_int32(const char *restrict, char **restrict, int);
int16_t zc_strto_int16(const char *restrict, char **restrict, int);
int8_t zc_strto_int8(const char *restrict, char **restrict, int);

uint64_t zc_strto_uint64(const char *restrict, char **restrict, int);
uint32_t zc_strto_uint32(const char *restrict, char **restrict, int);
uint16_t zc_strto_uint16(const char *restrict, char **restrict, int);
uint8_t zc_strto_uint8(const char *restrict, char **restrict, int);

float zc_strto_float(const char *restrict, char **restrict);
double zc_strto_double(const char *restrict, char **restrict);
long double zc_strto_ldouble(const char *restrict, char **restrict);

#endif
