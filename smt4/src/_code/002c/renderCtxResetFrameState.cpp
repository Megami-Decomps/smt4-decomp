/* NON_MATCHING: render-target selection and framebuffer dimension scheduling differ. */
#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpersSmt4.h"

extern "C" {
extern AsdGxDisplayBuffers g_asdGxPresetsDisplay1;
extern AsdGxDisplayBuffers DAT_004e3a38;
extern AsdGxFramebuffer DAT_004e3aa4;
extern AsdGxFramebuffer DAT_004e3ae0;
void FUN_0011a258(const void *color, const void *depth, s32 width, s32 height);
void FUN_002bc644(s32 x, s32 y, s32 width, s32 height);
void asdGfxBindTarget(u32 buffer);

/* Select the screen's framebuffer and apply its scaled viewport and buffer binding. */
void renderCtxResetFrameState(s32 target)
{
    s32 screen = 0;
    if (target == 0) {
        g_asdGxPresets.selectedFramebuffer = &g_asdGxPresets.framebuffers[0];
        g_asdGxPresets.selectedDisplay = &g_asdGxPresets.displays[0];
    } else if (target != 1) {
        if (target == 2) {
            if (g_asdGxPresets.sharePrimaryFramebuffer != 0)
                g_asdGxPresets.selectedFramebuffer = &g_asdGxPresets.framebuffers[0];
            else
                g_asdGxPresets.selectedFramebuffer = &DAT_004e3ae0;
            screen = 1;
            g_asdGxPresets.selectedDisplay = &DAT_004e3a38;
        }
    } else {
        g_asdGxPresets.selectedDisplay = &g_asdGxPresetsDisplay1;
        g_asdGxPresets.selectedFramebuffer = &DAT_004e3aa4;
    }
    AsdGxFramebuffer *framebuffer = g_asdGxPresets.selectedFramebuffer;
    FUN_0011a258(&framebuffer->color, &framebuffer->depth,
                  framebuffer->width, framebuffer->height);
    s32 width = g_asdGxPresets.selectedFramebuffer->width;
    s32 height = g_asdGxPresets.selectedFramebuffer->height;
    switch (g_asdGxPresets.selectedFramebuffer->mode) {
    case 0x500:
        break;
    case 0x501:
        if (g_asdGxPresets.fullResolution[screen] == 0)
            width >>= 1;
        break;
    case 0x502:
        if (g_asdGxPresets.fullResolution[screen] == 0) {
            width >>= 1;
            height >>= 1;
        }
        break;
    }
    FUN_002bc644(0, 0, width, height);
    AsdGxDisplayBuffers *binding = g_asdGxPresets.selectedDisplay;
    if (g_asdGxPresets.displayMode == 1) {
        s32 index = binding->index;
        asdGfxSetMode(binding->mode);
        asdGfxBindTarget(binding->buffers[index]);
    }
}
}
