/* NON_MATCHING: readable rewrite with g_lmapPopupMessages; retail addresses the step counter as a field 0x4fc past g_gameState and keeps different registers (176 vs 169 rows) */
#include "common.h"

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

extern "C" {

extern PopupState* g_popupState;
extern PopupMessage g_lmapPopupMessages[8];
extern s32 g_gameState;
extern s32 DAT_005f1af8;

GameFlagsBlock* gameFlagsGetBlock(void);
s32 gameFlagIsSet(s32 flag);
void gameFlagSetValue(s32 flag, s32 value, s32 notify, GameFlagsBlock* block);

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
    if (g_gameState != 0x1c && g_gameState != 0x1d && g_gameState != 0x1e && g_gameState != 0x1f) {
        DAT_005f1af8--;
        if (DAT_005f1af8 < 1) DAT_005f1af8 = 0;
        return;
    }

    GameFlagsBlock* block = gameFlagsGetBlock();
    if (!gameFlagIsSet(0x11f6) && DAT_005f1af8 >= 2) {
        if (gameFlagIsSet(0x4c9)) {
            showPopup(&g_lmapPopupMessages[4], 0xad);
        } else {
            showPopup(&g_lmapPopupMessages[0], 0xbb);
        }
        gameFlagSetValue(0x11f6, 1, 1, block);
        return;
    }
    if (!gameFlagIsSet(0x11f4) && DAT_005f1af8 >= 4) {
        if (block->mapType == 12) {
            if (gameFlagIsSet(0x4c9)) {
                showPopup(&g_lmapPopupMessages[6], 0xad);
            } else {
                showPopup(&g_lmapPopupMessages[2], 0xbb);
            }
            gameFlagSetValue(0x11f4, 1, 1, block);
            return;
        }
        gameFlagSetValue(0x11f4, 1, 0, block);
    }
    if (!gameFlagIsSet(0x11f7) && DAT_005f1af8 >= 6) {
        if (gameFlagIsSet(0x4c9)) {
            showPopup(&g_lmapPopupMessages[5], 0xad);
        } else {
            showPopup(&g_lmapPopupMessages[1], 0xbb);
        }
        gameFlagSetValue(0x11f7, 1, 1, block);
        return;
    }
    if (!gameFlagIsSet(0x11f8) && g_gameState == 0x1f) {
        gameFlagIsSet(0x4c9);
        showPopup(&g_lmapPopupMessages[7], 0xad);
        gameFlagSetValue(0x11f8, 1, 1, block);
        return;
    }
}

} /* extern "C" */
