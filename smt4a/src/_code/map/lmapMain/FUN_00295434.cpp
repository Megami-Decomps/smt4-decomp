/* NON_MATCHING: the step counter is now read/written as g_gameState+0x4FC with the one store through DAT_005f1af8 (as retail; the block matches). Remaining: retail takes g_lmapPopupMessages as ONE literal pointing at element 4 (r5, others by sub/add) and spills the flags block to the stack (push {r3..}); the extern array gets a literal at the base. Defining the 8-entry table here (its param is a const char* to rodata text) did not change that. */
#include "common.h"
#include "gamedata/GameFlags.h"
#include "shard/gameFlagsGetBlock.h"

struct PopupMessage {
    char text[0x40];    // message resource name
    s32 param;          // 0x40
};

struct PopupState {
    s32 state;          // 0x00
    s32 arg;            // 0x04
    u8 unk08[0x0c];
    s32 param;          // 0x14
    s32 kind;           // 0x18
    const char* text;   // 0x1c
};

struct GameFlagsBlock {
    u8 unk000[0xd8e];
    u8 mapType;         // 0xd8e
};

/* The game state as this function sees it: the scene number and, at 0x4FC, the step counter
 * (also reached as DAT_005f1af8). */
struct GameStateSteps {
    /* 0x000 */ s32 state;
    /* 0x004 */ u8 unk004[0x4F8];
    /* 0x4FC */ s32 steps;
};

extern "C" {

extern PopupState* g_popupState;
extern PopupMessage g_lmapPopupMessages[8];
extern GameStateSteps g_gameState;
extern s32 DAT_005f1af8;

s32 gameFlagIsSet(s32 flag);


// Opens the popup for the message row and marks it as shown.
static void showPopup(const PopupMessage* message, s32 kind)
{
    PopupState* popup = g_popupState;
    popup->text = message->text;
    popup->param = message->param;
    popup->kind = kind;
    popup = g_popupState;
    popup->arg = 0;
    popup->state = 5;
}

// Shows the next progress hint once the step counter passes each threshold.
void FUN_00295434(void)
{
    if (g_popupState->state != 0) return;
    if (g_gameState.state != 0x1c && g_gameState.state != 0x1d && g_gameState.state != 0x1e && g_gameState.state != 0x1f) {
        s32 steps = g_gameState.steps - 1;
        DAT_005f1af8 = steps;
        if (steps <= 0) steps = 0;
        g_gameState.steps = steps;
        return;
    }

    GameFlagsBlock* block = reinterpret_cast<GameFlagsBlock *>(gameFlagsGetBlock());
    if (!gameFlagIsSet(0x11f6) && g_gameState.steps >= 2) {
        if (gameFlagIsSet(0x4c9)) {
            showPopup(&g_lmapPopupMessages[4], 0xad);
        } else {
            showPopup(&g_lmapPopupMessages[0], 0xbb);
        }
        gameFlagSetValue(0x11f6, 1, 1);
        return;
    }
    if (!gameFlagIsSet(0x11f4) && g_gameState.steps >= 4) {
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
    if (!gameFlagIsSet(0x11f7) && g_gameState.steps >= 6) {
        if (gameFlagIsSet(0x4c9)) {
            showPopup(&g_lmapPopupMessages[5], 0xad);
        } else {
            showPopup(&g_lmapPopupMessages[1], 0xbb);
        }
        gameFlagSetValue(0x11f7, 1, 1);
        return;
    }
    if (!gameFlagIsSet(0x11f8) && g_gameState.state == 0x1f) {
        gameFlagIsSet(0x4c9);
        showPopup(&g_lmapPopupMessages[7], 0xad);
        gameFlagSetValue(0x11f8, 1, 1);
        return;
    }
}

} /* extern "C" */
