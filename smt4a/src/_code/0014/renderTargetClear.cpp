#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"

extern "C" void gxCommandClearColorDepth(AsdGxRenderBuffer *colorBuffer, AsdGxRenderBuffer *depthBuffer, u32 stencil, u32 components,
    u32 flags, f32 red, f32 green, f32 blue, f32 alpha, f32 depth);

// Clear the chosen render target with its configured color and depth values.
extern "C" void renderTargetClear(s32 target, u32 flags, u32 unused, s32 preset)
{
    AsdGxFramebuffer *framebuffer = NULL;
    if (target == 0) {
        preset = 0;
        framebuffer = &g_asdGxPresets.framebuffers[0];
    } else if (target == 1) {
        preset = 0;
        framebuffer = &g_asdGxPresets.framebuffers[1];
    } else if (target == 2) {
        if (g_asdGxPresets.sharePrimaryFramebuffer == 1)
            return;
        preset = 1;
        framebuffer = &g_asdGxPresets.framebuffers[2];
    }
    gxCommandClearColorDepth(&framebuffer->color, &framebuffer->depth,
        g_asdGxPresets.clearStencils[preset], 7, flags,
        g_asdGxPresets.clearColors[preset].rgb.red, g_asdGxPresets.clearColors[preset].rgb.green,
        g_asdGxPresets.clearColors[preset].rgb.blue, g_asdGxPresets.clearColors[preset].alpha,
        g_asdGxPresets.clearDepths[preset]);
}
