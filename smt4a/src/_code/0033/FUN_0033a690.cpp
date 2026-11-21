/* NON_MATCHING: retail hoists the shared float coordinates into registers s16-s26 before the mode tests and reuses them across the layouts (so the (25, 1) layout shares the (25, 2) code); this build reloads each constant per block. The stores themselves are identical. */
#include "map/mapDepart.h"
#include "game/GameStateA.h"
#include "map/LmapViewGlobals.h"

extern "C" {
void lmapCameraSetPresetDefaults(void);
s32 gameFlagIsSet(u32 flag);

/* Lays out the screen's anchor rows for the current map mode (g_gameState.mapId/submode); (10, 8) as arguments
   selects the fixed first layout. */
void FUN_0033a690(s32 mode, s32 subMode)
{
    LmapViewA *view = g_lmapViewHolder.view;
    view->unk305 = 0;
    lmapCameraSetPresetDefaults();
    if (mode == 10 && subMode == 8) {
        view = g_lmapViewHolder.view;
        view->targetHeight[3] = 100.0f;
        view->eyeHeight[3] = 200.0f;
        view->lateralDistance[3] = 0.0f;
        view->rearDistance[3] = 380.0f;
        view->fieldOfView[3] = 42.0f;
    }
    if (g_gameState.mapId == 1) {
        if (g_gameState.areaId != 1) {
            return;
        }
        if (gameFlagIsSet(114) && !gameFlagIsSet(177)) {
            view = g_lmapViewHolder.view;
            view->eyeHeight[2] = 110.0f;
            view->lateralDistance[2] = 0.0f;
            view->rearDistance[2] = 480.0f;
            view->fieldOfView[2] = 47.0f;
            view->eyeHeight[3] = 220.0f;
            view->lateralDistance[3] = 0.0f;
            view->rearDistance[3] = 480.0f;
            view->fieldOfView[3] = 47.0f;
            view->targetHeight[4] = 170.0f;
            view->eyeHeight[4] = 130.0f;
            view->lateralDistance[4] = 40.0f;
            view->rearDistance[4] = 250.0f;
            view->fieldOfView[4] = 47.0f;
            view->targetHeight[2] = 190.0f;
            view->targetHeight[3] = 180.0f;
        }
    }
    if (g_gameState.mapId == 4) {
        if (g_gameState.areaId != 2) {
            return;
        }
        if (gameFlagIsSet(244) && !gameFlagIsSet(246)) {
            view = g_lmapViewHolder.view;
            view->eyeHeight[2] = 100.0f;
            view->lateralDistance[2] = 0.0f;
            view->rearDistance[2] = 480.0f;
            view->fieldOfView[2] = 47.0f;
            view->eyeHeight[3] = 220.0f;
            view->lateralDistance[3] = 0.0f;
            view->rearDistance[3] = 480.0f;
            view->fieldOfView[3] = 47.0f;
            view->targetHeight[4] = 170.0f;
            view->eyeHeight[4] = 130.0f;
            view->lateralDistance[4] = 40.0f;
            view->rearDistance[4] = 250.0f;
            view->fieldOfView[4] = 47.0f;
            view->targetHeight[2] = 190.0f;
            view->targetHeight[3] = 180.0f;
        }
    }
    if (g_gameState.mapId == 25) {
        if (g_gameState.areaId == 1 || g_gameState.areaId == 2) {
            view = g_lmapViewHolder.view;
            view->targetHeight[2] = 170.0f;
            view->eyeHeight[2] = 210.0f;
            view->lateralDistance[2] = 0.0f;
            view->rearDistance[2] = 280.0f;
            view->fieldOfView[2] = 75.0f;
            view->targetHeight[3] = 100.0f;
            view->eyeHeight[3] = 220.0f;
            view->lateralDistance[3] = 0.0f;
            view->rearDistance[3] = 280.0f;
            view->fieldOfView[3] = 75.0f;
            view->targetHeight[4] = 150.0f;
            view->eyeHeight[4] = 160.0f;
            view->lateralDistance[4] = 40.0f;
            view->rearDistance[4] = 100.0f;
            view->fieldOfView[4] = 75.0f;
        } else {
            return;
        }
    }
    s32 current = g_gameState.mapId;
    if (current == 28 || current == 29 || current == 30 || current == 31 || current == 32) {
        view = g_lmapViewHolder.view;
        view->targetHeight[2] = 170.0f;
        view->eyeHeight[2] = 250.0f;
        view->lateralDistance[2] = 0.0f;
        view->rearDistance[2] = 490.0f;
        view->fieldOfView[2] = 43.0f;
    }
}

} /* extern "C" */
