/* NON_MATCHING: loop and the A/B pushes now match; only the stackC push schedules its count increment (add r2,r1,#1) after the old-top load where retail does it first. */
#include "common.h"
#include "camp/RenderCtx.h"
#include "code/Code0028.h"
#include "shard/JobWork.h"


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
extern RenderCtx *g_titleScene;   /* 0x44ea00 */

s32 jobIsValid(u32 job);
s32 jobGetStatus(u32 job);
s32 FUN_00285584(u32 job, s32 x, s32 y);
s32 renderCtxPackPassFlags(u32 first, u32 second);
s32 packNibblesAndByte(u32 high, u32 low, u32 byte);
void renderCtxResetColorScale(RenderCtx *context);

/* Draws the title scene's jobs with the three render stacks pushed. */
s32 FUN_001f42d4(u32 job)
{
    TitleJobWork *work = (TitleJobWork *)jobGetWork(job);
    s32 i;

    RenderCtx *context = g_titleScene;
    s32 state = renderCtxPackPassFlags(1, 0);
    renderStackPushCounted(&context->stackA, state);
    context = g_titleScene;
    state = FUN_002865c0(6, 0.0f);
    renderStackPush(&context->additional.stackC, state);
    context = g_titleScene;
    state = packNibblesAndByte(6, 7, 0);
    renderStackPushCountedDirect(&context->stackB, state);
    for (i = 0; i < work->count; i++) {
        if (g_eventTex->jobsActive) {
            if (jobIsValid(work->jobs[i])) {
                TitleJobOrigin origin = work->origin;
                s32 x = (s32)origin.x;
                s32 y = (s32)origin.y;
                FUN_00285584(work->jobs[i], x, y);
            }
        } else if (jobIsValid(work->jobs[i]) && jobGetStatus(work->jobs[i]) == 4) {
            TitleJobOrigin origin = work->origin;
            s32 x = (s32)origin.x;
            s32 y = (s32)origin.y;
            FUN_00285584(work->jobs[i], x, y);
        }
    }
    renderStackPop(&g_titleScene->stackB);
    renderStackPop(&g_titleScene->stackA);
    renderStackPop(&g_titleScene->additional.stackC);
    renderCtxApplyTransforms(g_titleScene);
    renderCtxResetColorScale(g_titleScene);
    return 0;
}

} /* extern "C" */
