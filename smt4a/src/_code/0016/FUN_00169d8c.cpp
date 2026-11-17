#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"
#include "quest_center/qcMain.h"

extern "C" {
/* Returns the framebuffer height of screen target `kind` (0/1: top, 2: bottom). */
u32 FUN_00169d8c(u32 kind)
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
