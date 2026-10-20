#include "common.h"

extern "C" {

typedef struct BattleUnit {
    /* 0x00 */ u8 unk00[0xFA];
    /* 0xFA */ u16 flags;
} BattleUnit;

u32 scrGetArg(u32 index);
void *btlGetMainState(void);
BattleUnit *FUN_0027da30(void *state, u32 unit);
s32 scrSetResult(s32 value);

/* Script command: tests bit `arg1` of the flags of battle unit `arg0`. */
u32 FUN_0030b694(void)
{
    u32 unit = scrGetArg(0);
    u32 bit = scrGetArg(1);
    BattleUnit *target = FUN_0027da30(btlGetMainState(), unit);

    u32 mask = 1 << (bit & 0xFF);

    scrSetResult((target->flags & mask) != 0);
    return 1;
}

} /* extern "C" */
