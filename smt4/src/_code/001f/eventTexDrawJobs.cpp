#include "common.h"
#include "camp/RenderCtx.h"
#include "code/Code0028.h"
#include "event/2dEvent/2dEventTex.h"
#include "shard/JobWork.h"
#include "camp/RenderCtxTitle.h"

extern "C" {

extern EventTex *g_eventTex;

s32 jobIsValid(u32 job);
s32 jobGetStatus(u32 job);
s32 FUN_00285584(u32 job, s32 x, s32 y);
s32 packNibblesAndByte(u32 high, u32 low, u32 byte);
void renderCtxResetColorScale(RenderCtx *context);

/* Draws one job at the work's origin. */
static void drawJobAtOrigin(EventTex *work, s32 i)
{
    EventTexOrigin origin = work->drawOrigin;
    FUN_00285584(work->slots[i], (s32)origin.x, (s32)origin.y);
}

/* Draws the title scene's jobs with the three render stacks pushed. */
s32 eventTexDrawJobs(u32 job)
{
    EventTex *work = (EventTex *)jobGetWork(job);
    s32 i;

    RenderCtx *context = g_titleScene;
    s32 state = renderCtxPackPassFlags(1, 0);
    renderStackPushCounted(context->stacks + RENDER_STACK_A, state);
    context = g_titleScene;
    renderCtxPushC(context, gxPackFadeKindAlphaWord(6, 0.0f));
    context = g_titleScene;
    state = packNibblesAndByte(6, 7, 0);
    renderStackPushCountedDirect(context->stacks + RENDER_STACK_B, state);
    for (i = 0; i < work->count; i++) {
        if (g_eventTex->flag) {
            if (jobIsValid(work->slots[i])) {
                drawJobAtOrigin(work, i);
            }
        } else if (jobIsValid(work->slots[i]) && jobGetStatus(work->slots[i]) == 4) {
            drawJobAtOrigin(work, i);
        }
    }
    renderStackPop(g_titleScene->stacks + RENDER_STACK_B);
    renderStackPop(g_titleScene->stacks + RENDER_STACK_A);
    renderStackPop(g_titleScene->stacks + RENDER_STACK_C);
    renderCtxApplyTransforms(g_titleScene);
    renderCtxResetColorScale(g_titleScene);
    return 0;
}

} /* extern "C" */
