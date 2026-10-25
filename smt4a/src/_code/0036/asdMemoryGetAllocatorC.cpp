#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "shard/W6_W6Match3_UnitStatusRequest.h"

extern "C" {
extern AsdMemoryApoc g_asdMemory;

AsdAllocator *asdMemoryGetAllocatorC(void)
{
    return g_asdMemory.allocatorC;
}

} /* extern "C" */
