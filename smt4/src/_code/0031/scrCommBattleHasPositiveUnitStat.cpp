#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

typedef struct BattleUnit {
    /* 0x000 */ u32 flags;
    /* 0x004 */ u8 unk004[0x6E];
    /* 0x072 */ s16 stats[12];
    /* 0x08A */ u8 unk08A[0x1FE];
} BattleUnit;

typedef struct BattleState {
    /* 0x0000 */ u8 unk0000[0x1FC0];
    /* 0x1FC0 */ BattleUnit *units;
} BattleState;

s32 scrSetResult(s32 value);
s32 scrGetArg(u32 index);

/* Script command: sets the result to 1 when some live, non-excluded unit has a positive stat (arg 0: 7, 1: 10, 2: 11). */
u32 scrCommBattleHasPositiveUnitStat(void)
{
    s32 arg = scrGetArg(0);
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

        if ((unit->flags & 0x10) != 0 && (unit->flags & 1) != 0 && (unit->flags & 0x40) == 0 && unit->stats[stat] >= 1) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
