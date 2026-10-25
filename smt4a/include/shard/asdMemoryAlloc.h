#ifndef SHARD_ASDMEMORYALLOC_H
#define SHARD_ASDMEMORYALLOC_H

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

void *asdMemoryAlloc(u32 heap, u32 b, u32 c, u32 size, s32 extra);

#ifdef __cplusplus
}
#endif

#endif
