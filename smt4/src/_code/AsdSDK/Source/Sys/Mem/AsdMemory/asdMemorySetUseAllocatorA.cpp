#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {
extern AsdMemory g_asdMemory;

/* Chooses which of the two allocators asdMemoryGetDefaultAllocator returns. */
void asdMemorySetUseAllocatorA(u8 useAllocatorA)
{
    g_asdMemory.useAllocatorA = useAllocatorA;
}

} /* extern "C" */
