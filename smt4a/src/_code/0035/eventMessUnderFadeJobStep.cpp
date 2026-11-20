#include "event/eventCommand.h"
#include "shard/JobWork.h"

extern "C" {
s32 eventIsSkipping(void);

/* Process of the "EventMessUnderFade" job: steps the alpha ramp, allowing the pending steps to be skipped at once. */
u32 eventMessUnderFadeJobStep(u32 job)
{
    EventCommand *work = (EventCommand *)jobGetWork(job);
    if (work->elapsed == work->duration) {
        if (work->delta < 0.0f) {
            work->alpha = 0.0f;
        } else {
            work->alpha = 1.0f;
        }
    } else if (eventIsSkipping()) {
        s32 remaining = work->duration - work->elapsed;
        work->elapsed = work->duration;
        work->alpha += work->delta * (f32)remaining;
    } else {
        work->elapsed++;
        work->alpha += work->delta;
    }
    return 0;
}
}
