#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {
extern AsdMemoryApoc g_asdMemory;

AsdAllocator *asdMemoryGetAllocatorA(void)
{
    return g_asdMemory.allocatorA;
}

} /* extern "C" */
