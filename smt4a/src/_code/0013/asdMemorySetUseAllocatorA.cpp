#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {
extern AsdMemoryApoc g_asdMemory;

/* Chooses which of the two allocators the default allocator getter returns. */
void asdMemorySetUseAllocatorA(u8 useAllocatorA)
{
    g_asdMemory.useAllocatorA = useAllocatorA;
}

} /* extern "C" */
