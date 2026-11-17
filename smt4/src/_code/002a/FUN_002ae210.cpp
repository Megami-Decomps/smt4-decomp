#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"
#include "camp/RenderCtx.h"

extern "C" {
/* Returns the framebuffer height of screen target `kind` (0/1: top, 2: bottom). */
u32 FUN_002ae210(u32 kind)
{
    if (kind == 0 || kind == 1) {
        return g_asdGxPresets.framebuffers[0].height;
    }
    if (kind == 2) {
        return g_asdGxPresets.framebuffers[2].height;
    }
    return 0;
}
}
