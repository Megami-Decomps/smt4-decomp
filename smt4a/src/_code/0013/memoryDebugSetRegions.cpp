#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "classes/AllocatorState.h"

/* The memory debug display's copy of the four heap regions (Apocalypse layout). */
extern "C" {

/* Records the four heap regions (main, extra, VRAM A, VRAM B) for the memory debug display. */
void memoryDebugSetRegions(AsdMemRegion main, AsdMemRegion extra, AsdMemRegion vramA, AsdMemRegion vramB)
{
    g_allocationAddressRanges.regionBase[0] = main.base;
    g_allocationAddressRanges.regionBase[1] = extra.base;
    g_allocationAddressRanges.regionSize[0] = main.size;
    g_allocationAddressRanges.regionSize[1] = extra.size;
    g_allocationAddressRanges.regionBase[2] = vramA.base;
    g_allocationAddressRanges.regionSize[2] = vramA.size;
    g_allocationAddressRanges.regionBase[3] = vramB.base;
    g_allocationAddressRanges.regionSize[3] = vramB.size;
}
}
