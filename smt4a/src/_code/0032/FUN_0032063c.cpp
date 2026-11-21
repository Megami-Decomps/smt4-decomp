#include "shard/S1ListPanel.h"
#include "camp/RenderCtxA.h"
#include "util/BitsAndBytes.h"
#include "shard/JobWork.h"
#include "event/EventEplEffect.h"
extern "C" {
u32 renderCtxPackPassFlagsWithAlpha(u32 compare, f32 reference);
u32 renderCtxPackPassFlags(u32 mode, u32 flags);
void effectNodeUpdatePlacedChildren(void *effect);

// Draw task of the EPL event effect job: once started, draws the effect with temporary raster, blend and depth-state overrides.
s32 FUN_0032063c(u32 job)
{
    EventEplEffectWork *work = (EventEplEffectWork *)jobGetWork(job);
    if (work->started) {
        RenderCtxA *context = g_renderCtx;
        s32 state = renderCtxPackPassFlagsWithAlpha(6, 0.0f);
        renderStackPush(context->stacks + RENDER_STACK_C, state);
        context = g_renderCtx;
        state = renderCtxPackPassFlags(1, 0);
        renderCtxPushA(context, state);
        context = g_renderCtx;
        state = packNibblesAndByte(6, 1, 0);
        renderStackPush(context->stacks + RENDER_STACK_B, state);
        effectNodeUpdatePlacedChildren(work->current);
        renderStackPop(g_renderCtx->stacks + RENDER_STACK_B);
        renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
        renderStackPop(g_renderCtx->stacks + RENDER_STACK_C);
    }
    return 0;
}
}
