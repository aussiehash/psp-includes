#ifndef __include_types_h
#define __include_types_h

#ifdef IN_PSP
typedef unsigned char      uint8_t;
typedef unsigned short     uint16_t;
typedef unsigned int       uint32_t;
typedef unsigned long long uint64_t;

#define UINT32_MAX ((uint32_t)0xffffffff)

typedef char      int8_t;
typedef short     int16_t;
typedef int       int32_t;
typedef long long int64_t;

typedef uint32_t size_t;
typedef int32_t  ssize_t;

typedef uint32_t uintptr_t;

#define NULL ((void *)0)
#endif

/** A SMN (System Management Network) address. */
typedef uint32_t SMNADDR;
/** A virtual PSP memory address. */
typedef uint32_t PSPADDR;
/** A x86 physical address. */
typedef uint64_t X86PADDR;
#define NIL_X86PADDR (~0ULL)

/** R0 pointer. */
typedef uint64_t R0PTR;

#endif
