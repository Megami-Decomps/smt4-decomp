#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/asdMemoryGetAllocatorA.h"

extern "C" {
extern AsdMemory g_asdMemory;

AsdAllocator *asdMemoryGetAllocatorA(void)
{
    return g_asdMemory.allocatorA;
}

} /* extern "C" */
