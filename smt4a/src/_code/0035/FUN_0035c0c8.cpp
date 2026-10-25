/* NON_MATCHING: Skip-path VFP load grouping and register allocation differ; this build duplicates the zero-return epilogue. */
#include "sys/LinearFade.h"
#include "shard/JobWork.h"

extern "C" {
s32 FUN_00162ea4(void);

/* Advances a normalized fade, allowing the pending steps to be skipped at once. */
u32 FUN_0035c0c8(u32 job)
{
    LinearFadeWork *work = (LinearFadeWork *)jobGetWork(job);
    f32 value;
    if (work->elapsed == work->duration) {
        value = work->step < 0.0f ? 0.0f : 1.0f;
    } else {
        s32 skip = FUN_00162ea4();
        s32 elapsed = work->elapsed;
        if (skip) {
            work->elapsed = work->duration;
            work->value += work->step * (f32)(work->duration - elapsed);
            return 0;
        }
        work->elapsed = elapsed + 1;
        value = work->value + work->step;
    }
    work->value = value;
    return 0;
}
}
