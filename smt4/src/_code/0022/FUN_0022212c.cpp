/* NON_MATCHING: block layout and VFP register choice only (retail emits the zero case out of line after the return and divides into s1) */
/* Script command: sets up a countdown fade on a job — full strength and a per-frame decrement of 1 / frames, or both
 * zero when the frame count is 0. Arguments: job id, frame count. Always returns 1. */
#include "common.h"
#include "shard/JobWork.h"

extern "C" {
/* The part of a job's work area the fade uses. */
struct FadeWork {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ f32 strength;
    /* 0x10 */ f32 step;
};

s32 scrGetArg(u32 index);

s32 FUN_0022212c(void)
{
    s32 jobId = scrGetArg(0);
    s32 frames = scrGetArg(1);
    FadeWork *work = (FadeWork *)jobGetWork(jobId);

    if (work != NULL) {
        if (frames != 0) {
            work->strength = 1.0f;
            work->step = -1.0f / (f32)frames;
        } else {
            work->strength = 0.0f;
            work->step = 0.0f;
        }
    }
    return 1;
}
}
