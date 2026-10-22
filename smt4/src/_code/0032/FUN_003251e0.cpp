/* NON_MATCHING: battle flags store uses r0/r1 instead of retail r1/r2. */
#include "common.h"

struct BattleState {
    /* 0x0000 */ u8 unk00[0x44a0];
    /* 0x44a0 */ u32 flags;
};
extern "C" {
void FUN_00242914(u32 handle, s32 enabled);
BattleState *btlGetMainState();
/* Enables the battle feature and records its active flag. */
extern u32 g_btlUiBlock;
s32 FUN_003251e0(void)
{
    FUN_00242914(g_btlUiBlock, 1);
    btlGetMainState()->flags |= 0x20000000;
    return 1;
}
}
