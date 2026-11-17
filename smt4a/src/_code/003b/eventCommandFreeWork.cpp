#include "event/eventCommand.h"
#include "shard/JobWork.h"

extern "C" {

void asdMemFree(void *block);

/* Destroy callback of the "EventMessUnderFade" job: frees its work. */
void eventCommandFreeWork(u32 job)
{
    asdMemFree(jobGetWork(job));
    g_eventCommand.command = NULL;
}

} /* extern "C" */
