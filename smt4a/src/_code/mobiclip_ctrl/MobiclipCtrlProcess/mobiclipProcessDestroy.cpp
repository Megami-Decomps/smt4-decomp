/* Destroy callback of the movie process: restores what the movie changed, releases the movie
 * and frees the work area. */
#include "common.h"
#include "mobiclip_ctrl/MobiclipCtrlProcess.h"

extern "C" {

int asdGxPresetRequest(int arg);
int asdMemFree(void *ptr);               /* heap free */
int asdCameraInitAreas(void);
int asdOperatorDeleteB(u32 movie);
extern MobiclipProcessWork *jobGetWork(u32 arg);

extern MobiclipProcessGlobals g_mobiclipProcess;

void mobiclipProcessDestroy(u32 arg)
{
    MobiclipProcessWork *work;

    asdCameraInitAreas();
    work = jobGetWork(arg);
    if (work->unk79 != 0) {
        work->unk79 = 0;
        asdGxPresetRequest(1);
    }
    if (work->movie != 0) {
        asdOperatorDeleteB(work->movie);
        work->movie = 0;
    }
    asdMemFree(work);
    g_mobiclipProcess.work = NULL;
}

} /* extern "C" */
