#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

typedef struct BattleUnit {
    /* 0x000 */ u32 flags;
    /* 0x004 */ u8 unk004[0x1EE];
    /* 0x1F2 */ u16 slots[8];  /* indexed by script argument; bits 10+ hold a state */
    /* 0x202 */ u8 unk202[0x86];
} BattleUnit;

typedef struct BattleState {
    /* 0x0000 */ u8 unk0000[0x1FC0];
    /* 0x1FC0 */ BattleUnit *units;
} BattleState;

s32 scrSetResult(s32 value);
s32 scrGetArg(u32 index);

/* Script command: sets the result to 1 when some live, non-excluded unit has state 1 in slot `arg0`. */
u32 FUN_002f6f44(void)
{
    s32 slot = scrGetArg(0);
    s32 i;

    for (i = 0; i < 109; i++) {
        BattleUnit *unit = &reinterpret_cast<BattleState *>(btlGetMainState())->units[i];

        if ((unit->flags & 0x10) != 0 && (unit->flags & 1) != 0 && (unit->flags & 0x40) == 0 && unit->slots[slot] >> 10 == 1) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
