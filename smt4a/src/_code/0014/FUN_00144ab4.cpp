/* NON_MATCHING: render-target selection and framebuffer dimension scheduling differ. */
#include "gfx/RenderTargetState.h"

extern "C" {
extern RenderTargetSystemView g_asdGxPresets;
extern RenderTargetBinding g_asdGxSecondaryPreset;
extern RenderTargetBinding DAT_0063fde0;
extern RenderTargetFramebuffer DAT_0063fe4c;
extern RenderTargetFramebuffer DAT_0063fe88;
void FUN_00154d68(const void *color, const void *depth, s32 width, s32 height);
void FUN_00154180(s32 x, s32 y, s32 width, s32 height);
void asdGfxSetMode(u32 mode);
void FUN_00161074(u32 buffer);

/* Select the screen's framebuffer and apply its scaled viewport and buffer binding. */
void FUN_00144ab4(s32 target)
{
    s32 screen = 0;
    if (target == 0) {
        g_asdGxPresets.selectedFramebuffer = &g_asdGxPresets.framebuffers[0];
        g_asdGxPresets.selectedBinding = &g_asdGxPresets.bindings[0];
    } else if (target != 1) {
        if (target == 2) {
            if (g_asdGxPresets.sharePrimaryFramebuffer != 0)
                g_asdGxPresets.selectedFramebuffer = &g_asdGxPresets.framebuffers[0];
            else
                g_asdGxPresets.selectedFramebuffer = &DAT_0063fe88;
            screen = 1;
            g_asdGxPresets.selectedBinding = &DAT_0063fde0;
        }
    } else {
        g_asdGxPresets.selectedBinding = &g_asdGxSecondaryPreset;
        g_asdGxPresets.selectedFramebuffer = &DAT_0063fe4c;
    }
    RenderTargetFramebuffer *framebuffer = g_asdGxPresets.selectedFramebuffer;
    FUN_00154d68(framebuffer->colorBuffer, framebuffer->depthBuffer,
                  framebuffer->width, framebuffer->height);
    s32 width = g_asdGxPresets.selectedFramebuffer->width;
    s32 height = g_asdGxPresets.selectedFramebuffer->height;
    switch (g_asdGxPresets.selectedFramebuffer->format) {
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
    RenderTargetBinding *binding = g_asdGxPresets.selectedBinding;
    if (g_asdGxPresets.bindingEnabled == 1) {
        s32 index = binding->index;
        asdGfxSetMode(binding->mode);
        FUN_00161074(binding->buffers[index]);
    }
}
}
