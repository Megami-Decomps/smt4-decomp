#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

/* The battle main state: only the turn counter at 0x1FC4 is named. */
struct BattleMainView {
    /* 0x0000 */ u8 unk0000[0x1FC4];
    /* 0x1FC4 */ s16 count;
};

u32 FUN_002bfdc4(void);
void FUN_002bfc24(s32 a, u32 id, u32 value, s32 b, f32 x, f32 y);

/* Plays one of two sounds, chosen by whether the battle count is at most 1. */
void FUN_00394b0c(void)
{
    if (reinterpret_cast<BattleMainView *>(btlGetMainState())->count <= 1) {
        FUN_002bfc24(1, 0x7A576, FUN_002bfdc4(), 4, 0.707f, 0.707f);
    } else {
        FUN_002bfc24(1, 0x7A5D0, FUN_002bfdc4(), 4, 0.707f, 0.707f);
    }
}

} /* extern "C" */
