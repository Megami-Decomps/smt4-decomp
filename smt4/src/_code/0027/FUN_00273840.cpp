/* NON_MATCHING: the signed background-pending load now matches (field is s8); the game-mode preset branches are laid out differently (retail outlines the below-100 arm after the default preset). */
#include "map/mapDepart.h"
extern "C" {
extern GameState g_gameState;
void commonBgReset(void);
void FUN_002757a8(void);
void FUN_00275bc8(void);
void FUN_00289880(void);
void buttonHelpSetPreset(s32 preset);
s32 gameFlagIsSet(u32 flag);
s32 lmapMainGetFlag(void);
s32 NaviMain_IsMapOpen(void);

/* Switch the map help overlay and restore the appropriate navigation preset. */
void FUN_00273840(s32 enabled)
{
    if (enabled) {
        if (!g_gameState.bgResetPending) {
            g_gameState.bgResetPending = 1;
            FUN_00275bc8();
            FUN_00289880();
            buttonHelpSetPreset(0x90);
        }
        return;
    }
    if (g_gameState.bgResetPending) {
        g_gameState.bgResetPending = 0;
        if (gameFlagIsSet(0x16))
            commonBgReset();
        else
            FUN_00289880();
    } else if (!NaviMain_IsMapOpen()) {
        if (g_gameState.unk000 == 101) {
            if (lmapMainGetFlag()) {
                buttonHelpSetPreset(0xDE);
                return;
            }
        } else if (g_gameState.unk000 < 100) {
            if (g_gameState.unk000 == 36) {
                buttonHelpSetPreset(0xD1);
                return;
            }
            if (gameFlagIsSet(0x16))
                buttonHelpSetPreset(0x3F);
            else
                buttonHelpSetPreset(0xD9);
            return;
        }
        buttonHelpSetPreset(0xD0);
        return;
    }
    FUN_002757a8();
}
}
