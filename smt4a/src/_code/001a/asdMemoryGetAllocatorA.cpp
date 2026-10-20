#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {
extern AsdMemoryApoc g_asdMemory;

AsdAllocator *asdMemoryGetAllocatorA(void)
{
    return g_asdMemory.allocatorA;
}

} /* extern "C" */
