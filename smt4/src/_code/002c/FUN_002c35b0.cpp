/* NON_MATCHING: render-target selection and framebuffer dimension scheduling differ. */
#include "gfx/RenderTargetState.h"

extern "C" {
extern RenderTargetSystemView g_asdGxPresets;
extern RenderTargetBinding DAT_004e3a0c;
extern RenderTargetBinding DAT_004e3a38;
extern RenderTargetFramebuffer DAT_004e3aa4;
extern RenderTargetFramebuffer DAT_004e3ae0;
void FUN_0011a258(const void *color, const void *depth, s32 width, s32 height);
void FUN_002bc644(s32 x, s32 y, s32 width, s32 height);
void asdGfxSetMode(u32 mode);
void FUN_002c2620(u32 buffer);

/* Select the screen's framebuffer and apply its scaled viewport and buffer binding. */
void FUN_002c35b0(s32 target)
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
                g_asdGxPresets.selectedFramebuffer = &DAT_004e3ae0;
            screen = 1;
            g_asdGxPresets.selectedBinding = &DAT_004e3a38;
        }
    } else {
        g_asdGxPresets.selectedBinding = &DAT_004e3a0c;
        g_asdGxPresets.selectedFramebuffer = &DAT_004e3aa4;
    }
    RenderTargetFramebuffer *framebuffer = g_asdGxPresets.selectedFramebuffer;
    FUN_0011a258(framebuffer->colorBuffer, framebuffer->depthBuffer,
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
    FUN_002bc644(0, 0, width, height);
    RenderTargetBinding *binding = g_asdGxPresets.selectedBinding;
    if (g_asdGxPresets.bindingEnabled == 1) {
        s32 index = binding->index;
        asdGfxSetMode(binding->mode);
        FUN_002c2620(binding->buffers[index]);
    }
}
}
