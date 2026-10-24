#include "common.h"

struct BattleStateFlags {
    /* 0x00 */ u8 unk00[0x10c];
    /* 0x10c */ u32 flags;
};

extern "C" {

BattleStateFlags *btlGetMainState(void);
void scrSetResult(s32 result);

/* Script command: reports whether the battle state's flag 0x80000 is clear. */
u32 FUN_0039dc2c(void)
{
    if ((btlGetMainState()->flags & 0x80000) == 0) {
        scrSetResult(1);
    } else {
        scrSetResult(0);
    }
    return 1;
}

} /* extern "C" */
