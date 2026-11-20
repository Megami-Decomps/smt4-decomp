/* NON_MATCHING: retail forms &addresses[selected] before the constant stack arguments and reuses r7 for the sp+12 base; build schedules it later and uses ip. */
#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"

extern "C" {
void asdGxCmdBufferFinalizeBlock(void);
void FUN_0017ce88(u32 colorBuffer, s32 width, s32 height, u32 format, u32 displayAddress,
    u32 displayWidth, u32 displayHeight, u32 parameter, u32 mode, u32 zero, u32 alignment);

/* Binds screen target `kind`'s framebuffer to its current display buffer unless the display
 * buffers are suspended (displayMode 1). */
void renderBindPreset(u32 kind)
{
    AsdGxFramebuffer *framebuffer = NULL;
    AsdGxDisplayBuffers *display = NULL;
    u32 activeIndex = 0;
    if (g_asdGxPresets.displayMode != 1) {
        switch (kind) {
        case 0x400:
            display = &g_asdGxPresets.displays[0];
            framebuffer = &g_asdGxPresets.framebuffers[0];
            break;
        case 0x401:
            activeIndex = 1;
            display = &g_asdGxPresets.displays[2];
            framebuffer = &g_asdGxPresets.framebuffers[2];
            break;
        case 0x410:
            display = &g_asdGxPresets.displays[1];
            framebuffer = &g_asdGxPresets.framebuffers[1];
            break;
        }
        u32 mode = framebuffer->mode;
        u32 selected = display->index;
        if (!g_asdGxPresets.fullResolution[activeIndex]) {
            mode = 0x500;
        }
        asdGxCmdBufferFinalizeBlock();
        FUN_0017ce88(framebuffer->color.buffer, framebuffer->width,
            framebuffer->height, framebuffer->color.format, display->addresses[selected],
            display->width, display->height, g_asdGxPresets.parameter, mode, 0, 8);
    }
}
}
