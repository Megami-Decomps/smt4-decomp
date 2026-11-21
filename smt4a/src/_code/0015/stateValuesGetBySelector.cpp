#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"

extern "C" {
/* Returns the full-resolution flag of a screen target's framebuffer (0 and 1: top, 2: bottom). */
s32 stateValuesGetBySelector(u32 selector)
{
    if (selector == 0 || selector == 1) {
        return (s8)g_asdGxPresets.fullResolution[0];
    }
    if (selector == 2) {
        return (s8)g_asdGxPresets.fullResolution[1];
    }
    return 0;
}
} /* extern "C" */
