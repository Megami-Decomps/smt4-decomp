/* NON_MATCHING: 211 lines. The clamp is written as a ternary (retail's movle), and each hint sets the message in the
 * if/else arms and starts the popup (timer, state 5) after them, as retail's shared block tail does. Remaining:
 * retail takes g_lmapPopupMessages as one literal pointing at element 4 (the other rows by sub/add), keeps the
 * speaker ids 0xAD/0xBB, the timer's 0 and the state 5 in saved registers and spills the flags block to the stack
 * (push {r3..}). Defining the 8-entry table here (its param is a const char* to rodata text) did not change that. */
#include "common.h"
#include "game/GameStateA.h"
#include "gamedata/GameFlags.h"
#include "gamedata/GameDataAccess_VariantG.h"
#include "gamedata/GameDataAccess.h"
#include "gamedata/MapSaveBlockA.h"
#include "map/PopupStateA.h"

struct PopupMessage {
    char data[0x40];    // message resource name (the popup's message data)
    const char* text;   // 0x40
};

extern "C" {

extern PopupMessage g_lmapPopupMessages[8];

/* Points the popup at a message row and its speaker. */
static __inline void popupSetMessage(const PopupMessage* message, s32 speakerId)
{
    PopupStateA* popup = g_popupState;
    popup->messageData = message->data;
    popup->message = message->text;
    popup->speakerId = speakerId;
}

// Shows the next progress hint once the step counter passes each threshold.
void FUN_00295434(void)
{
    if (g_popupState->state != 0) return;
    if (g_gameState.mapId != 0x1c && g_gameState.mapId != 0x1d && g_gameState.mapId != 0x1e && g_gameState.mapId != 0x1f) {
        s32 steps = g_gameState.modeCounter - 1;
        g_gameState.modeCounter = steps;
        g_gameState.modeCounter = steps > 0 ? steps : 0;
        return;
    }

    MapSaveBlockA *block = gameFlagsGetBlock();
    if (!gameFlagIsSet(0x11f6) && g_gameState.modeCounter >= 2) {
        if (gameFlagIsSet(0x4c9)) {
            popupSetMessage(&g_lmapPopupMessages[4], 0xad);
        } else {
            popupSetMessage(&g_lmapPopupMessages[0], 0xbb);
        }
        g_popupState->timer = 0;
        g_popupState->state = 5;
        gameFlagSetValue(0x11f6, 1, 1);
        return;
    }
    if (!gameFlagIsSet(0x11f4) && g_gameState.modeCounter >= 4) {
        if (block->layout == 12) {
            if (gameFlagIsSet(0x4c9)) {
                popupSetMessage(&g_lmapPopupMessages[6], 0xad);
            } else {
                popupSetMessage(&g_lmapPopupMessages[2], 0xbb);
            }
            g_popupState->timer = 0;
            g_popupState->state = 5;
            gameFlagSetValue(0x11f4, 1, 1);
            return;
        }
        gameFlagSetValue(0x11f4, 1, 1);
    }
    if (!gameFlagIsSet(0x11f7) && g_gameState.modeCounter >= 6) {
        if (gameFlagIsSet(0x4c9)) {
            popupSetMessage(&g_lmapPopupMessages[5], 0xad);
        } else {
            popupSetMessage(&g_lmapPopupMessages[1], 0xbb);
        }
        g_popupState->timer = 0;
        g_popupState->state = 5;
        gameFlagSetValue(0x11f7, 1, 1);
        return;
    }
    if (!gameFlagIsSet(0x11f8) && g_gameState.mapId == 0x1f) {
        gameFlagIsSet(0x4c9);
        popupSetMessage(&g_lmapPopupMessages[7], 0xad);
        g_popupState->timer = 0;
        g_popupState->state = 5;
        gameFlagSetValue(0x11f8, 1, 1);
        return;
    }
}

} /* extern "C" */
