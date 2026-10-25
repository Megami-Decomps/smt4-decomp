/* NON_MATCHING: callback handle and shared draw coordinates recovered; push expression order and job-loop address sharing differ. */
#include "camp/RenderCtx.h"
#include "util/CalleeContracts.h"
#include "shard/JobWork.h"
#include "util/PackNibbles.h"

namespace {
/* The event job's work area: the list of jobs to draw and the position they are drawn at. */
struct EventDrawWork {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 jobs[16];
    /* 0x44 */ s32 jobCount;
    /* 0x48 */ u8 unk48[0x48];
    /* 0x90 */ f32 x;
    /* 0x94 */ f32 y;
};

struct EventTex {
    /* 0x00 */ u8 unk00[0x8c];
    /* 0x8c */ u8 drawAll;      /* draw every job, not only the ones in state 4 */
};
}

extern "C" {
extern RenderCtxA *g_renderCtx;
extern EventTex *g_eventTex;
s32 jobIsValid(u32 job);
s32 jobGetStatus(u32 job);
s32 FUN_001692ac(u32 a, u32 b);
void FUN_002609d8(u32 job, s32 x, s32 y);
void skinObjectUpdateMatrices(RenderCtxA *context);
void renderCtxResetColorScale(RenderCtxA *context);

/* Draws the event's jobs under temporary render-state presets. */
s32 FUN_002ad180(u32 job)
{
    EventDrawWork *work = reinterpret_cast<EventDrawWork *>(jobGetWork(job));
    RenderCtxA *context = g_renderCtx;
    s32 state = FUN_001692ac(1, 0);
    renderStackPush(&context->stackA, state);
    context = g_renderCtx;
    state = FUN_00387580(6, 0.0f);
    renderStackPush(&context->additional.stackC, state);
    context = g_renderCtx;
    state = packNibblesAndByte(6, 7, 0);
    renderStackPush(&context->stackB, state);
    for (s32 i = 0; i < work->jobCount; i++) {
        if (g_eventTex->drawAll != 0) {
            if (!jobIsValid(work->jobs[i]))
                continue;
        } else {
            if (!jobIsValid(work->jobs[i]) || jobGetStatus(work->jobs[i]) != 4)
                continue;
        }
        f32 x = work->x;
        f32 y = work->y;
        FUN_002609d8(work->jobs[i], (s32)x, (s32)y);
    }
    renderStackPop(&g_renderCtx->stackB);
    renderStackPop(&g_renderCtx->stackA);
    renderStackPop(&g_renderCtx->additional.stackC);
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
    return 0;
}

} /* extern "C" */
