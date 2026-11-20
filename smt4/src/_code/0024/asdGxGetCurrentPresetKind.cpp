#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"

extern "C" {
extern AsdGxDisplayBuffers g_asdGxPresetsDisplay1; /* displays[1] */

/* Returns the selected display buffer ring: 0 (top left), 1 (top right) or 2 (bottom). */
u32 asdGxGetCurrentPresetKind(void)
{
    if (g_asdGxPresets.selectedDisplay == &g_asdGxPresets.displays[0]) {
        return 0;
    }
    if (g_asdGxPresets.selectedDisplay == &g_asdGxPresetsDisplay1) {
        return 1;
    }
    return 2;
}

} /* extern "C" */
