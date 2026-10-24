#include "common.h"

struct BattleStateHalf {
    /* 0x00 */ u8 unk00[0x2006];
    /* 0x2006 */ s16 value;
};

extern "C" {

BattleStateHalf *btlGetMainState(void);
void scrSetResult(s32 result);

/* Script command: reports the battle state's halfword at 0x2006. */
u32 FUN_0039d860(void)
{
    scrSetResult(btlGetMainState()->value);
    return 1;
}

} /* extern "C" */
