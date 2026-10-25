/* NON_MATCHING: three inlined render-stack push schedules and job-array base reuse differ; grouped origin and explicit callback handle are recovered. */
#include "common.h"
#include "camp/RenderCtx.h"
#include "util/CalleeContracts.h"
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
s32 FUN_002c5d80(u32 first, u32 second);
s32 packNibblesAndByte(u32 high, u32 low, u32 byte);
void FUN_002c198c(RenderCtx *context);
void FUN_002c18e4(RenderCtx *context);

/* Draws the title scene's jobs with the three render stacks pushed. */
s32 FUN_001f42d4(u32 job)
{
    TitleJobWork *work = (TitleJobWork *)jobGetWork(job);
    s32 i;

    renderCtxPushA(g_titleScene, FUN_002c5d80(1, 0));
    renderCtxPushC(g_titleScene, FUN_002865c0(6, 0.0f));
    renderCtxPushB(g_titleScene, packNibblesAndByte(6, 7, 0));
    for (i = 0; i < work->count; i++) {
        if (g_eventTex->jobsActive) {
            if (!jobIsValid(work->jobs[i]))
                continue;
        } else {
            if (!jobIsValid(work->jobs[i]) || jobGetStatus(work->jobs[i]) != 4)
                continue;
        }
        TitleJobOrigin origin = work->origin;
        s32 x = (s32)origin.x;
        s32 y = (s32)origin.y;
        FUN_00285584(work->jobs[i], x, y);
    }
    renderStackPop(&g_titleScene->stackB);
    renderStackPop(&g_titleScene->stackA);
    renderStackPop(&g_titleScene->additional.stackC);
    FUN_002c198c(g_titleScene);
    FUN_002c18e4(g_titleScene);
    return 0;
}

} /* extern "C" */
