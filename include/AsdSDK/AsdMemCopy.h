/* Block copies (smt4a). */
#ifndef ASDSDK_ASDMEMCOPY_H
#define ASDSDK_ASDMEMCOPY_H

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Copies `bytes` bytes from `source` to `destination`. */
void *rt_memcpy(void *destination, const void *source, u32 bytes);

/* rt_memcpy with the source and destination arguments swapped (armlink NOPed the tail call to the
 * next function, rt_memcpy). */
void FUN_002e59f8(const void *source, void *destination, u32 bytes);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
