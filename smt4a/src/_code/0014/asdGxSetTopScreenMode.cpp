#include "shard/W6_W6Match5_DisplayMode.h"

// Update the top-screen width when its display mode changes.
extern "C" void asdGxSetTopScreenMode(u32 mode)
{
    if (g_asdGfxContext.topScreenMode == mode)
        return;
    u32 width = 400;
    switch (mode) {
    case 0x700:
    case 0x702:
        g_asdGfxContext.topScreenWidth = width;
        break;
    case 0x701:
        width = 800;
        g_asdGfxContext.topScreenWidth = width;
        break;
    default:
        return;
    }
    g_asdGfxContext.topScreenMode = mode;
}
