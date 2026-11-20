/* NON_MATCHING: retail loads the value/step pair with one vldmia in each arm; the build uses separate vldr loads for the skip arm. */
#include "event/eventCommand.h"
#include "shard/JobWork.h"

extern "C" {
s32 eventIsSkipping(void);

/* Process of the "EventMessUnderFade" job: steps the alpha ramp, allowing the pending steps to be skipped at once. */
u32 eventMessUnderFadeJobStep(u32 job)
{
    EventCommand *work = (EventCommand *)jobGetWork(job);
    f32 value;
    if (work->elapsed == work->duration) {
        value = work->delta < 0.0f ? 0.0f : 1.0f;
    } else {
        s32 skip = eventIsSkipping();
        s32 elapsed = work->elapsed;
        if (skip) {
            work->elapsed = work->duration;
            value = work->alpha + work->delta * (f32)(work->duration - elapsed);
        } else {
            work->elapsed = elapsed + 1;
            value = work->alpha + work->delta;
        }
    }
    work->alpha = value;
    return 0;
}
}
