#include "common.h"

extern "C" void *asdMemoryAlloc(u32 bytes, u32 alignment, u32 flags, u32 heap, u32 enabled);

// Forward the allocation request with the final option enabled.
extern "C" void *FUN_0010a9b4(u32 bytes, u32 alignment, u32 flags, u32 heap)
{
    return asdMemoryAlloc(bytes, alignment, flags, heap, 1);
}
