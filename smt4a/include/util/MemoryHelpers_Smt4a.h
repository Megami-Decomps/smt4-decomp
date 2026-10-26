#pragma once
#include "common.h"

/* MemoryHelpers (declarations migrated from callers). */
extern "C" {

void * asdMemoryAllocAligned(u32 a, u32 b, u32 c, u32 size, u32 alignment, u32 extra);

void * asdMemoryAllocWithFlags(u32 size, u32 flags);

} /* extern "C" */
