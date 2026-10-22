#include "common.h"

extern "C" {

typedef struct BattleUnit {
    /* 0x000 */ u32 flags;
    /* 0x004 */ u8 unk004[0x1C2];
    /* 0x1C6 */ u16 mask;
    /* 0x1C8 */ u8 unk1c8[0xC0];
} BattleUnit;

typedef struct BattleState {
    /* 0x0000 */ u8 unk0000[0x1FC0];
    /* 0x1FC0 */ BattleUnit *units;
} BattleState;

s32 scrSetResult(s32 value);
BattleState *btlGetMainState(void);
u32 scrGetArg(u32 index);

/* Script command: sets the result to 1 when some live, non-excluded unit has not got bit `arg0` set in its mask. */
u32 scrCommHasUnitWithoutMaskBit(void)
{
    u32 bit = scrGetArg(0);
    s32 i;

    for (i = 0; i < 109; i++) {
        BattleUnit *unit = &btlGetMainState()->units[i];

        if ((unit->flags & 0x10) != 0 && (unit->flags & 1) != 0 && (unit->flags & 0x40) == 0 &&
            (unit->mask & (1 << (bit & 0xFF))) == 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
