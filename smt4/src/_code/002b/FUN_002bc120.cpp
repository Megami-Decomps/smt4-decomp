/* NON_MATCHING: the 0x401 preset choice compiles to addeq + branch (retail addne/addeq), and argument staging/scheduling for the 11-argument call differs (retail saves r5, 28-byte frame). */
#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"

extern "C" {
void FUN_0013727c(u32 colorBuffer, s32 width, s32 height, u32 format, u32 displayAddress, u32 displayWidth,
    u32 displayHeight, u32 parameter, u32 mode, s32 h, s32 i);

/* Binds the framebuffer of `display`'s screen target (the alternate pass picks framebuffer 1) to its display buffer. */
void FUN_002bc120(const AsdGxDisplayBuffers *display, s32 alternate)
{
    AsdGxFramebuffer *framebuffer = NULL;
    s32 screen = 0;
    u32 mode;

    switch (display->mode) {
    case 0x400:
        framebuffer = &g_asdGxPresets.framebuffers[0];
        break;
    case 0x401:
        screen = 1;
        if (g_asdGxPresets.sharePrimaryFramebuffer) {
            framebuffer = &g_asdGxPresets.framebuffers[0];
        } else {
            framebuffer = &g_asdGxPresets.framebuffers[2];
        }
        break;
    case 0x410:
        if (alternate) {
            framebuffer = &g_asdGxPresets.framebuffers[1];
        } else {
            framebuffer = &g_asdGxPresets.framebuffers[0];
        }
        break;
    }
    mode = framebuffer->mode;
    if (!g_asdGxPresets.fullResolution[screen]) {
        mode = 0x500;
    }
    FUN_0013727c(framebuffer->color.buffer, framebuffer->width, framebuffer->height, framebuffer->color.format,
        display->addresses[display->index], display->width, display->height, g_asdGxPresets.parameter,
        mode, 0, 8);
}

} /* extern "C" */
