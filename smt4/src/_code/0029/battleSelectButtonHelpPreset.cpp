#include "shard/W4_Match6_BtlScript.h"
#include "battle/btlMain.h"
#include "battle/BtlMainGlobals.h"

extern "C" {
u8 flagBitIsSet(u32 bit);
bool gameFlagIsSet(u32 bit);
void buttonHelpSetPreset(u32 preset);

// Picks the battle command menu's button-help preset from the battle mask, story flags and selection state.
void battleSelectButtonHelpPreset(s32 selectionEnabled)
{
    BtlMainState *state = g_btlMainState.state;
    if (state->battleMask & 0x1004) {
        if (gameFlagIsSet(0x525)) {
            return buttonHelpSetPreset(0xe4);
        }
        if (flagBitIsSet(0x10)) {
            return buttonHelpSetPreset(0xb3);
        }
        return buttonHelpSetPreset(0xb4);
    }
    if (gameFlagIsSet(0x525)) {
        return buttonHelpSetPreset(0xe5);
    }
    if (flagBitIsSet(0x10)) {
        if (flagBitIsSet(0x7f)) {
            if (selectionEnabled) {
                return buttonHelpSetPreset(0x34);
            }
            return buttonHelpSetPreset(0x35);
        }
        if (selectionEnabled) {
            return buttonHelpSetPreset(0xc6);
        }
        return buttonHelpSetPreset(0xac);
    }
    if (flagBitIsSet(0x7f)) {
        if (selectionEnabled) {
            return buttonHelpSetPreset(0x36);
        }
        return buttonHelpSetPreset(0x37);
    }
    if (selectionEnabled) {
        return buttonHelpSetPreset(0xc7);
    }
    return buttonHelpSetPreset(0xad);
}
}
