#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"

extern "C" {
/* Returns the framebuffer width of screen target `kind` (0/1: top, 2: bottom). */
u32 FUN_002ae1e8(u32 kind)
{
    if (kind == 0 || kind == 1) {
        return g_asdGxPresets.framebuffers[0].width;
    }
    if (kind == 2) {
        return g_asdGxPresets.framebuffers[2].width;
    }
    return 0;
}
}
