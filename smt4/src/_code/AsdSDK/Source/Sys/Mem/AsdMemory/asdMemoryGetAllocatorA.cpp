#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {
extern AsdMemory g_asdMemory;

AsdAllocator *asdMemoryGetAllocatorA(void)
{
    return g_asdMemory.allocatorA;
}

} /* extern "C" */
