/* Destroy callback of the clear-save screen: releases its resources and frees what it allocated. */
#include "common.h"
#include "clear_save/clearSave.h"

extern "C" {

int FUN_002917b8(void);
int FUN_00291944(void);
int FUN_002a46d8(int id);
int scrScriptProcessDestroy(u32 resource);
int FUN_002ae898(int type, int index);
int asdMemFree(void *ptr);               /* heap free */

extern u32 *g_clearSave;
extern ClearSaveWork *jobGetWork(void);

void clearSaveDestroy(void)
{
    ClearSaveWork *work = jobGetWork();

    FUN_002ae898(2, 0x83);
    FUN_002a46d8(0x3c);
    FUN_00291944();
    FUN_002917b8();
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
