#include "map/mapDepart.h"
#include "game/GameStateA.h"
#include "gamedata/GameFlags.h"
#include "map/PopupStateA.h"

extern "C" {
s32 randRange(s32 maximum);
s32 gameFlagIsSet(u32 flag);
s32 gameFlagStateIsOne(void);
const char *popupSelectWeightedMessage(u32 kind, u32 speakerId);

/* Periodically open the map popup while its progress flag is enabled. */
void FUN_00223fac(void)
{
    if (g_popupState->state != 0 || gameFlagStateIsOne() == 0) {
        return;
    }

    if (gameFlagIsSet(0x111A) == 0) {
        g_gameState.popupCountdown = 0;
        gameFlagSetValue(0x111A, 1, 1);
    } else {
        randRange(99);
    }

    bool trigger = false;
    if (g_gameState.popupCountdown <= 0) {
        g_gameState.popupCountdown = 5;
        trigger = true;
    } else {
        --g_gameState.popupCountdown;
    }
    if (!trigger) {
        return;
    }

    g_popupState->state = 20;
    g_popupState->timer = 0;
    g_popupState->message = popupSelectWeightedMessage(21, 187);
}
}
