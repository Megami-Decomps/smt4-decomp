#include "common.h"

extern "C" {

typedef struct BattleUnit {
    /* 0x000 */ u32 flags;
    /* 0x004 */ u8 unk004[0x6A];
    /* 0x06E */ u8 unk06E[0x60];
    /* 0x0CE */ u16 id;
    /* 0x0D0 */ u8 unk0D0[0xF6];
    /* 0x1C6 */ u16 mask;
    /* 0x1C8 */ u8 unk1C8[0xC0];
} BattleUnit;

typedef struct BattleState {
    /* 0x0000 */ u8 unk0000[0x1FC0];
    /* 0x1FC0 */ BattleUnit *units;
} BattleState;

s32 scrSetResult(s32 value);
BattleState *btlGetMainState(void);
s32 scrGetArg(s32 index);

/* Script command: sets the result to 0 when the live, non-excluded unit with id `arg0` has bit `arg1` clear in its mask; 1 otherwise. */
u32 FUN_00318180(void)
{
    u32 id = scrGetArg(0);
    u32 bit = scrGetArg(1);
    s32 i;

    for (i = 0; i < 109; i++) {
        BattleUnit *unit = &btlGetMainState()->units[i];

        if ((unit->flags & 0x10) != 0 && (unit->flags & 1) != 0 && (unit->flags & 0x40) == 0 && unit->id == id &&
            (unit->mask & (1 << (bit & 0xFF))) == 0) {
            scrSetResult(0);
            return 1;
        }
    }
    scrSetResult(1);
    return 1;
}

} /* extern "C" */
