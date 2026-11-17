#include "event/EventEplEffect.h"
#include "shard/JobWork.h"


extern "C" {
void resourceListDestroy(void *resources);
void asdMemFree(void *memory);

/* Destroy callback of the EPL event effect job: destroys the effect and frees its loaded definition. */
void eventWorkRelease(u32 job)
{
    EventEplEffectWork *work = (EventEplEffectWork *)jobGetWork(job);
    resourceListDestroy(work->current);
    asdMemFree(const_cast<void *>(work->pending));
}
}
