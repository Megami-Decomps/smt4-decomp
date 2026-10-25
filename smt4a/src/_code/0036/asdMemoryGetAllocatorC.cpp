#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "shard/asdMemoryGetAllocatorC.h"

extern "C" {
extern AsdMemoryApoc g_asdMemory;

AsdAllocator *asdMemoryGetAllocatorC(void)
{
    return g_asdMemory.allocatorC;
}

} /* extern "C" */
