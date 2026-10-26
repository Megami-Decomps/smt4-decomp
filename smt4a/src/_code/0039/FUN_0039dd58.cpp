#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

typedef struct StatusFlags {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u16 bits;
} StatusFlags;

typedef struct BattleUnit {
    /* 0x000 */ u8 unk000[0x100];
    /* 0x100 */ StatusFlags status;
} BattleUnit;

u32 scrGetArg(u32 index);
BattleUnit *FUN_001568f8(void *state, u32 unit);
s32 scrSetResult(s32 value);

/* Script command: tests bit `arg1` of the status flags of battle unit `arg0`. */
u32 FUN_0039dd58(void)
{
    u32 unit = scrGetArg(0);
    u32 bit = scrGetArg(1);
    BattleUnit *target = FUN_001568f8(static_cast<void *>(btlGetMainState()), unit);

    u32 mask = 1 << (bit & 0xFF);

    scrSetResult((target->status.bits & mask) != 0);
    return 1;
}

} /* extern "C" */
