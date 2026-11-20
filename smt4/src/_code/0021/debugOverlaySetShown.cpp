#include "common.h"

extern "C" {

typedef struct DebugFlags {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 shown;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ u32 value;
} DebugFlags;

extern DebugFlags g_messageFlags; /* 0x43e0b8 */

/* Enables (nonzero `enable`: shown) or clears the debug overlay flags. */
void debugOverlaySetShown(int enable)
{
    if (enable != 0) {
        g_messageFlags.active = 0;
        g_messageFlags.value = 0;
        g_messageFlags.shown = 1;
        return;
    }
    g_messageFlags.active = 0;
    g_messageFlags.value = 0;
    g_messageFlags.shown = 0;
}

} /* extern "C" */
