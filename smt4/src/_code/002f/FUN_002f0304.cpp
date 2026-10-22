/* NON_MATCHING: Retail mov r6, #1 differs from recovered mov r1, #1. */
#include "common.h"

namespace {

struct BattleEntryView {
    u32 flags;                    // 0x000
    u8 unk004[0x1C2];             // 0x004
    u16 unk1C6;                   // 0x1C6
    u8 unk1C8[0xC0];              // 0x1C8
};

struct BattleMainStateView {
    u8 unk0000[0x1FC0];            // 0x0000
    BattleEntryView* unk1FC0;      // 0x1FC0
};

}

extern "C" {
u32 scrGetArg(u32 index);
s32 scrSetResult(s32 result);
BattleMainStateView* btlGetMainState(void);

// Reports whether any eligible battle entry has the script-selected bit set.
u32 FUN_002f0304(void)
{
    const u32 mask = 1u << scrGetArg(0);

    for (s32 entryIndex = 0; entryIndex < 109; ++entryIndex) {
        const BattleEntryView* entry =
            &btlGetMainState()->unk1FC0[entryIndex];
        const u32 flags = entry->flags;

        if ((flags & 0x10) != 0 &&
            (flags & 0x01) != 0 &&
            (flags & 0x40) == 0 &&
            (entry->unk1C6 & mask) != 0) {
            scrSetResult(1);
            return 1;
        }
    }

    scrSetResult(0);
    return 1;
}
}
