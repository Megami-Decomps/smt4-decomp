/* NON_MATCHING: only the 0x401 preset choice differs: retail selects framebuffer 0 or 2 with addne/addeq, the build
 * branches the framebuffer-0 arm into case 0x400's block (addeq + bne). */
#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"

extern "C" {
void FUN_0017ce88(u32 colorBuffer, s32 width, s32 height, u32 format, u32 displayAddress,
                  u32 displayWidth, u32 displayHeight, u32 parameter, u32 mode, u32 flags, u32 size);
}

/* Binds the framebuffer of `display`'s screen target (the alternate pass picks framebuffer 1) to its display buffer. */
extern "C" void renderBindDisplay(const AsdGxDisplayBuffers *display, s32 alternate)
{
    AsdGxPresets *presets = &g_asdGxPresets;
    const AsdGxFramebuffer *pass = NULL;
    s32 bank = 0;
    switch (display->mode) {
    case 0x400:
        pass = &presets->framebuffers[0];
        break;
    case 0x401:
        bank = 1;
        if (presets->sharePrimaryFramebuffer) {
            pass = &presets->framebuffers[0];
        } else {
            pass = &presets->framebuffers[2];
        }
        break;
    case 0x410:
        if (alternate) {
            pass = &presets->framebuffers[1];
        } else {
            pass = &presets->framebuffers[0];
        }
        break;
    }
    u32 mode = pass->mode;
    if (!presets->fullResolution[bank]) {
        mode = 0x500;
    }
    u32 selected = display->index;
    FUN_0017ce88(pass->color.buffer, pass->width, pass->height, pass->color.format,
                 display->addresses[selected], display->width, display->height,
                 presets->parameter, mode, 0, 8);
}
