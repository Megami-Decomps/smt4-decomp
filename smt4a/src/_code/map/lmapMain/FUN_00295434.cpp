/* NON_MATCHING: the step counter is now read/written as g_gameState+0x4FC with the one store through g_gameState.modeCounter (as retail; the block matches). Remaining: retail takes g_lmapPopupMessages as ONE literal pointing at element 4 (r5, others by sub/add) and spills the flags block to the stack (push {r3..}); the extern array gets a literal at the base. Defining the 8-entry table here (its param is a const char* to rodata text) did not change that. */
#include "common.h"
#include "game/GameStateA.h"
#include "gamedata/GameFlags.h"
#include "gamedata/GameDataAccess_VariantG.h"
#include "gamedata/GameDataAccess.h"
#include "shard/W5_W5Match7_FlagBanks.h"
#include "map/PopupStateA.h"

struct PopupMessage {
    char data[0x40];    // message resource name (the popup's message data)
    const char* text;   // 0x40
};


struct GameFlagsBlock {
    u8 unk000[0xd8e];
    u8 mapType;         // 0xd8e
};

extern "C" {

extern PopupMessage g_lmapPopupMessages[8];

// Opens the popup for the message row and marks it as shown.
static void showPopup(const PopupMessage* message, s32 speakerId)
{
    PopupStateA* popup = g_popupState;
    popup->messageData = message->data;
    popup->message = message->text;
    popup->speakerId = speakerId;
    popup = g_popupState;
    popup->timer = 0;
    popup->state = 5;
}

// Shows the next progress hint once the step counter passes each threshold.
void FUN_00295434(void)
{
    if (g_popupState->state != 0) return;
    if (g_gameState.mapId != 0x1c && g_gameState.mapId != 0x1d && g_gameState.mapId != 0x1e && g_gameState.mapId != 0x1f) {
        s32 steps = g_gameState.modeCounter - 1;
        g_gameState.modeCounter = steps;
        if (steps <= 0) steps = 0;
        g_gameState.modeCounter = steps;
        return;
    }

    GameFlagsBlock* block = reinterpret_cast<GameFlagsBlock *>(gameFlagsGetBlock());
    if (!gameFlagIsSet(0x11f6) && g_gameState.modeCounter >= 2) {
        if (gameFlagIsSet(0x4c9)) {
            showPopup(&g_lmapPopupMessages[4], 0xad);
        } else {
            showPopup(&g_lmapPopupMessages[0], 0xbb);
        }
        gameFlagSetValue(0x11f6, 1, 1);
        return;
    }
    if (!gameFlagIsSet(0x11f4) && g_gameState.modeCounter >= 4) {
        if (block->mapType == 12) {
            if (gameFlagIsSet(0x4c9)) {
                showPopup(&g_lmapPopupMessages[6], 0xad);
            } else {
                showPopup(&g_lmapPopupMessages[2], 0xbb);
            }
            gameFlagSetValue(0x11f4, 1, 1);
            return;
        }
        gameFlagSetValue(0x11f4, 1, 1);
    }
    if (!gameFlagIsSet(0x11f7) && g_gameState.modeCounter >= 6) {
        if (gameFlagIsSet(0x4c9)) {
            showPopup(&g_lmapPopupMessages[5], 0xad);
        } else {
            showPopup(&g_lmapPopupMessages[1], 0xbb);
        }
        gameFlagSetValue(0x11f7, 1, 1);
        return;
    }
    if (!gameFlagIsSet(0x11f8) && g_gameState.mapId == 0x1f) {
        gameFlagIsSet(0x4c9);
        showPopup(&g_lmapPopupMessages[7], 0xad);
        gameFlagSetValue(0x11f8, 1, 1);
        return;
    }
}

} /* extern "C" */
