#include "AsdSDK/Source/Gfx/AsdGfxContext.h"

// Update the top-screen width when its display mode changes.
extern "C" void asdGxSetTopScreenMode(u32 mode)
{
    if (g_asdGfxContext.topScreenMode == mode)
        return;
    s32 width = 400;
    switch (mode) {
    case 0x700:
    case 0x702:
        g_asdGfxContext.screenWidths[0] = width;
        break;
    case 0x701:
        width = 800;
        g_asdGfxContext.screenWidths[0] = width;
        break;
    default:
        return;
    }
    g_asdGfxContext.topScreenMode = mode;
}
