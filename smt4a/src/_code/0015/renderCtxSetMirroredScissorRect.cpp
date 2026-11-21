/* NON_MATCHING: only the order of the predicated case-0x501 adjustments differs (retail doubles y and height before halving maximumY with asreq; the build halves first). */
#include "shard/S1ListPanel.h"
#include <stddef.h>
#include "quest_center/qcMain.h"
#include "camp/RenderCtxA.h"

typedef char CheckCachedStateSize[sizeof(RenderStateStack) == 0x20 ? 1 : -1];
typedef char CheckScissorMinimumOffset[offsetof(RenderCtxA, stacks[RENDER_STACK_SCISSOR_MINIMUM]) == 0x1338 ? 1 : -1];
typedef char CheckScissorMaximumOffset[offsetof(RenderCtxA, stacks[RENDER_STACK_SCISSOR_MAXIMUM]) == 0x1358 ? 1 : -1];

extern "C" s32 asdGxPresetsGetEnable(u32 viewport);
extern "C" s32 stateValuesGetBySelector(u32 viewport);

// Mirror the requested scissor rectangle into viewport coordinates and enable scissoring.
extern "C" s32 renderCtxSetMirroredScissorRect(s32 x, s32 y, s32 width, s32 height)
{
    u32 viewport = renderCtxGetStereoMode(g_renderCtx);
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
    s32 minimumY = maximumY - (y + height) + 1;
    s32 endY = maximumY - y;
    if (minimumX < 0)
        minimumX = 0;
    if (endX < 0)
        endX = 0;
    if (minimumX > maximumX)
        minimumX = maximumX;
    if (endX > maximumX)
        endX = maximumX;
    if (minimumY < 0)
        minimumY = 0;
    if (endY < 0)
        endY = 0;
    if (minimumY > maximumY)
        minimumY = maximumY;
    if (endY > maximumY)
        endY = maximumY;
    renderStackSet(g_renderCtx->stacks + RENDER_STACK_SCISSOR_MINIMUM, static_cast<u32>(minimumY) | (static_cast<u32>(minimumX) << 16));
    renderStackSet(g_renderCtx->stacks + RENDER_STACK_SCISSOR_MAXIMUM, static_cast<u32>(endY) | (static_cast<u32>(endX) << 16));
    renderStackSetCounted(g_renderCtx->stacks + RENDER_STACK_SCISSOR, RENDER_STATE_SCISSOR);
    return 1;
}
