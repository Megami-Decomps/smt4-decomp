#include "common.h"

struct LocalMapSelection {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 selection;
};
extern "C" {
extern void *g_mapMain;
extern LocalMapSelection *g_lmapScene;
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
        g_lmapScene->selection = 10;
        uiSelectionRefresh();
        FUN_00246bd4();
    }
}
