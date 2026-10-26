/* NON_MATCHING: retail loads the value/step pair with one vldmia in each arm; the build uses separate vldr loads for the skip arm. */
#include "sys/LinearFade.h"
#include "shard/JobWork.h"

extern "C" {
s32 FUN_002c1d5c(void);

/* Advances a normalized fade, allowing the pending steps to be skipped at once. */
u32 FUN_002e2250(u32 job)
{
    LinearFadeWork *work = (LinearFadeWork *)jobGetWork(job);
    f32 value;
    if (work->elapsed == work->duration) {
        value = work->step < 0.0f ? 0.0f : 1.0f;
    } else {
        s32 skip = FUN_002c1d5c();
        s32 elapsed = work->elapsed;
        if (skip) {
            work->elapsed = work->duration;
            value = work->value + work->step * (f32)(work->duration - elapsed);
        } else {
            work->elapsed = elapsed + 1;
            value = work->value + work->step;
        }
    }
    work->value = value;
    return 0;
}
}
