/* Destroy callback of the movie process: releases the movie and frees the work area. */
#include "common.h"
#include "mobiclip_ctrl/MobiclipCtrlProcess.h"

extern "C" {

int asdWorkAreaReset(void);
int asdMemFree(void *ptr);               /* heap free */
int asdOperatorDelete(u32 movie);
extern MobiclipProcessWork *jobGetWork(u32 arg);

extern MobiclipProcessGlobals g_mobiclipProcess;

void mobiclipProcessDestroy(u32 arg)
{
    MobiclipProcessWork *work;

    asdWorkAreaReset();
    work = jobGetWork(arg);
    if (work->movie != 0) {
        asdOperatorDelete(work->movie);
        work->movie = 0;
    }
    asdMemFree(work);
    g_mobiclipProcess.work = NULL;
}

} /* extern "C" */
