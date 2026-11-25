#ifndef UTIL_BINARYSEARCH_H
#define UTIL_BINARYSEARCH_H

#include "common.h"

extern "C" {
/* The C library's bsearch (Thumb, 0x2b46f8 in Shin Megami Tensei IV): the element of the sorted array equal to
 * `key` under `compare`, or NULL. */
void *libc_bsearch(const void *key, const void *base, u32 count, u32 size,
    s32 (*compare)(const void *, const void *));

/* Orders records by their leading unsigned byte. */
s32 sortCompareByteAscending(const void *left, const void *right);
} /* extern "C" */

#endif
