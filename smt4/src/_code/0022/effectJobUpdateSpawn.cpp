#include "event/EventEplEffect.h"
#include "shard/JobWork.h"

extern "C" {
void effectNodeUpdateTransform(void *current);
s32 effectTimelineNodesFitDuration(void *current);
void *effPartCreateFromSource(const void *definition);
void skelNodePoseChain(void *current, const f32 *translation);
void effectParticleEmitterSetAdvance(void *current, f32 value);
u32 effectTimelineComputeDuration(void *current);

/* Process of the EPL event effect job: spawns the effect once its definition has loaded, then runs it
 * until its timeline ends. */
s32 effectJobUpdateSpawn(u32 job)
{
    EventEplEffectWork *work = (EventEplEffectWork *)jobGetWork(job);
    switch (work->phase) {
    case 0:
        if (work->pending) {
            work->phase = 1;
            work->current = effPartCreateFromSource(work->pending);
            skelNodePoseChain(work->current, work->translation);
            effectParticleEmitterSetAdvance(work->current, 0.5f);
            work->resource = effectTimelineComputeDuration(work->current);
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
