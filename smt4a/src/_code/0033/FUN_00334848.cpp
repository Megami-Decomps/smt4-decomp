#include "camp/RenderCtx.h"

struct FloatPair {
    f32 first;
    f32 second;
};

/* The job work area, reduced to its list of 11 child job handles and the values the draw uses. */
struct JobSlotsWork {
    /* 0x000 */ u8 unk000[0x5F6];
    /* 0x5F6 */ u8 drawAll;
    /* 0x5F7 */ u8 unk5F7[0x15];
    /* 0x60C */ u32 slots[11];
    /* 0x638 */ u8 unk638[0x104];
    /* 0x73C */ FloatPair drawPosition;
};

extern "C" {
extern RenderCtxA *g_renderCtx;

JobSlotsWork *jobGetWork(void);
s32 jobIsValid(u32 job);
f32 jobGetScalarFrame(u32 job);
s32 FUN_00387580(u32 kind, f32 value);
void FUN_00281428(u32 job, f32 x, f32 y);
void skinObjectUpdateMatrices(RenderCtxA *context);
void renderCtxResetColorScale(RenderCtxA *context);

/* Drops finished child jobs, sorts the rest by frame, and draws them in their own render state. */
u32 FUN_00334848(void)
{
    JobSlotsWork *work = jobGetWork();
    for (s32 i = 0; i < 10; i++) {
        if (work->slots[i] != 0 && jobIsValid(work->slots[i]) == 0) {
            work->slots[i] = 0;
        }
    }
    u8 swapped;
    do {
        swapped = 0;
        for (s32 i = 0; i < 9; i++) {
            if (work->slots[i] == 0) {
                if (work->slots[i + 1] != 0) {
                    work->slots[i] = work->slots[i + 1];
                    swapped = 1;
                    work->slots[i + 1] = 0;
                }
            } else if (work->slots[i + 1] != 0) {
                f32 frame = jobGetScalarFrame(work->slots[i]);
                if (frame > jobGetScalarFrame(work->slots[i + 1])) {
                    swapped = 1;
                    u32 first = work->slots[i];
                    work->slots[i] = work->slots[i + 1];
                    work->slots[i + 1] = first;
                }
            }
        }
    } while (swapped);

    RenderCtxA *context = g_renderCtx;
    s32 state = FUN_00387580(6, 0.0f);
    renderStackPush(&context->additional.stackC, state);
    if (work->drawAll != 0) {
        for (s32 i = 0; i < 10; i++) {
            if (jobIsValid(work->slots[i]) != 0) {
                FUN_00281428(work->slots[i], work->drawPosition.first, work->drawPosition.second);
            }
        }
    } else if (jobIsValid(work->slots[10]) != 0) {
        FUN_00281428(work->slots[10], work->drawPosition.first, work->drawPosition.second);
    }
    renderStackPop(&g_renderCtx->additional.stackC);
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
    return 0;
}
}
