#include "common.h"
#include "shard/JobWork.h"

extern "C" {

extern void *g_btlEvent;
extern s32 battleEventProcessUpdate(void *event, void *work);

/* Sends the current job work to the active battle event. */
s32 btlEventUpdateCurrentWork(u32 job)
{
    void *work = (void *)jobGetWork(job);
    return g_btlEvent != NULL ? battleEventProcessUpdate(g_btlEvent, work) : 0;
}

} /* extern "C" */