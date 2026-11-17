#include "event/EventEplEffect.h"
#include "shard/JobWork.h"

extern "C" {
void effectNodeUpdateTransform(void *current);
s32 effectTimelineNodesFitDuration(void *current);
void *FUN_001abbc4(const void *definition);
void FUN_001b4eb8(void *current, const f32 *translation);
void FUN_001ac8ec(void *current, f32 value);
u32 FUN_0030061c(void *current);

/* Process of the EPL event effect job: spawns the effect once its definition has loaded, then runs it
 * until its timeline ends. */
s32 effectJobUpdateSpawn(u32 job)
{
    EventEplEffectWork *work = (EventEplEffectWork *)jobGetWork(job);
    switch (work->phase) {
    case 0:
        if (work->pending) {
            work->phase = 1;
            work->current = FUN_001abbc4(work->pending);
            FUN_001b4eb8(work->current, work->translation);
            FUN_001ac8ec(work->current, 0.5f);
            work->resource = FUN_0030061c(work->current);
            work->started = 1;
        }
        break;
    case 1:
        effectNodeUpdateTransform(work->current);
        if (effectTimelineNodesFitDuration(work->current)) {
            return -1;
        }
        break;
    }
    return 0;
}
}
