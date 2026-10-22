#include "shard/NaviMain.h"
#include "common.h"

extern "C" {
extern NaviMain *g_naviMain;

s32 stageAssetsLoaded(void);
int NaviMain_UpdateDiscovery(void *discovery);

/* Navi task: while stageAssetsLoaded reports ready and the navi object isn't busy, updates its discovery state; always returns 0. */
u32 NAVI_DOWN(void)
{
    if (stageAssetsLoaded() == 0) {
        return 0;
    }
    if (g_naviMain->busy != 0) {
        return 0;
    }
    NaviMain_UpdateDiscovery(g_naviMain->state);
    return 0;
}

} /* extern "C" */
