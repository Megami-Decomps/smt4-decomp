#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "code/Code0038.h"
#include "event/2dEvent/2dEventTex.h"
#include "shard/JobWork.h"
#include "util/BitsAndBytes.h"

extern "C" {
extern EventTexA *g_eventTex;
s32 jobIsValid(u32 job);
s32 jobGetStatus(u32 job);
void FUN_002609d8(u32 job, s32 x, s32 y);
void skinObjectUpdateMatrices(RenderCtxA *context);
void renderCtxResetColorScale(RenderCtxA *context);

/* Draws one job at the work's origin. */
static void drawJobAtOrigin(EventTexA *work, s32 i)
{
    EventTexOrigin origin = work->drawOrigin;
    FUN_002609d8(work->slots[i], (s32)origin.x, (s32)origin.y);
}

/* Draws the event's jobs under temporary render-state presets. */
s32 eventTexDrawJobs(u32 job)
{
    EventTexA *work = (EventTexA *)jobGetWork(job);
    RenderCtxA *context = g_renderCtx;
    s32 state = renderCtxPackPassFlags(1, 0);
    renderStackPushCounted(context->stacks + RENDER_STACK_A, state);
    context = g_renderCtx;
    renderCtxPushC(context, renderCtxPackPassFlagsWithAlpha(6, 0.0f));
    context = g_renderCtx;
    state = packNibblesAndByte(6, 7, 0);
    renderStackPushCountedDirect(context->stacks + RENDER_STACK_B, state);
    for (s32 i = 0; i < work->count; i++) {
        if (g_eventTex->flag != 0) {
            if (jobIsValid(work->slots[i])) {
                drawJobAtOrigin(work, i);
            }
        } else if (jobIsValid(work->slots[i]) && jobGetStatus(work->slots[i]) == 4) {
            drawJobAtOrigin(work, i);
        }
    }
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_B);
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_C);
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
    return 0;
}

} /* extern "C" */
