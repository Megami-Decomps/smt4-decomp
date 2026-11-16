#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

/* The memory debug display's copy of the four heap regions (Apocalypse layout). */
struct MemoryDebugRegions {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u32 regionBase[4]; /* main, extra, VRAM A, VRAM B */
    /* 0x30 */ u32 regionSize[4];
};

extern "C" {
extern MemoryDebugRegions g_allocationAddressRanges;

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
