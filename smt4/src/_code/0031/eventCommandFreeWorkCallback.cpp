#include "shard/JobWork.h"

extern "C" {

extern void *g_eventCommand;
s32 asdMemFree(void *work);

/* Releases the event-command job's work block. */
void eventCommandFreeWorkCallback(u32 job)
{
    asdMemFree(jobGetWork(job));
    g_eventCommand = NULL;
}

}
