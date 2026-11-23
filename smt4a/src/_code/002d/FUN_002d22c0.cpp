/* NON_MATCHING: 2 lines: with g_gameState read at each use, retail copies the state's address for the later tests
 * (add r5, r0, #0) where the build loads it from the pool again. */
#include "common.h"
#include "game/GameStateA.h"
#include "ui/UiControl.h"
#include "map/MapSceneAccess.h"

extern "C" {

void scrCommArmPanel3(void);
void engineResetStateTime(void);
void mapSetSceneState(s32 state);
void lmapCameraSetMode(s32 state);
}

/* Update the panel flag and select the appropriate state transition. */
extern "C" void FUN_002d22c0(u8 panelFlag)
{
    if (g_gameState.alternateNaviMap != 0) {
        g_gameState.paused = panelFlag;
        return;
    }

    if (g_gameState.paused != 0) {
        g_gameState.paused = panelFlag;
        scrCommArmPanel3();
        engineResetStateTime();
        mapSetSceneState(1);
        lmapCameraSetMode(0);
        return;
    }

    bannerShow();
    if (g_gameState.mapId >= 100 || lmapSceneGetUnk0() == 1) {
        g_gameState.paused = panelFlag;
        mapSetSceneState(0x27);
        lmapCameraSetMode(0x10);
    }
}
