#include "map/mapDepart.h"

extern "C" {
extern GameState g_gameState;
void buttonHelpSetPreset(s32 preset);
s32 gameFlagIsSet(u32 flag);
s32 lmapMainGetFlag(void);

// Select the map button-help preset for the current scene and progression flags.
void buttonHelpSelectMapPreset(void)
{
    if (g_gameState.unk000 == 0x65) {
        if (lmapMainGetFlag()) {
            buttonHelpSetPreset(0xde);
        } else {
            buttonHelpSetPreset(0xd0);
        }
    } else if (g_gameState.unk000 >= 100) {
        buttonHelpSetPreset(0xd0);
    } else if (g_gameState.unk000 == 0x24) {
        buttonHelpSetPreset(0xd1);
    } else if (gameFlagIsSet(0x16)) {
        buttonHelpSetPreset(0x3f);
    } else {
        buttonHelpSetPreset(0xd9);
    }
}
}
