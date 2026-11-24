#ifndef RUNTIME_STRING_H
#define RUNTIME_STRING_H

#include "common.h"

extern "C" {

/* Out-of-line C library comparison, distinct from the compiler intrinsic. */
s32 libc_strncmp(const char *first, const char *second, u32 length);

} /* extern "C" */

#endif
