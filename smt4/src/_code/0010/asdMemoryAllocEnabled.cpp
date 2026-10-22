#include "common.h"

extern "C" void *asdMemoryAlloc(u32 bytes, u32 alignment, u32 flags, u32 heap, u32 enabled);

// Forward the allocation request with the final option enabled.
extern "C" void *asdMemoryAllocEnabled(u32 bytes, u32 alignment, u32 flags, u32 heap)
{
    return asdMemoryAlloc(bytes, alignment, flags, heap, 1);
}
