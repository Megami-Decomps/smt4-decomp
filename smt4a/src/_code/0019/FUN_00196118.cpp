#include "common.h"

extern "C" void *FUN_001a23a0(u32 bytes, u32 alignment, u32 flags, u32 heap, u32 enabled);

// Forward the allocation request with the final option enabled.
extern "C" void *FUN_00196118(u32 bytes, u32 alignment, u32 flags, u32 heap)
{
    return FUN_001a23a0(bytes, alignment, flags, heap, 1);
}
