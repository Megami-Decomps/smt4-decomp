/* NON_MATCHING: viewport and coordinate register allocation differ, and retail rebases its scissor-mode cache before accessing the state stack. */
#include "shard/S1ListPanel.h"
#include <stddef.h>

typedef char CheckCachedStateSize[sizeof(RenderStateStack) == 0x20 ? 1 : -1];
typedef char CheckScissorMinimumOffset[offsetof(RenderCtxScissorA, scissorMinimum) == 0x1338 ? 1 : -1];
typedef char CheckScissorMaximumOffset[offsetof(RenderCtxScissorA, scissorMaximum) == 0x1358 ? 1 : -1];

extern "C" RenderCtxScissorA *g_renderCtx;
extern "C" s32 FUN_00169d8c(u32 viewport);
extern "C" s32 FUN_00169db4(u32 viewport);
extern "C" s32 asdGxPresetsGetEnable(u32 viewport);
extern "C" s32 stateValuesGetBySelector(u32 viewport);

// Mirror the requested scissor rectangle into viewport coordinates and enable scissoring.
extern "C" s32 renderCtxSetMirroredScissorRect(s32 x, s32 y, s32 width, s32 height)
{
    u32 viewport = g_renderCtx->stereoMode;
    s32 maximumX = FUN_00169d8c(viewport) - 1;
    s32 maximumY = FUN_00169db4(viewport) - 1;
    switch (asdGxPresetsGetEnable(viewport)) {
    case 0x500:
        break;
    case 0x501:
        if (stateValuesGetBySelector(viewport) == 0)
            maximumY /= 2;
        else {
            y *= 2;
            height *= 2;
        }
        break;
    }
    s32 minimumX = maximumX - (x + width) + 1;
    s32 endX = maximumX - x;
    if (minimumX < 0)
        minimumX = 0;
    if (endX < 0)
        endX = 0;
    if (minimumX > maximumX)
        minimumX = maximumX;
    if (endX > maximumX)
        endX = maximumX;
    s32 minimumY = maximumY - (y + height) + 1;
    s32 endY = maximumY - y;
    if (minimumY < 0)
        minimumY = 0;
    if (endY < 0)
        endY = 0;
    if (minimumY > maximumY)
        minimumY = maximumY;
    if (endY > maximumY)
        endY = maximumY;
    renderStackSet(&g_renderCtx->scissorMinimum, static_cast<u32>(minimumY) | (static_cast<u32>(minimumX) << 16));
    renderStackSet(&g_renderCtx->scissorMaximum, static_cast<u32>(endY) | (static_cast<u32>(endX) << 16));
    renderCtxResumeScissor(g_renderCtx);
    return 1;
}
