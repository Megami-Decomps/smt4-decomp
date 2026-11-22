#include "common.h"
#include "game/GameStateA.h"
#include "map/LmapViewGlobals.h"

extern "C" {

void FUN_003a2904(s32 a, s32 b);

/* Callback: in mode 2 / submode 5 or mode 4 / submode 2, starts the map view action when the view is idle. Always returns 0. */
s32 FUN_002bd170(void)
{
    if (g_gameState.mapId == 2) {
        if (g_gameState.areaId != 5) {
            return 0;
        }
    } else if (g_gameState.mapId == 4) {
        if (g_gameState.areaId != 2) {
            return 0;
        }
    } else {
        return 0;
    }
    if (g_lmapView != NULL) {
        if (g_lmapView->moving == 0 && g_lmapView->unk2B8 == 0) {
            FUN_003a2904(0, 0);
        }
    }
    return 0;
}

} /* extern "C" */
