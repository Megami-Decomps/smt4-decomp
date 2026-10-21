#include "shard/JobWork.h"

extern "C" {

extern void *g_eventCommand;
s32 asdMemFree(void *work);

/* Releases the event-command job's work block. */
s32 eventCommandFreeWorkCallback()
{
    asdMemFree(jobGetWork());
    g_eventCommand = NULL;
    return 0;
}

}
