/* NON_MATCHING: source restored (a wave-25 edit had truncated the file to its header) and the target switch rebuilt; retail loads the command index separately from first/second (ldr then ldm) and keeps the constants 8 and 0 in r4/r5 (push {r4, r5, lr}), the build reads the three words with one ldm and uses r3/r4. */
#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"

extern "C" {
void FUN_0017ce88(u32 colorBuffer, s32 width, s32 height, u32 format, u32 displayAddress,
                  u32 displayWidth, u32 displayHeight, u32 parameter, u32 mode, u32 flags, u32 size);
}

/* Binds the framebuffer of `display`'s screen target (the alternate pass picks framebuffer 1) to its display buffer. */
extern "C" void FUN_00154ca4(const AsdGxDisplayBuffers *display, s32 alternate)
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
        pass = presets->sharePrimaryFramebuffer ? &presets->framebuffers[0] : &presets->framebuffers[2];
        break;
    case 0x410:
        pass = alternate ? &presets->framebuffers[1] : &presets->framebuffers[0];
        break;
    }
    u32 mode = pass->mode;
    if (!presets->fullResolution[bank]) {
        mode = 0x500;
    }
    FUN_0017ce88(pass->color.buffer, pass->width, pass->height, pass->color.format,
                 display->addresses[display->index], display->width, display->height,
                 presets->parameter, mode, 0, 8);
}
