/* stdint.h */

/*
 * Copyright (c) 2014 Wind River Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_LIB_LIBC_MINIMAL_INCLUDE_STDINT_H_
#define ZEPHYR_LIB_LIBC_MINIMAL_INCLUDE_STDINT_H_

#ifdef __cplusplus
extern "C" {
#endif

#define INT8_MAX    0x7F
#define INT16_MAX   0x7FFF
#define INT32_MAX   0x7FFFFFFF
#define INT64_MAX   0x7FFFFFFFFFFFFFFFLL

#define INT8_MIN    (-INT8_MAX - 1)
#define INT16_MIN   (-INT16_MAX - 1)
#define INT32_MIN   (-INT32_MAX - 1)
#define INT64_MIN   (-INT64_MAX - 1LL)

#define UINT8_MAX   0xFF
#define UINT16_MAX  0xFFFF
#define UINT32_MAX  0xFFFFFFFFU
#define UINT64_MAX  0xFFFFFFFFFFFFFFFFULL

#define INTPTR_MIN  INT32_MIN
#define INTPTR_MAX  INT32_MAX
#define UINTPTR_MAX UINT32_MAX

#define PTRDIFF_MIN INT32_MIN
#define PTRDIFF_MAX INT32_MAX

#define SIZE_MAX    UINT32_MAX

typedef signed char         int8_t;
typedef signed short        int16_t;
typedef signed int          int32_t;
typedef signed long long    int64_t;

/* Assume int to be the fastest type for all types except 64bit ones */

typedef signed int          int_fast8_t;
typedef signed int          int_fast16_t;
typedef signed int          int_fast32_t;
typedef signed long long    int_fast64_t;

typedef signed char         int_least8_t;
typedef signed short        int_least16_t;
typedef signed int          int_least32_t;
typedef signed long long    int_least64_t;

typedef unsigned char       uint8_t;
typedef unsigned short      uint16_t;
typedef unsigned int        uint32_t;
typedef unsigned long long  uint64_t;

typedef unsigned int        uint_fast8_t;
typedef unsigned int        uint_fast16_t;
typedef unsigned int        uint_fast32_t;
typedef unsigned long long  uint_fast64_t;

typedef unsigned char       uint_least8_t;
typedef unsigned short      uint_least16_t;
typedef unsigned int        uint_least32_t;
typedef unsigned long long  uint_least64_t;

typedef int                 intptr_t;
typedef unsigned int        uintptr_t;

#ifdef __cplusplus
}
#endif

#endif /* ZEPHYR_LIB_LIBC_MINIMAL_INCLUDE_STDINT_H_ */
