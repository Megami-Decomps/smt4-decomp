#ifndef RUNTIME_STRING_H
#define RUNTIME_STRING_H

#include "common.h"

extern "C" {

/* Out-of-line C library comparison, distinct from the compiler intrinsic. */
s32 libc_strncmp(const char *first, const char *second, u32 length);

/* The ARM runtime's word-wise clear of a block. */
void rt_memclr(void *block, u32 size);

} /* extern "C" */

#endif
