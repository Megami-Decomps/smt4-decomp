/* Destroy callback of the clear-save screen: releases its resources and frees what it allocated. */
#include "common.h"
#include "clear_save/clearSave.h"
#include "shard/JobWork.h"

extern "C" {

int campButtonHelpRelease(void);
int campCommonBgRelease(void);
int dataTableFree(int id);
int scrScriptProcessDestroy(u32 resource);
int asdTMTexTableReleaseNode(int type, int index);
int asdMemFree(void *ptr);               /* heap free */

extern u32 *g_clearSave;

void clearSaveDestroy(u32 job)
{
    ClearSaveWorkA *work = (ClearSaveWorkA *)jobGetWork(job);

    asdTMTexTableReleaseNode(0, 0x83);
    dataTableFree(0x3c);
    campCommonBgRelease();
    campButtonHelpRelease();
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
