#include "battle/btlEvent.h"
#include "shard/JobWork.h"

extern "C" {

void scrScriptProcessDestroy(void *process);
void asdMemFree(void *block);
void jobStop(u32 job, s32 arg);
s32 jobIsValid(u32 job);

extern BtlEvent *g_btlEvent;

/* Destroy callback of the battle event: frees its blocks and stops the owner job. */
void btlEventDestroy(u32 job)
{
    BtlEventOwner *owner = (BtlEventOwner *)jobGetWork(job);
    BtlEvent *event = g_btlEvent;

    if (event != NULL) {
        if (event->dataA != NULL) {
            asdMemFree(event->dataA);
            event->dataA = NULL;
        }
        if (event->dataB != NULL) {
            asdMemFree(event->dataB);
            event->dataB = NULL;
        }
        if (event->dataC != NULL) {
            asdMemFree(event->dataC);
            event->dataC = NULL;
        }
        if (event->process != NULL) {
            scrScriptProcessDestroy(event->process);
            event->process = NULL;
        }
        event->unk00 = 0;
        asdMemFree(g_btlEvent);
        g_btlEvent = NULL;
    }
    if (jobIsValid(owner->job) != 0) {
        jobStop(owner->job, 0);
    }
}

} /* extern "C" */
