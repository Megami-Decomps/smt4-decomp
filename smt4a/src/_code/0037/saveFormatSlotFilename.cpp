/* NON_MATCHING: retail references shared save-format strings and computes the prefixed format relative to its directory string; this standalone compilation places literals inline and uses ADR. */
#include "common.h"
#include <stdio.h>

extern "C" {
extern char DAT_005e2114[0x80];
void rt_aeabi_memclr(void* buffer, u32 size);

// Formats the slot's save filename, optionally with the sdds4/ directory prefix.
char* saveFormatSlotFilename(u32 slot, s32 directoryMode)
{
    rt_aeabi_memclr(DAT_005e2114, sizeof(DAT_005e2114));
    switch (directoryMode) {
    case 1:
        sprintf(DAT_005e2114, "%ssdds4game%d.sav", "sdds4/", slot);
        break;
    default:
        sprintf(DAT_005e2114, "sdds4game%d.sav", slot);
        break;
    }
    return DAT_005e2114;
}
}
