/* Closes the CEC edit screen: releases its handles and heap blocks, kills its task and frees the
 * work area. */
#include "common.h"
#include "camp/CampCec/CampCecEdit.h"
#include "script/scrScriptProcess.h"

extern "C" {

int asdMemFreeSlot(u32 handle);
int asdMemFree(void *ptr);               /* heap free */
int jobStop(u32 task, int flags);     /* kill a task */
int handleObjectFree(u32 handle);
int campCecEditDestroyResources(u32 handle);

extern CampCecEdit *g_campCecEdit;

void campCecEditDestroy(void)
{
    CampCecEdit *edit = g_campCecEdit;

    asdMemFree(g_campCecEdit->heapA);
    asdMemFree(edit->heapB);
    asdMemFree(edit->heapC);
    asdMemFreeSlot(edit->handleE);
    scrScriptProcessDestroy(edit->resource);
    campCecEditDestroyResources(edit->handleD);
    handleObjectFree(edit->handleC);
    jobStop(edit->task, 0);
    asdMemFree(edit);
    g_campCecEdit = NULL;
}

} /* extern "C" */
