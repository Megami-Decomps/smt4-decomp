#include "common.h"

extern "C" {

typedef struct DebugFlags {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 shown;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ u32 value;
} DebugFlags;

extern DebugFlags DAT_0043e0b8; /* 0x43e0b8 */

/* Enables (nonzero `enable`: shown) or clears the debug overlay flags. */
void debugOverlaySetShown(int enable)
{
    if (enable != 0) {
        DAT_0043e0b8.active = 0;
        DAT_0043e0b8.value = 0;
        DAT_0043e0b8.shown = 1;
        return;
    }
    DAT_0043e0b8.active = 0;
    DAT_0043e0b8.value = 0;
    DAT_0043e0b8.shown = 0;
}

} /* extern "C" */
