/* NON_MATCHING: 64-bit mask tests read the flags in the expression (row count now equals retail); only the register assignment (retail keeps the state in r1 and the flags in r0/r2, mask words in r3/r8) and the help-call stack argument scheduling differ. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"

struct BattleHelpMaskView {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u64 first;
    /* 0x28 */ u64 second;
};
struct BattleHelpStateView {
    /* 0x0000 */ u8 unk0000[0x2268];
    /* 0x2268 */ u32 unk2268;
};

extern "C" {
extern BattleHelpMaskView g_btlHelp;
u32 FUN_00200a68(u32 first, u32 second, u32 value, u32 resource,
                 u32 fifth, u32 sixth, s32 seventh, u32 eighth);

u32 FUN_004c8e30(u32 first, u32 second, u32 third)
{
    BtlMainStateA *state = btlGetMainState();
    if ((g_btlHelp.first & state->stateFlags64.bits) || (g_btlHelp.second & state->stateFlags64.bits)) {
        return 0;
    }
    const BattleHelpStateView *work = (const BattleHelpStateView *)state;
    return FUN_00200a68(0, 0, first, work->unk2268, 0, third, -1, second);
}
}
