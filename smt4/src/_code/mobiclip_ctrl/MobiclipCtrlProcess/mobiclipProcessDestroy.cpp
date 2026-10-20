/* Destroy callback of the movie process: releases the movie and frees the work area. */
#include "common.h"
#include "mobiclip_ctrl/MobiclipCtrlProcess.h"

extern "C" {

int FUN_002a4d14(void);
int asdMemFree(void *ptr);               /* heap free */
int FUN_002c6a10(u32 movie);
extern MobiclipProcessWork *jobGetWork(u32 arg);

extern MobiclipProcessGlobals g_mobiclipProcess;

void mobiclipProcessDestroy(u32 arg)
{
    MobiclipProcessWork *work;

    FUN_002a4d14();
    work = jobGetWork(arg);
    if (work->movie != 0) {
        FUN_002c6a10(work->movie);
        work->movie = 0;
    }
    asdMemFree(work);
    g_mobiclipProcess.work = NULL;
}

} /* extern "C" */
