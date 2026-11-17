#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "classes/AllocatorState.h"

extern "C" {


/* Records the four heap regions (main, extra, VRAM A, VRAM B) for the memory debug display. */
void memoryDebugSetRegions(AsdMemRegion main, AsdMemRegion extra, AsdMemRegion vramA, AsdMemRegion vramB)
{
    DAT_00465120.regionBase[0] = main.base;
    DAT_00465120.regionBase[1] = extra.base;
    DAT_00465120.regionSize[0] = main.size;
    DAT_00465120.regionSize[1] = extra.size;
    DAT_00465120.regionBase[2] = vramA.base;
    DAT_00465120.regionSize[2] = vramA.size;
    DAT_00465120.regionBase[3] = vramB.base;
    DAT_00465120.regionSize[3] = vramB.size;
}

} /* extern "C" */
