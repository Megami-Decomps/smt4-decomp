#ifndef SHARD_ASDMEMORYALLOCTRACKED_H
#define SHARD_ASDMEMORYALLOCTRACKED_H

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 region, u32 size, u32 option);

#ifdef __cplusplus
}
#endif

#endif
