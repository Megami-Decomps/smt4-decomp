#include "AsdSDK/Source/Gfx/AsdGfxContext.h"

extern "C" {

/* Dispatches the display callback and advances its bounded counter. */
void sys_PDC0Callback(void)
{
    if (g_asdGfxContext.displayCallbacks[0] != NULL) {
        g_asdGfxContext.displayCallbacks[0](0x400);
    }
    g_asdGfxContext.vblankCounts[0] = (g_asdGfxContext.vblankCounts[0] + 1) % 0x7FFFFFFF;
}

} /* extern "C" */
