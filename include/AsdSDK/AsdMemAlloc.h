#pragma once
#include "common.h"

extern "C" {

/* Allocates a block under the memory lock and zero-fills it (smt4). */
void *asdMemAlloc(int heap, u32 alignment, u32 region, u32 size, u32 option);

/* Allocates a block under the memory lock and zero-fills it (smt4a). */
void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 region, u32 size, u32 option);

/* Frees a block under the allocator lock (smt4). */
void asdMemFree(void *payload);

} /* extern "C" */
