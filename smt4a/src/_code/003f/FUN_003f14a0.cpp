/* NON_MATCHING: Retail push {r4, r5, r6, r7, r8, r9, sl} differs from recovered ldr r1, [pc, #120]. */
#include "common.h"

namespace {

struct BattleMaskView {
    u8 unk00[0x70];
    u32 unk70; // 0x70
    u32 unk74; // 0x74
};

struct BattleEntryView {
    u8 unk00[0x50];
    u32 unk50; // 0x50
    u8 unk54[0x14];
    s16 unk68; // 0x68
    u8 unk6A[0x166];
};

struct BattleTargetView {
    u32 unk00; // 0x00
    u32 unk04; // 0x04
    u8 unk08[0x400];
};

struct BattleContextView {
    u8 unk00[0x1ED4];
    BattleEntryView* unk1ED4; // 0x1ED4
    u8 unk1ED8[0x124];
    BattleTargetView* unk1FFC; // 0x1FFC
};

}

extern "C" {
extern BattleMaskView g_btlMain;

// Mark entries whose nonnegative target index selects flags matching the global masks.
void FUN_003f14a0(BattleContextView* context)
{
    const u32 lowMask = g_btlMain.unk70;
    const u32 highMask = g_btlMain.unk74;

    for (s32 index = 0, remaining = 109; remaining != 0; ++index, --remaining) {
        BattleEntryView* entries = context->unk1ED4;
        const s32 targetIndex = entries[index].unk68;
        if (targetIndex >= 0) {
            const BattleTargetView& target = context->unk1FFC[targetIndex];
            if (((target.unk00 & lowMask) | (target.unk04 & highMask)) != 0) {
                entries[index].unk50 |= 0x4000;
            }
        }
    }
}
}
