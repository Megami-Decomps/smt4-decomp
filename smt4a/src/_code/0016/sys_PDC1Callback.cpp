#include "AsdSDK/Source/Gfx/AsdGfxContext.h"

extern "C" {

/* Dispatches the display callback and advances its bounded counter. */
void sys_PDC1Callback(void)
{
    if (g_asdGfxContext.displayCallbacks[1] != NULL) {
        g_asdGfxContext.displayCallbacks[1](0x401);
    }
    g_asdGfxContext.vblankCounts[1] = (g_asdGfxContext.vblankCounts[1] + 1) % 0x7FFFFFFF;
}

} /* extern "C" */
