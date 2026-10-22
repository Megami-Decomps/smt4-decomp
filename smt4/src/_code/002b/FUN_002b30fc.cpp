/* NON_MATCHING: Retail loads all region bases up front into saved registers; this build loads each base only when its check is reached. */
#include "gfx/MemoryRanges.h"

extern "C" {
extern GfxMemoryRanges DAT_00465120;

/* Classifies an address in one of four registered graphics memory regions. */
u32 FUN_002b30fc(u32 address)
{
    const GfxMemoryRanges *ranges = &DAT_00465120;
    if (address < ranges->bases[0] || ranges->bases[0] + ranges->sizes[0] < address) {
        if (ranges->bases[1] <= address && address <= ranges->sizes[1] + ranges->bases[1]) {
            return 1;
        }
        if (ranges->bases[2] <= address && address <= ranges->sizes[2] + ranges->bases[2]) {
            return 2;
        }
        if (ranges->bases[3] <= address && address <= ranges->sizes[3] + ranges->bases[3]) {
            return 3;
        }
    }
    return 0;
}
}
