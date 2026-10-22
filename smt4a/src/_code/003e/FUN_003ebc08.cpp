/* NON_MATCHING: Retail ldr r3, [pc, #140] differs from recovered ldr r0, [pc, #132]. */
#include "common.h"

struct BattleStateLocalView {
    u8 unk00[0x4C70];
    s16 unk4C70; // 0x4C70
    u16 unk4C72; // 0x4C72
    s16 unk4C74; // 0x4C74
    u16 unk4C76; // 0x4C76
};

struct BattleUiLocalView {
    u8 unk00[0x2450];
    s16 unk2450; // 0x2450
    s16 unk2452; // 0x2452
};

extern "C" {
extern BattleUiLocalView* g_btlUiBlock;
void FUN_004a9a50(BattleUiLocalView* ui, s8 firstDelta, s8 secondDelta);
void FUN_004aaa80(BattleUiLocalView* ui, s8 firstDelta, s8 secondDelta);

// Dispatch wrapped UI deltas by mode, then snapshot the current state pair.
void FUN_003ebc08(BattleStateLocalView* state, s32 mode)
{
    s16 first = state->unk4C70;
    s16 difference = static_cast<s16>(state->unk4C72 - first);
    BattleUiLocalView* ui = g_btlUiBlock;

    if (difference > 0) {
        first = static_cast<s16>(first + difference);
    }

    s16 firstDelta = static_cast<s16>(first - ui->unk2450);
    s16 secondDelta = static_cast<s16>(difference - ui->unk2452);

    switch (mode) {
    case 0:
        FUN_004a9a50(ui, static_cast<s8>(firstDelta),
                    static_cast<s8>(secondDelta));
        break;
    case 1:
        FUN_004aaa80(ui, static_cast<s8>(firstDelta),
                    static_cast<s8>(secondDelta));
        break;
    }

    state->unk4C74 = state->unk4C70;
    state->unk4C76 = state->unk4C72;
}
}
