#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/asdMemoryGetDefaultAllocator.h"

extern "C" {
extern AsdMemory g_asdMemory;

/* The allocator new/delete go through. */
AsdAllocator *asdMemoryGetDefaultAllocator(void)
{
    if (g_asdMemory.useAllocatorA) {
        return g_asdMemory.allocatorA;
    }
    return g_asdMemory.allocatorB;
}

} /* extern "C" */
