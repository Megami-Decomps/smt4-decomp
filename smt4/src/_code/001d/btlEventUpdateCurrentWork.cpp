#include "common.h"

extern "C" {

extern void *jobGetWork(void);
extern void *g_btlEvent;
extern s32 FUN_003c786c(void *event, void *work);

/* Sends the current job work to the active battle event. */
s32 btlEventUpdateCurrentWork(void)
{
    void *work = jobGetWork();
    return g_btlEvent != NULL ? FUN_003c786c(g_btlEvent, work) : 0;
}

} /* extern "C" */