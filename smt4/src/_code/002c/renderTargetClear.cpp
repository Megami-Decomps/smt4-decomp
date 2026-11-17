#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"

extern "C" {
void FUN_00119750(AsdGxRenderBuffer *colorBuffer, AsdGxRenderBuffer *depthBuffer, u32 stencil, u32 components,
    u32 flags, AsdGxColor3 color, f32 alpha, f32 depth);

/* Clears screen target 0, 1 or 2 (2 only when it has its own framebuffer) with its configured color,
 * depth and stencil values; targets 0 and 1 use clear set 0, target 2 set 1. */
void renderTargetClear(s32 target, u32 flags, u32 unused, s32 preset)
{
    AsdGxPresets *presets = &g_asdGxPresets;
    AsdGxFramebuffer *framebuffer = NULL;
    if (target == 0) {
        preset = 0;
        framebuffer = &presets->framebuffers[0];
    } else if (target == 1) {
        preset = 0;
        framebuffer = &presets->framebuffers[1];
    } else if (target == 2) {
        if (presets->sharePrimaryFramebuffer == 1) {
            return;
        }
        preset = 1;
        framebuffer = &presets->framebuffers[2];
    }
    FUN_00119750(&framebuffer->color, &framebuffer->depth, presets->clearStencils[preset], 7, flags,
                 presets->clearColors[preset].rgb, presets->clearColors[preset].alpha,
                 presets->clearDepths[preset]);
}
} /* extern "C" */
