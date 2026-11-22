/* NON_MATCHING: only the 0x401 preset choice differs: retail selects framebuffer 0 or 2 with addne/addeq, the build
 * branches the framebuffer-0 arm into case 0x400's block (addeq + bne). */
#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"

extern "C" {
void FUN_0013727c(u32 colorBuffer, s32 width, s32 height, u32 format, u32 displayAddress, u32 displayWidth,
    u32 displayHeight, u32 parameter, u32 mode, s32 h, s32 i);

/* Binds the framebuffer of `display`'s screen target (the alternate pass picks framebuffer 1) to its display buffer. */
void renderBindDisplay(const AsdGxDisplayBuffers *display, s32 alternate)
{
    AsdGxPresets *presets = &g_asdGxPresets;
    AsdGxFramebuffer *framebuffer = NULL;
    s32 screen = 0;

    switch (display->mode) {
    case 0x400:
        framebuffer = &presets->framebuffers[0];
        break;
    case 0x401:
        screen = 1;
        if (presets->sharePrimaryFramebuffer) {
            framebuffer = &presets->framebuffers[0];
        } else {
            framebuffer = &presets->framebuffers[2];
        }
        break;
    case 0x410:
        if (alternate) {
            framebuffer = &presets->framebuffers[1];
        } else {
            framebuffer = &presets->framebuffers[0];
        }
        break;
    }
    u32 mode = framebuffer->mode;
    if (!presets->fullResolution[screen]) {
        mode = 0x500;
    }
    u32 selected = display->index;
    FUN_0013727c(framebuffer->color.buffer, framebuffer->width, framebuffer->height, framebuffer->color.format,
        display->addresses[selected], display->width, display->height, presets->parameter,
        mode, 0, 8);
}

} /* extern "C" */
