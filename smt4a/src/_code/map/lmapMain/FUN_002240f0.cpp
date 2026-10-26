#include "common.h"
#include "gamedata/GameFlags.h"
#include "map/mapDepart.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "gamedata/GameDataAccess_Smt4a.h"

extern "C" {
extern MapRandomPopupPrefixA *g_popupState;
extern GameStateA g_gameState;


s32 gameFlagIsSet(u32 flag);
s32 randRange(u32 range);

s32 FUN_002d8b58(u32 group, u32 entry);

void FUN_002240f0(void)
{
    if (g_popupState->state != 0 || gameFlagStateIsOne() == 0) {
        return;
    }

    bool suppressPopup = true;
    s32 flagSet = gameFlagIsSet(0x111b);
    s32 *countdown = &g_gameState.randomPopup.countdown;
    if (flagSet == 0) {
        suppressPopup = false;
        g_gameState.randomPopup.countdown = 0;
        gameFlagSetValue(0x111b, 1, 1);
    } else {
        // The retail ADD wraps before the signed comparison.
        if ((s32)((u32)randRange(99) + 1u) <= 30) {
            suppressPopup = false;
        }
    }

    if (g_gameState.randomPopup.countdown > 0) {
        *countdown = g_gameState.randomPopup.countdown - 1;
        return;
    }

    g_gameState.randomPopup.countdown = 5;
    if (!suppressPopup) {
        g_popupState->state = 0x15;
        g_popupState->phase = 0;
        s32 contentValue = FUN_002d8b58(0x16, 0xbb);
        g_popupState->contentValue = contentValue;
    }
}
}
