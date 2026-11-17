/* NON_MATCHING: Retail loads all region bases up front into saved registers; this build loads each base only when its check is reached. */
#include "classes/AllocatorState.h"

extern "C" {

/* Classifies an address in one of four registered graphics memory regions. */
u32 FUN_002b30fc(u32 address)
{
    const AllocatorState *ranges = &DAT_00465120;
    if (address < ranges->regionBase[0] || ranges->regionBase[0] + ranges->regionSize[0] < address) {
        if (ranges->regionBase[1] <= address && address <= ranges->regionSize[1] + ranges->regionBase[1]) {
            return 1;
        }
        if (ranges->regionBase[2] <= address && address <= ranges->regionSize[2] + ranges->regionBase[2]) {
            return 2;
        }
        if (ranges->regionBase[3] <= address && address <= ranges->regionSize[3] + ranges->regionBase[3]) {
            return 3;
        }
    }
    return 0;
}
}
