/* NON_MATCHING: Retail mov r4, r0 differs from recovered mov r5, r0. */
#include "common.h"
#include "game/GameStateA.h"
#include "ui/UiControl.h"
#include "map/MapSceneAccess.h"

extern "C" {

void scrCommArmPanel3(void);
void engineResetStateTime(void);
void mapSetSceneState(s32 state);
void FUN_00303460(s32 state);
}

namespace {

// Update the panel flag and select the appropriate state transition.
}

extern "C" void FUN_002d22c0(u8 panelFlag)
{
    GameStateA *state = &g_gameState;

    if (state->alternateNaviMap != 0) {
        state->paused = panelFlag;
        return;
    }

    if (state->paused != 0) {
        state->paused = panelFlag;
        scrCommArmPanel3();
        engineResetStateTime();
        mapSetSceneState(1);
        FUN_00303460(0);
        return;
    }

    bannerShow();
    if (state->mapId >= 100 || lmapSceneGetUnk0() == 1) {
        state->paused = panelFlag;
        mapSetSceneState(0x27);
        FUN_00303460(0x10);
    }
}
