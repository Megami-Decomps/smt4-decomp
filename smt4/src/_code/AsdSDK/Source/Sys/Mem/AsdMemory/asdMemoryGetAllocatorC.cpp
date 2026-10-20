#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {
extern AsdMemory g_asdMemory;

AsdAllocator *asdMemoryGetAllocatorC(void)
{
    return g_asdMemory.allocatorC;
}

} /* extern "C" */
