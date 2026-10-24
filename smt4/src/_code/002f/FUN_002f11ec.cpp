#include "common.h"

struct BattleStateFlags {
    /* 0x00 */ u8 unk00[0xe0];
    /* 0xe0 */ u32 flags;
};

extern "C" {

BattleStateFlags *btlGetMainState(void);
void scrSetResult(s32 result);

/* Script command: reports whether the battle state's flag 0x40000 is clear. */
u32 FUN_002f11ec(void)
{
    if (btlGetMainState()->flags & 0x40000) {
        scrSetResult(0);
    } else {
        scrSetResult(1);
    }
    return 1;
}

} /* extern "C" */
