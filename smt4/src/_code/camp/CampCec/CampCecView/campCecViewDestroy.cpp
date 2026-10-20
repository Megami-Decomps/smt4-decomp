/* Closes the CEC view screen: releases its handles and heap block, kills its task and frees the work area. */
#include "common.h"
#include "camp/CampCec/CampCecView.h"

extern "C" {

int asdMemFree(void *ptr);               /* heap free */
int jobStop(u32 task, int flags);     /* kill a task */
int FUN_00309e94(u32 handle);
int FUN_0031b970(u32 handle);

extern CampCecView *g_campCecView;

void campCecViewDestroy(void)
{
    CampCecView *view = g_campCecView;
    int i;

    FUN_0031b970(view->handleB);
    for (i = 0; i < 3; i++) {
        FUN_00309e94(view->handle[i]);
    }
    asdMemFree(view->heap);
    jobStop(view->task, 0);
    asdMemFree(view);
    g_campCecView = NULL;
}

} /* extern "C" */
