/* NON_MATCHING: target selection matches; retail sets the viewport's zero origin (r0, r1) right after the
 * framebuffer bind and loads width, height and mode with one ldm, as a by-value {x, y, width, height} viewport
 * argument does (code identical then, but the setter's constant-argument callers lose their order); with four ints
 * the zeros come last. The displays[1..2]/framebuffers[1..2] pool words also need g_asdGxPresets sized. */
#include "gfx/RenderTargetBind.h"

extern "C" {
void asdGfxSetMode(u32 mode);
void asdGxSetViewport(s32 x, s32 y, s32 width, s32 height);
void asdGfxBindTarget(u32 buffer);

/* Selects the screen's framebuffer and applies its scaled viewport and display buffer binding. */
void FUN_00144ab4(s32 target)
{
    s32 screen = 0;
    if (target == 0) {
        g_asdGxPresets.selectedFramebuffer = &g_asdGxPresets.framebuffers[0];
        g_asdGxPresets.selectedDisplay = &g_asdGxPresets.displays[0];
    } else if (target != 1) {
        if (target == 2) {
            if (g_asdGxPresets.sharePrimaryFramebuffer == 0)
                g_asdGxPresets.selectedFramebuffer = &g_asdGxPresets.framebuffers[2];
            else
                g_asdGxPresets.selectedFramebuffer = &g_asdGxPresets.framebuffers[0];
            screen = 1;
            g_asdGxPresets.selectedDisplay = &g_asdGxPresets.displays[2];
        }
    } else {
        g_asdGxPresets.selectedFramebuffer = &g_asdGxPresets.framebuffers[1];
        g_asdGxPresets.selectedDisplay = &g_asdGxPresets.displays[1];
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
    asdGxSetViewport(0, 0, width, height);
    if (g_asdGxPresets.displayMode == 1) {
        AsdGxDisplayBuffers *binding = g_asdGxPresets.selectedDisplay;
        s32 index = binding->index;
        asdGfxSetMode(binding->mode);
        asdGfxBindTarget(binding->buffers[index]);
    }
}
}
