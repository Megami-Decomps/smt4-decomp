#include "classes/AllocatorState.h"

extern "C" {

/* Classifies an address in one of four registered graphics memory regions. */
u32 asdMemClassifyAddress(u32 address)
{
    u32 base0 = g_asdMemState.regionBase[0];
    u32 base1 = g_asdMemState.regionBase[1];
    u32 base2 = g_asdMemState.regionBase[2];
    u32 base3 = g_asdMemState.regionBase[3];
    if (base0 <= address && address <= base0 + g_asdMemState.regionSize[0]) {
        return 0;
    }
    if (base1 <= address && address <= base1 + g_asdMemState.regionSize[1]) {
        return 1;
    }
    if (base2 <= address && address <= base2 + g_asdMemState.regionSize[2]) {
        return 2;
    }
    if (base3 <= address && address <= base3 + g_asdMemState.regionSize[3]) {
        return 3;
    }
    return 0;
}
}
