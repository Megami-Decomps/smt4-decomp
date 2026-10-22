#include "common.h"

extern "C" {

extern void *jobGetWork(void);
extern void *g_btlEvent;
extern s32 battleEventProcessUpdate(void *event, void *work);

/* Sends the current job work to the active battle event. */
s32 btlEventUpdateCurrentWork(void)
{
    void *work = jobGetWork();
    return g_btlEvent != NULL ? battleEventProcessUpdate(g_btlEvent, work) : 0;
}

} /* extern "C" */