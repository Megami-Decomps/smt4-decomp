#include "gfx/RenderTargetState.h"

extern "C" RenderTargetSystemView g_asdGxPresets;
extern "C" void FUN_0015402c(void *colorBuffer, void *depthBuffer, u32 mask, u32 components,
    u32 flags, f32 red, f32 green, f32 blue, f32 alpha, f32 depth);

// Clear the chosen render target with its configured color and depth values.
extern "C" void renderTargetClear(s32 target, u32 flags, u32 unused, s32 preset)
{
    RenderTargetFramebuffer *framebuffer = NULL;
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
    FUN_0015402c(framebuffer->colorBuffer, framebuffer->depthBuffer,
        g_asdGxPresets.clear.mask[preset], 7, flags,
        g_asdGxPresets.clear.color[preset][0], g_asdGxPresets.clear.color[preset][1],
        g_asdGxPresets.clear.color[preset][2], g_asdGxPresets.clear.color[preset][3],
        g_asdGxPresets.clear.depth[preset]);
}
