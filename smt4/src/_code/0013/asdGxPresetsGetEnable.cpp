#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"

extern "C" {
/* Returns the antialias mode of screen target `kind`'s framebuffer (0x500: none). */
u32 asdGxPresetsGetEnable(u32 kind)
{
    if (kind == 0 || kind == 1) {
        return g_asdGxPresets.framebuffers[0].mode;
    }
    if (kind == 2) {
        return g_asdGxPresets.framebuffers[2].mode;
    }
    return 0;
}

} /* extern "C" */
