#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"
/* NON_MATCHING: render-target selection and framebuffer dimension scheduling differ. */

extern "C" {
extern AsdGxDisplayBuffers g_asdGxSecondaryPreset;
extern AsdGxDisplayBuffers DAT_0063fde0;
extern AsdGxFramebuffer DAT_0063fe4c;
extern AsdGxFramebuffer DAT_0063fe88;
void FUN_00154d68(const void *color, const void *depth, s32 width, s32 height);
void FUN_00154180(s32 x, s32 y, s32 width, s32 height);
void asdGfxSetMode(u32 mode);
void asdGfxBindTarget(u32 buffer);

/* Select the screen's framebuffer and apply its scaled viewport and buffer binding. */
void FUN_00144ab4(s32 target)
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
                g_asdGxPresets.selectedFramebuffer = &DAT_0063fe88;
            screen = 1;
            g_asdGxPresets.selectedDisplay = &DAT_0063fde0;
        }
    } else {
        g_asdGxPresets.selectedDisplay = &g_asdGxSecondaryPreset;
        g_asdGxPresets.selectedFramebuffer = &DAT_0063fe4c;
    }
    AsdGxFramebuffer *framebuffer = g_asdGxPresets.selectedFramebuffer;
    FUN_00154d68(&framebuffer->color, &framebuffer->depth,
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
    FUN_00154180(0, 0, width, height);
    AsdGxDisplayBuffers *binding = g_asdGxPresets.selectedDisplay;
    if (g_asdGxPresets.displayMode == 1) {
        s32 index = binding->index;
        asdGfxSetMode(binding->mode);
        asdGfxBindTarget(binding->buffers[index]);
    }
}
}
