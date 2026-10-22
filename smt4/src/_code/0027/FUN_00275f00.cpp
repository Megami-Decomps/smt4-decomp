/* NON_MATCHING: scene branches and tail-call epilogues are ordered differently, with one fewer NOP hint. */
#include "map/mapDepart.h"

extern "C" {
extern GameState g_gameState;
void buttonHelpSetPreset(s32 preset);
s32 gameFlagIsSet(u32 flag);
s32 lmapMainGetFlag(void);

// Select the map button-help preset for the current scene and progression flags.
void FUN_00275f00(void)
{
    if (g_gameState.unk000 != 0x65) {
        if (g_gameState.unk000 < 100) {
            if (g_gameState.unk000 == 0x24) {
                buttonHelpSetPreset(0xd1);
                return;
            }
            if (gameFlagIsSet(0x16)) {
                buttonHelpSetPreset(0x3f);
                return;
            }
            buttonHelpSetPreset(0xd9);
            return;
        }
    } else if (lmapMainGetFlag()) {
        buttonHelpSetPreset(0xde);
        return;
    }
    buttonHelpSetPreset(0xd0);
}
}
