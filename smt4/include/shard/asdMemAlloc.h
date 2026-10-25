#ifndef SHARD_ASDMEMALLOC_H
#define SHARD_ASDMEMALLOC_H

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

void *asdMemAlloc(int heap, u32 a, u32 b, u32 size, u32 c);

#ifdef __cplusplus
}
#endif

#endif
