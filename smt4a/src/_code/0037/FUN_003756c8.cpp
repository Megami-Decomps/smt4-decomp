/* NON_MATCHING: all sound-selection branches agree; initial battle flags/masks load ordering and flag-id register differ. */
#include "battle/btlMain.h"

extern "C" {
extern BtlMainGlobalsA g_btlMain;
void sysPlaySe(u32 id);
s32 gameFlagIsSet(u32 id);
s32 gameDataFlagTestBit(u32 id);

void FUN_003756c8(s32 alternate)
{
    struct CueMaskView { u8 prefix[0xd0]; u64 mask; };
    typedef char CueMaskOffset[offsetof(CueMaskView, mask) == 0xd0 ? 1 : -1];
    const CueMaskView *cues = reinterpret_cast<const CueMaskView *>(&g_btlMain);
    u64 flags = g_btlMain.state->stateFlags64.bits;
    if ((flags & cues->mask) || (flags & g_btlMain.transition.mask)) {
        if (gameFlagIsSet(0x525)) {
            sysPlaySe(0xe6);
            return;
        }
        if (gameDataFlagTestBit(0x10)) {
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
    if (gameDataFlagTestBit(0x10)) {
        if (gameDataFlagTestBit(0x7f)) {
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
    if (gameDataFlagTestBit(0x7f)) {
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
}
