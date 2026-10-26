#include "common.h"

extern "C" void *FUN_001477c0(u32 bytes, u32 alignment, u32 flags, u32 heap, u32 enabled);

// Forward the allocation request with the final option enabled.
extern "C" void *FUN_00142fb8(u32 bytes, u32 alignment, u32 flags, u32 heap)
{
    return FUN_001477c0(bytes, alignment, flags, heap, 1);
}
