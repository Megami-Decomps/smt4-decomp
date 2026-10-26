#include "common.h"

extern "C" void *FUN_00357a38(u32 bytes, u32 alignment, u32 flags, u32 heap, u32 enabled);

// Forward the allocation request with the final option enabled.
extern "C" void *FUN_00357a24(u32 bytes, u32 alignment, u32 flags, u32 heap)
{
    return FUN_00357a38(bytes, alignment, flags, heap, 1);
}
