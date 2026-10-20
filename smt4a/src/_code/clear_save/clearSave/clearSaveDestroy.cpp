/* Destroy callback of the clear-save screen: releases its resources and frees what it allocated. */
#include "common.h"
#include "clear_save/clearSave.h"

extern "C" {

int FUN_0037b450(void);
int FUN_0035b304(void);
int FUN_001add24(int id);
int scrScriptProcessDestroy(u32 resource);
int FUN_0019a7f4(int type, int index);
int asdMemFree(void *ptr);               /* heap free */

extern u32 *g_clearSave;
extern ClearSaveWorkA *jobGetWork(void);

void clearSaveDestroy(void)
{
    ClearSaveWorkA *work = jobGetWork();

    FUN_0019a7f4(0, 0x83);
    FUN_001add24(0x3c);
    FUN_0035b304();
    FUN_0037b450();
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
