#include "common.h"

extern "C" {

typedef struct BattleUnit {
    /* 0x000 */ u32 flags;
    /* 0x004 */ u8 unk004[0xCA];
    /* 0x0CE */ u16 id;
    /* 0x0D0 */ u8 unk0D0[0xFC];
    /* 0x1CC */ u16 count;
    /* 0x1CE */ u8 unk1CE[0x24];
    /* 0x1F2 */ u16 slots[8];
    /* 0x202 */ u8 unk202[0x86];
} BattleUnit;

typedef struct BattleState {
    /* 0x0000 */ u8 unk0000[0x1FC0];
    /* 0x1FC0 */ BattleUnit *units;
} BattleState;

s32 scrSetResult(s32 value);
BattleState *btlGetMainState(void);
s32 scrGetArg(s32 index);

/* Script command: sets the result to 1 when the live, non-excluded unit with id `arg0` has a count of at least `arg1`. */
u32 FUN_002ff08c(void)
{
    u32 id = scrGetArg(0);
    s32 arg = scrGetArg(1);
    s32 i;

    for (i = 0; i < 109; i++) {
        BattleUnit *unit = &btlGetMainState()->units[i];

        if ((unit->flags & 0x10) != 0 && (unit->flags & 1) != 0 && (unit->flags & 0x40) == 0 && unit->id == id && arg <= unit->count) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
