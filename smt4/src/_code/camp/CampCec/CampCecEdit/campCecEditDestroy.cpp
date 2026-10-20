/* Closes the CEC edit screen: releases its handles and heap blocks, kills its task and frees the
 * work area. */
#include "common.h"
#include "camp/CampCec/CampCecEdit.h"

extern "C" {

int scrScriptProcessDestroy(u32 resource);
int FUN_002a780c(u32 handle);
int asdMemFree(void *ptr);               /* heap free */
int jobStop(u32 task, int flags);     /* kill a task */
int FUN_00309e94(u32 handle);
int FUN_0031b970(u32 handle);

extern CampCecEdit *g_campCecEdit;

void campCecEditDestroy(void)
{
    CampCecEdit *edit = g_campCecEdit;

    asdMemFree(g_campCecEdit->heapA);
    asdMemFree(edit->heapB);
    asdMemFree(edit->heapC);
    FUN_002a780c(edit->handleE);
    scrScriptProcessDestroy(edit->resource);
    FUN_0031b970(edit->handleD);
    FUN_00309e94(edit->handleC);
    jobStop(edit->task, 0);
    asdMemFree(edit);
    g_campCecEdit = NULL;
}

} /* extern "C" */
