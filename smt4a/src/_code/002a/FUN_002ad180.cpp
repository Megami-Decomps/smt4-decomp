/* NON_MATCHING: only the origin load in the merged draw tail differs: retail copies it with one vldmia {s0-s1}, this build loads
 * the two floats separately (the twin smt4 FUN_001f42d4 matches by copying the origin into a local in a plain static helper; here that form
 * changes the register allocation of the whole function). */
#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "code/Code0038.h"
#include "shard/JobWork.h"
#include "util/BitsAndBytes.h"

namespace {
struct EventDrawOrigin {
    f32 x;
    f32 y;
};

/* The event job's work area: the list of jobs to draw and the position they are drawn at. */
struct EventDrawWork {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 jobs[16];
    /* 0x44 */ s32 jobCount;
    /* 0x48 */ u8 unk48[0x48];
    /* 0x90 */ EventDrawOrigin origin;
};

struct EventTex {
    /* 0x00 */ u8 unk00[0x8c];
    /* 0x8c */ u8 drawAll;      /* draw every job, not only the ones in state 4 */
};
}

extern "C" {
extern EventTex *g_eventTex;
s32 jobIsValid(u32 job);
s32 jobGetStatus(u32 job);
s32 renderCtxPackPassFlags(u32 a, u32 b);
void FUN_002609d8(u32 job, s32 x, s32 y);
void skinObjectUpdateMatrices(RenderCtxA *context);
void renderCtxResetColorScale(RenderCtxA *context);

/* Draws one job at the work's origin. */
static __inline void drawJobAtOrigin(EventDrawWork *work, s32 i)
{
    FUN_002609d8(work->jobs[i], (s32)work->origin.x, (s32)work->origin.y);
}

/* Draws the event's jobs under temporary render-state presets. */
s32 FUN_002ad180(u32 job)
{
    EventDrawWork *work = (EventDrawWork *)jobGetWork(job);
    RenderCtxA *context = g_renderCtx;
    s32 state = renderCtxPackPassFlags(1, 0);
    renderStackPush(&context->stackA, state);
    context = g_renderCtx;
    state = renderCtxPackPassFlagsWithAlpha(6, 0.0f);
    renderStackPush(&context->additional.stackC, state);
    context = g_renderCtx;
    state = packNibblesAndByte(6, 7, 0);
    renderStackPushCountedDirect(&context->stackB, state);
    for (s32 i = 0; i < work->jobCount; i++) {
        if (g_eventTex->drawAll != 0) {
            if (jobIsValid(work->jobs[i])) {
                drawJobAtOrigin(work, i);
            }
        } else if (jobIsValid(work->jobs[i]) && jobGetStatus(work->jobs[i]) == 4) {
            drawJobAtOrigin(work, i);
        }
    }
    renderStackPop(&g_renderCtx->stackB);
    renderStackPop(&g_renderCtx->stackA);
    renderStackPop(&g_renderCtx->additional.stackC);
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
    return 0;
}

} /* extern "C" */
