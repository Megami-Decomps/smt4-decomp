/* Destroy callback of the clear-save screen: releases its resources and frees what it allocated. */
#include "common.h"
#include "clear_save/clearSave.h"
#include "shard/JobWork.h"

extern "C" {

int buttonHelpRelease(void);
int uiFadeRelease(void);
int fileSlotFree(int id);
int scrScriptProcessDestroy(u32 resource);
int asdTMTexTableReleaseNode(int type, int index);
int asdMemFree(void *ptr);               /* heap free */

extern u32 *g_clearSave;

void clearSaveDestroy(u32 job)
{
    ClearSaveWork *work = (ClearSaveWork *)jobGetWork(job);

    asdTMTexTableReleaseNode(2, 0x83);
    fileSlotFree(0x3c);
    uiFadeRelease();
    buttonHelpRelease();
    if (work->resource != 0) {
        scrScriptProcessDestroy(work->resource);
        work->resource = 0;
    }
    if (work->heapA != NULL) {
        asdMemFree(work->heapA);
        work->heapA = NULL;
    }
    if (work->heapB != NULL) {
        asdMemFree(work->heapB);
        work->heapB = NULL;
    }
    if (g_clearSave != NULL) {
        asdMemFree(g_clearSave);
        g_clearSave = NULL;
    }
}

} /* extern "C" */
