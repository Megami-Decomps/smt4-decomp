/* NON_MATCHING: retail parameter lifetime, address formation or grouped-store selection differs. */
#include "common.h"

struct BattleState {
    /* 0x0000 */ u8 unk00[0x44a0];
    /* 0x44a0 */ u32 flags;
};
extern "C" {
void FUN_00242914(u32 handle, s32 enabled);
BattleState *btlGetMainState();
/* Enables the battle feature and records its active flag. */
s32 FUN_003251e4(const u32 *handle)
{
    FUN_00242914(*handle, 1);
    btlGetMainState()->flags |= 0x20000000;
    return 1;
}
}
