/* Destroy callback of the movie process: restores what the movie changed, releases the movie
 * and frees the work area. */
#include "common.h"
#include "mobiclip_ctrl/MobiclipCtrlProcess.h"

extern "C" {

int FUN_0013a618(int arg);
int asdMemFree(void *ptr);               /* heap free */
int FUN_001ad6d8(void);
int FUN_002e3494(u32 movie);
extern MobiclipProcessWork *jobGetWork(u32 arg);

extern MobiclipProcessGlobals g_mobiclipProcess;

void mobiclipProcessDestroy(u32 arg)
{
    MobiclipProcessWork *work;

    FUN_001ad6d8();
    work = jobGetWork(arg);
    if (work->unk79 != 0) {
        work->unk79 = 0;
        FUN_0013a618(1);
    }
    if (work->movie != 0) {
        FUN_002e3494(work->movie);
        work->movie = 0;
    }
    asdMemFree(work);
    g_mobiclipProcess.work = NULL;
}

} /* extern "C" */
