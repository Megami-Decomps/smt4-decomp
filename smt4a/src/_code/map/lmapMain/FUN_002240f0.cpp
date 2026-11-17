#include "common.h"
#include "game/GameStateA.h"
#include "gamedata/GameFlags.h"
#include "map/mapDepart.h"
#include "map/PopupStateA.h"
#include "gamedata/GameDataAccess_Smt4a.h"

extern "C" {
s32 gameFlagIsSet(u32 flag);
s32 randRange(u32 range);

const char *popupSelectWeightedMessage(u32 kind, u32 speakerId);

void FUN_002240f0(void)
{
    if (g_popupState->state != 0 || gameFlagStateIsOne() == 0) {
        return;
    }

    bool suppressPopup = true;
    s32 flagSet = gameFlagIsSet(0x111b);
    s32 *countdown = &g_gameState.randomPopupCountdown;
    if (flagSet == 0) {
        suppressPopup = false;
        g_gameState.randomPopupCountdown = 0;
        gameFlagSetValue(0x111b, 1, 1);
    } else {
        // The retail ADD wraps before the signed comparison.
        if ((s32)((u32)randRange(99) + 1u) <= 30) {
            suppressPopup = false;
        }
    }

    if (g_gameState.randomPopupCountdown > 0) {
        *countdown = g_gameState.randomPopupCountdown - 1;
        return;
    }

    g_gameState.randomPopupCountdown = 5;
    if (!suppressPopup) {
        g_popupState->state = 0x15;
        g_popupState->timer = 0;
        const char *message = popupSelectWeightedMessage(0x16, 0xbb);
        g_popupState->message = message;
    }
}
}
