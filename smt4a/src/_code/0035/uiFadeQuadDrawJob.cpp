/* NON_MATCHING: only VFP register allocation differs: retail keeps the 0.0f constant in s17 and the height in s16 (the build swaps them) and loads the fade amount into s1. */
#include "common.h"
#include "gfx/ColoredQuad.h"
#include "camp/RenderCtxA.h"
#include "camp/RenderCtx.h"
#include "event/eventCommand.h"
#include "shard/JobWork.h"

extern "C" {
u32 renderCtxPackPassFlags(u32 state, u32 flags);
u32 asdGxPresetsGetByKind(u32 target);
u32 asdGxPresetsGetHeightByKind(u32 target);

// Draw a full-target fade quad with its stored alpha scaled by the job's fade amount.
u32 uiFadeQuadDrawJob(u32 job)
{
    EventCommand *work = (EventCommand *)jobGetWork(job);
    if (work->alpha != 0.0f) {
        u32 color = work->color;
        RenderCtxA *context = g_renderCtx;
        u32 alpha = static_cast<u32>(static_cast<f32>(color & 0xff) * work->alpha);
        if (alpha > 255) {
            alpha = 255;
        }
        color = (color & 0xffffff00) | alpha;
        renderCtxPushA(context, renderCtxPackPassFlags(1, 0));
        renderCtxSelectTexture(g_renderCtx, 0);
        f32 height = static_cast<f32>(asdGxPresetsGetByKind(renderCtxGetStereoMode(g_renderCtx)));
        f32 width = static_cast<f32>(asdGxPresetsGetHeightByKind(renderCtxGetStereoMode(g_renderCtx)));
        gxSubmitDrawZeroExtraParams(0.0f, 0.0f, width, height, color, color, color, 0.0f, color);
        renderStackPop(&g_renderCtx->stackA);
    }
    return 0;
}
}
