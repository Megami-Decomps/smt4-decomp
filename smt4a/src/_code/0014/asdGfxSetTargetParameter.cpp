#include "AsdSDK/Source/Gfx/AsdGfxContext.h"

extern "C" {

/* Sets the display callback of the top (0x400) or bottom (0x401) display, or (0x402) of both. */
void asdGfxSetTargetParameter(u32 display, AsdGfxDisplayCallback callback)
{
    switch (display) {
    case 0x400:
        g_asdGfxContext.displayCallbacks[0] = callback;
        break;
    case 0x401:
        g_asdGfxContext.displayCallbacks[1] = callback;
        break;
    case 0x402:
        g_asdGfxContext.displayCallbacks[0] = callback;
        g_asdGfxContext.displayCallbacks[1] = callback;
        break;
    }
}

} /* extern "C" */
