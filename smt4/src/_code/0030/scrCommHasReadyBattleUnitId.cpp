#include "shard/W4_Match6_BtlEntry.h"

extern "C" {

extern BtlMainState *btlGetMainState(void);
extern u32 scrGetArg(u32 index);
extern s32 btlSlotsHaveReadyUnit(BtlEntry *unit);
extern void scrSetResult(s32 value);

/* Script command: pushes whether an active, visible unit with the id given as argument 0 exists and btlSlotsHaveReadyUnit holds; returns 1. */
u32 scrCommHasReadyBattleUnitId(void)
{
    u32 id = scrGetArg(0);
    s32 i;

    for (i = 0; i < 109; i++) {
        BtlEntry *unit = &btlGetMainState()->entries[i];

        if ((unit->flags & 0x10) != 0 && (unit->flags & 1) != 0 && (unit->flags & 0x40) == 0 && unit->id == id &&
            btlSlotsHaveReadyUnit(unit) != 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
