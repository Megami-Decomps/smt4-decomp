#include "common.h"

extern "C" {

typedef struct BtlState {
    /* 0x0000 */ u8 unk0000[0x4CC8];
    /* 0x4CC8 */ u32 flags;
} BtlState;

extern BtlState *btlGetMainState(void);
extern u32 scrGetArg(u32 index);
extern void scrSetResult(s32 value);

/* Script command: pushes whether bit <arg> of the battle state's flag word is set; returns 1. */
s32 scrCheckBattleStateFlag(void)
{
    u32 bit = scrGetArg(0);

    scrSetResult((btlGetMainState()->flags & (1 << bit)) != 0);
    return 1;
}

} /* extern "C" */
