#include "ui/ButtonHelp.h"

extern "C" {
extern ButtonHelpGlobals g_buttonHelp;

/* Byte at +0x494 of the 4-byte slot `index` (0-5) of the object, or 0. */
u8 buttonHelpGetSlotByte(u32 index)
{
    u8 value;
    u32 *slot;

    if ((g_buttonHelp.work != NULL) && (index < 6)) {
        slot = (u32 *)g_buttonHelp.work + index;
        value = ((u8 *)slot)[0x494];
    } else {
        value = 0;
    }
    return value;
}

} /* extern "C" */
