#include "camp/RenderCtx.h"
#include "shard/JobWork.h"
#include "event/EventEplEffect.h"
#include "code/Code0028.h"
#include "camp/RenderCtxTitle.h"

extern "C" {
s32 packNibblesAndByte(u32 first, u32 second, u32 value);
void effectNodeUpdatePlacedChildren(void *effect);

/* Draw task of the EPL event effect job: once started, draws the effect with the raster, blend and depth states pushed. */
s32 FUN_002248b8(u32 job)
{
    EventEplEffectWork *work = (EventEplEffectWork *)jobGetWork(job);
    if (work->started) {
        RenderCtx *context = g_titleScene;
        s32 state = gxPackFadeKindAlphaWord(6, 0.0f);
        renderStackPush(context->stacks + RENDER_STACK_C, state);
        context = g_titleScene;
        state = renderCtxPackPassFlags(1, 0);
        renderStackPush(context->stacks + RENDER_STACK_A, state);
        context = g_titleScene;
        state = packNibblesAndByte(6, 1, 0);
        renderStackPush(context->stacks + RENDER_STACK_B, state);
        effectNodeUpdatePlacedChildren(work->current);
        renderStackPop(g_titleScene->stacks + RENDER_STACK_B);
        renderStackPop(g_titleScene->stacks + RENDER_STACK_A);
        renderStackPop(g_titleScene->stacks + RENDER_STACK_C);
    }
    return 0;
}
}
