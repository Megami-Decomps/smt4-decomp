#include "battle/BtlMainAccess.h"
#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {

typedef struct BattleUnit {
    /* 0x000 */ u32 flags;
    /* 0x004 */ u8 unk004[0x8C];
    /* 0x090 */ s16 primaryValue;
    /* 0x092 */ u8 unk092[2];
    /* 0x094 */ s16 secondaryValue;
    /* 0x096 */ u8 unk096[0x1F2];
} BattleUnit;

typedef struct BattleState {
    /* 0x0000 */ u8 unk0000[0x1FC0];
    /* 0x1FC0 */ BattleUnit *units;
} BattleState;


/* Script command: sets the result to 1 when some live, non-excluded unit has a positive primary or secondary value. */
u32 FUN_00327960(void)
{
    for (s32 i = 0; i < 109; i++) {
        BattleUnit *unit = &reinterpret_cast<BattleState *>(btlGetMainState())->units[i];

        if ((unit->flags & 0x10) != 0 && (unit->flags & 1) != 0 && (unit->flags & 0x40) == 0 &&
            (unit->primaryValue > 0 || unit->secondaryValue > 0)) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
