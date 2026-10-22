#include "shard/NaviMain.h"
#include "common.h"

extern "C" {
extern NaviMain *g_naviMain;

s32 stageAssetsLoaded(void);
int NaviMain_DispatchState(void *state);

/* Navi main task: while stageAssetsLoaded reports ready and the navi object isn't busy, dispatches its state; always returns 0. */
u32 NAVI_PROC(void)
{
    if (stageAssetsLoaded() == 0) {
        return 0;
    }
    if (g_naviMain->busy != 0) {
        return 0;
    }
    NaviMain_DispatchState(g_naviMain->state);
    return 0;
}

} /* extern "C" */
