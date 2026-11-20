#include "battle/btlMain.h"
#include "shard/W6_W6Match8_StatGrowth.h"
#include "battle/BtlGlobals.h"

extern "C" {
void sysPlaySe(u32 id);
s32 gameFlagIsSet(u32 id);

/* Play the menu confirmation cue for the current battle state. */
void btlPlayMenuConfirmSe(s32 alternate)
{
    const BtlMainStateA *battle = g_btlMain.state;
    if ((battle->stateFlags64.bits & g_btlMain.partyTarget.mask) ||
        (battle->stateFlags64.bits & g_btlMain.transition.mask)) {
        if (gameFlagIsSet(0x525)) {
            sysPlaySe(0xe6);
            return;
        }
        if ((s32)gameDataFlagTestBit(0x10)) {
            sysPlaySe(0xb5);
            return;
        }
        sysPlaySe(0xb6);
        return;
    }
    if (gameFlagIsSet(0x525)) {
        sysPlaySe(0xe7);
        return;
    }
    if ((s32)gameDataFlagTestBit(0x10)) {
        if ((s32)gameDataFlagTestBit(0x7f)) {
            if (alternate) {
                sysPlaySe(0x36);
                return;
            }
            sysPlaySe(0x37);
            return;
        }
        if (alternate) {
            sysPlaySe(0xc8);
            return;
        }
        sysPlaySe(0xae);
        return;
    }
    if ((s32)gameDataFlagTestBit(0x7f)) {
        if (alternate) {
            sysPlaySe(0x38);
            return;
        }
        sysPlaySe(0x39);
        return;
    }
    if (alternate) {
        sysPlaySe(0xc9);
        return;
    }
    sysPlaySe(0xaf);
}
} /* extern "C" */
