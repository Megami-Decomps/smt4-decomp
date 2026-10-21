/* NON_MATCHING: retail conditional instruction or constructor initialization ordering differs. */
#include "common.h"

struct BattleGameState {
    /* 0x0000 */ u8 unk00[0x44a4];
    /* 0x44a4 */ u32 flags;
};
extern "C" {
BattleGameState *btlGetMainState();
/* Marks the battle command as active and returns script success. */
s32 FUN_00312b9c()
{
    btlGetMainState()->flags |= 1;
    return 1;
}
}
