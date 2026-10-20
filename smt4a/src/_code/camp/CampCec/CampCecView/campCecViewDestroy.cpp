/* Closes the CEC view screen: releases its handles and heap block, kills its task and frees the work area. */
#include "common.h"
#include "camp/CampCec/CampCecView.h"

extern "C" {

int asdMemFree(void *ptr);               /* heap free */
int jobStop(u32 task, int flags);     /* kill a task */
int FUN_0039a17c(u32 handle);
int FUN_003b5fc8(u32 handle);

extern CampCecViewA *g_campCecView;

void campCecViewDestroy(void)
{
    CampCecViewA *view = g_campCecView;
    int i;

    FUN_003b5fc8(view->handleB);
    for (i = 0; i < 3; i++) {
        FUN_0039a17c(view->handle[i]);
    }
    asdMemFree(view->heap);
    jobStop(view->task, 0);
    asdMemFree(view);
    g_campCecView = NULL;
}

} /* extern "C" */
