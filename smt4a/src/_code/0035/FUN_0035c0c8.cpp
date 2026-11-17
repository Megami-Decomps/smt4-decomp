/* NON_MATCHING: Skip-path VFP load grouping and register allocation differ; this build duplicates the zero-return epilogue. */
#include "event/eventCommand.h"
#include "shard/JobWork.h"

extern "C" {
s32 FUN_00162ea4(void);

/* Process of the "EventMessUnderFade" job: steps the alpha ramp, allowing the pending steps to be skipped at once. */
u32 FUN_0035c0c8(u32 job)
{
    EventCommand *work = (EventCommand *)jobGetWork(job);
    f32 value;
    if (work->elapsed == work->duration) {
        value = work->delta < 0.0f ? 0.0f : 1.0f;
    } else {
        s32 skip = FUN_00162ea4();
        s32 elapsed = work->elapsed;
        if (skip) {
            work->elapsed = work->duration;
            work->alpha += work->delta * (f32)(work->duration - elapsed);
            return 0;
        }
        work->elapsed = elapsed + 1;
        value = work->alpha + work->delta;
    }
    work->alpha = value;
    return 0;
}
}
