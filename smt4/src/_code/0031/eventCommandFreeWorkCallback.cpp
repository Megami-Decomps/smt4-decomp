#include "event/eventCommand.h"
#include "shard/JobWork.h"

extern "C" {

s32 asdMemFree(void *work);

/* Destroy callback of the "EventMessUnderFade" job: frees its work. */
void eventCommandFreeWorkCallback(u32 job)
{
    asdMemFree(jobGetWork(job));
    g_eventCommand.command = NULL;
}

}
