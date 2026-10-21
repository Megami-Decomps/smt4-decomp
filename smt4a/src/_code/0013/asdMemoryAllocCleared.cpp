#include "common.h"

extern "C" {

void *asdMemoryAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 clear);
void *asdMemoryAllocCleared(u32 heap, u32 alignment, u32 flags, u32 size)
{
    return asdMemoryAlloc(heap, alignment, flags, size, 1);
}

} /* extern "C" */
