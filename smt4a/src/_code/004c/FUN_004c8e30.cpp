/* NON_MATCHING: mask-word scheduling and the help-submission stack arguments use different registers. */
#include "battle/btlMain.h"

struct BattleHelpMaskView {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u32 firstLow;
    /* 0x24 */ u32 firstHigh;
    /* 0x28 */ u32 secondLow;
    /* 0x2c */ u32 secondHigh;
};
struct BattleHelpStateView {
    /* 0x0000 */ u8 unk0000[0x2268];
    /* 0x2268 */ u32 unk2268;
};

extern "C" {
extern BattleHelpMaskView g_btlHelp;
BtlMainStateA *btlGetMainState();
u32 FUN_00200a68(u32 first, u32 second, u32 value, u32 resource,
                 u32 fifth, u32 sixth, s32 seventh, u32 eighth);

u32 FUN_004c8e30(u32 first, u32 second, u32 third)
{
    BtlMainStateA *state = btlGetMainState();
    u32 low = state->stateFlags.words[0];
    u32 high = state->stateFlags.words[1];
    if (((low & g_btlHelp.firstLow) | (high & g_btlHelp.firstHigh)) ||
        ((low & g_btlHelp.secondLow) | (high & g_btlHelp.secondHigh))) {
        return 0;
    }
    const BattleHelpStateView *work = (const BattleHelpStateView *)state;
    return FUN_00200a68(0, 0, first, work->unk2268, 0, third, -1, second);
}
}
