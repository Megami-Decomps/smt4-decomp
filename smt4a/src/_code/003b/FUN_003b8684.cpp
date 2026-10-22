/* NON_MATCHING: Retail ldr r1, [r7, #32] differs from recovered add r1, r7, #32. */
#include "common.h"

namespace {

struct BattleEntryView {
    u32 unk00;                 // 0x000
    u32 unk04;                 // 0x004
    s16 unk08;                 // 0x008
    u8 unk0A[0x15C];           // 0x00A
    u16 unk166;                // 0x166
    u8 unk168[0x2A0];          // 0x168
};

struct BattleMainStateView {
    u8 unk00[0x1FFC];          // 0x0000
    BattleEntryView* unk1FFC;  // 0x1FFC
};

struct BattleMessageFlagMasksView {
    u8 unk00[0x20];            // 0x00
    u32 unk20;                 // 0x20
    u32 unk24;                 // 0x24
};

}

extern "C" {
extern BattleMessageFlagMasksView g_btlMessageFlagMasks;
u32 scrGetArg(u32 index);
BattleMainStateView* btlGetMainState(void);
s32 scrSetResult(s32 result);

// Report the signed value of the first eligible entry with the requested ID, or -1.
u32 FUN_003b8684(void)
{
    const u32 requestedId = scrGetArg(0);
    s32 result = -1;

    for (s32 index = 0; index < 109; ++index) {
        const BattleEntryView* entry = &btlGetMainState()->unk1FFC[index];
        const u32 maskedFlags =
            (entry->unk00 & g_btlMessageFlagMasks.unk20) |
            (entry->unk04 & g_btlMessageFlagMasks.unk24);

        if (maskedFlags == 0)
            continue;
        if (entry->unk166 != requestedId)
            continue;

        result = entry->unk08;
        break;
    }

    scrSetResult(result);
    return 1;
}
}
