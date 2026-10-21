/* NON_MATCHING: retail references shared save-format strings and computes the prefixed format relative to its directory string; this standalone compilation places literals inline and uses ADR. */
#include "common.h"

extern "C" {
extern char DAT_005e2114[0x80];
void rt_aeabi_memclr(void* buffer, u32 size);
s32 textFormatBuffer(char* buffer, const char* format, ...);

// Formats the slot's save filename, optionally with the sdds4/ directory prefix.
char* FUN_00371b10(u32 slot, s32 directoryMode)
{
    rt_aeabi_memclr(DAT_005e2114, sizeof(DAT_005e2114));
    switch (directoryMode) {
    case 1:
        textFormatBuffer(DAT_005e2114, "%ssdds4game%d.sav", "sdds4/", slot);
        break;
    default:
        textFormatBuffer(DAT_005e2114, "sdds4game%d.sav", slot);
        break;
    }
    return DAT_005e2114;
}
}
