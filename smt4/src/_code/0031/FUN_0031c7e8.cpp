#include "battle/BtlMainAccess.h"
#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {

typedef struct BattleUnit {
    /* 0x000 */ u32 flags;
    /* 0x004 */ u8 unk004[0x6A];
    /* 0x06E */ u8 unk06E[4];
    /* 0x072 */ s16 stats[12];
    /* 0x08A */ u8 unk08A[0x44];
    /* 0x0CE */ u16 id;
    /* 0x0D0 */ u8 unk0D0[0x1B8];
} BattleUnit;

typedef struct BattleState {
    /* 0x0000 */ u8 unk0000[0x1FC0];
    /* 0x1FC0 */ BattleUnit *units;
} BattleState;

s32 scrGetArg(s32 index);

/* Script command: sets the result to 1 when the live, non-excluded unit with id `arg0` has a positive stat (arg 1: 0 -> 7, 1 -> 10, 2 -> 11). */
u32 FUN_0031c7e8(void)
{
    u32 id = scrGetArg(0);
    s32 arg = scrGetArg(1);
    s32 stat = 0;
    s32 i;

    if (arg == 0) {
        stat = 7;
    } else if (arg == 1) {
        stat = 10;
    } else if (arg == 2) {
        stat = 11;
    }
    for (i = 0; i < 109; i++) {
        BattleUnit *unit = &reinterpret_cast<BattleState *>(btlGetMainState())->units[i];

        if ((unit->flags & 0x10) != 0 && (unit->flags & 1) != 0 && (unit->flags & 0x40) == 0 && unit->id == id && unit->stats[stat] >= 1) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
