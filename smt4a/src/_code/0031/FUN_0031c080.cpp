/* NON_MATCHING: branch layout: retail runs the steps != 0 case inline and moves the zero case after the return; built predicates the zero case */
#include "common.h"
#include "util/CalleeContracts.h"
#include "shard/JobWork.h"

struct FadeWork {
    u8 unk00[0x0C];  // 0x00
    f32 alpha;       // 0x0C
    f32 rate;        // 0x10
};

extern "C" {

s32 scrGetArg(u32 index);

/* Script command: sets the job's fade to run over `steps` steps (at most 4 when the check passes), or clears it for 0. */
s32 FUN_0031c080(void)
{
    s32 job = scrGetArg(0);
    s32 steps = scrGetArg(1);

    if (FUN_00203d74() != 0 && steps > 4) {
        steps = 4;
    }
    FadeWork *work = (FadeWork *)jobGetWork(job);
    if (work != NULL) {
        if (steps == 0) {
            work->alpha = 0.0f;
            work->rate = 0.0f;
        } else {
            work->alpha = 1.0f;
            work->rate = -1.0f / steps;
        }
    }
    return 1;
}

} /* extern "C" */
