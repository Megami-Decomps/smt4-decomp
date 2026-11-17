#include "common.h"
#include "map/LmapGlobals.h"

extern "C" {
extern void *g_mapMain;
s32 lmapSceneGetUnk0();
void uiSelectionRefresh();
void FUN_00246bd4();
}

/* Refresh selection ten when map mode is active in scene 28. */
extern "C" void lmapRefreshScene28Selection()
{
    if (g_mapMain == NULL) {
        return;
    }
    if (lmapSceneGetUnk0() == 28) {
        g_lmapScene->state = 10;
        uiSelectionRefresh();
        FUN_00246bd4();
    }
}
