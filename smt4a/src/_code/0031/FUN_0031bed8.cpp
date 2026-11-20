#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "shard/JobWork.h"

struct SlideJob {
    u8 unk00[0x24];
    f32 start;  // 0x24
    f32 step;   // 0x28
};

extern "C" {

s32 scrGetArg(u32 index);

// Step counts are limited to 4 while inputFastForwardActive reports true.
static __inline s32 limitSteps(s32 steps)
{
    if (inputFastForwardActive() != 0 && steps > 4) {
        steps = 4;
    }
    return steps;
}

// Script command: set a job's slide start/step from a step count (clamped to 4 while inputFastForwardActive reports true).
u32 FUN_0031bed8(void)
{
    u32 job = scrGetArg(0);
    s32 steps = limitSteps(scrGetArg(1));
    SlideJob *work = (SlideJob *)jobGetWork(job);
    if (steps == 0) {
        work->start = 0.0f;
        work->step = 0.0f;
    } else {
        work->start = 1.0f;
        work->step = -1.0f / steps;
    }
    return 1;
}

} /* extern "C" */
