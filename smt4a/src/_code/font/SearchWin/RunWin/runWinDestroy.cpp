/* Destroy callback of the run window: kills its task and frees the work area. */
#include "common.h"
#include "font/SearchWin/RunWin.h"

extern "C" {

int asdMemFree(void *ptr);               /* heap free */
int jobStop(u32 task, int flags);     /* kill a task */

extern RunWinWork *g_runWin;

void runWinDestroy(void)
{
    RunWinWork *run = g_runWin;

    jobStop(g_runWin->task, 0);
    asdMemFree(run);
    g_runWin = NULL;
}

} /* extern "C" */
