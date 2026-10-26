/* NON_MATCHING: Retail mov r4, r0 differs from recovered mov r5, r0. */
#include "common.h"
#include "ui/UiControl.h"
#include "map/MapSceneAccess.h"

extern "C" {
extern s32 g_gameState;

void scrCommArmPanel3(void);
void engineResetStateTime(void);
void mapSetSceneState(s32 state);
void FUN_00303460(s32 state);
}

namespace {

struct GameStateLocalView {
    s32 gameState;       // 0x000
    u8 unk04[0x1D];      // 0x004
    u8 unk21;           // 0x021
    u8 unk22[0x43E];     // 0x022
    u8 unk460;          // 0x460
};

// Update the panel flag and select the appropriate state transition.
}

extern "C" void FUN_002d22c0(u8 panelFlag)
{
    GameStateLocalView* state = reinterpret_cast<GameStateLocalView*>(&g_gameState);

    if (state->unk460 != 0) {
        state->unk21 = panelFlag;
        return;
    }

    if (state->unk21 != 0) {
        state->unk21 = panelFlag;
        scrCommArmPanel3();
        engineResetStateTime();
        mapSetSceneState(1);
        FUN_00303460(0);
        return;
    }

    bannerShow();
    if (state->gameState >= 100 || lmapSceneGetUnk0() == 1) {
        state->unk21 = panelFlag;
        mapSetSceneState(0x27);
        FUN_00303460(0x10);
    }
}
