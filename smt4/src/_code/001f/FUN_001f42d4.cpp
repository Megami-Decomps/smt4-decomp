#include "common.h"
#include "camp/RenderCtx.h"
#include "code/Code0028.h"
#include "shard/JobWork.h"
#include "camp/RenderCtxTitle.h"


struct TitleJobOrigin {
    f32 x;
    f32 y;
};
/* The title scene's job list: up to ten drawn jobs and the origin they are placed at. */
struct TitleJobWork {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 jobs[10];
    /* 0x2C */ s32 count;
    /* 0x30 */ u8 unk30[0x30];
    /* 0x60 */ TitleJobOrigin origin;
};

struct EventTexState {
    /* 0x00 */ u8 unk00[0x5C];
    /* 0x5C */ u8 jobsActive; /* draw every valid job, not only the running ones */
};

extern "C" {

extern EventTexState *g_eventTex; /* 0x43ded0 */

s32 jobIsValid(u32 job);
s32 jobGetStatus(u32 job);
s32 FUN_00285584(u32 job, s32 x, s32 y);
s32 renderCtxPackPassFlags(u32 first, u32 second);
s32 packNibblesAndByte(u32 high, u32 low, u32 byte);
void renderCtxResetColorScale(RenderCtx *context);

/* Draws one job at the work's origin. */
static void drawJobAtOrigin(TitleJobWork *work, s32 i)
{
    TitleJobOrigin origin = work->origin;
    FUN_00285584(work->jobs[i], (s32)origin.x, (s32)origin.y);
}

/* Draws the title scene's jobs with the three render stacks pushed. */
s32 FUN_001f42d4(u32 job)
{
    TitleJobWork *work = (TitleJobWork *)jobGetWork(job);
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
        if (g_eventTex->jobsActive) {
            if (jobIsValid(work->jobs[i])) {
                drawJobAtOrigin(work, i);
            }
        } else if (jobIsValid(work->jobs[i]) && jobGetStatus(work->jobs[i]) == 4) {
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
