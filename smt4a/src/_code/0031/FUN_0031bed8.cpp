/* NON_MATCHING: retail keeps the zero path as an unpredicated block after the epilogue and loads both constants up front; built predicates the zero store and loads the constants late. */
#include "common.h"

struct SlideJob {
    u8 unk00[0x24];
    f32 start;  // 0x24
    f32 step;   // 0x28
};

extern "C" {

s32 scrGetArg(u32 index);
SlideJob *jobGetWork(u32 job);
s32 FUN_00203d74(void);

// Step counts are limited to 4 while FUN_00203d74 reports true.
static __inline s32 limitSteps(s32 steps)
{
    if (FUN_00203d74() != 0 && steps > 4) {
        steps = 4;
    }
    return steps;
}

// Script command: set a job's slide start/step from a step count (clamped to 4 while FUN_00203d74 reports true).
u32 FUN_0031bed8(void)
{
    u32 job = scrGetArg(0);
    s32 steps = limitSteps(scrGetArg(1));
    SlideJob *work = jobGetWork(job);
    if (steps == 0) {
        work->start = 0.0f;
        return 1;
    }
    work->start = 1.0f;
    work->step = -1.0f / steps;
    return 1;
}

} /* extern "C" */
