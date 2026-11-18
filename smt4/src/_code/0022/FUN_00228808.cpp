/* NON_MATCHING: only the editor-mask test differs: retail masks the high word in r2 and moves it into r1 (`and r2, r2, #1; movs r1, r2`), the build does both in r1. */
#include "battle/BtlMainAccess.h"
#include "shard/W4_W4Match2_BtlUnits.h"
#include "battle/BattleBalanceRow.h"
#include "battle/BtlGlobals.h"

extern "C" {
s32 randRange(u32);

/* Roll a unit-dependent chance, increasing it for enemies below forty percent HP. */
u32 FUN_00228808(s32 listedId, u32 unused, s32 mode)
{
    BtlMainState *state = btlGetMainState();
    if (state->editorMask & (1ULL << 32))
        return 1;
    s32 chance = 40;
    BtlEntry *unit = btlMainFindEntryByListedId(state, listedId);
    if (unit != NULL) {
        if (unit->flags & 10) {
            chance = 30;
            if (mode == 1)
                chance = 85;
        } else if (!(unit->flags & 0x20) && (unit->flags & 0x10)) {
            if ((unit->data.values[10] >> 10) == 1)
                return 0;
            if (mode == 1)
                chance = 85;
        }
        if ((unit->flags & 0x10) && unit->data.hp * 100 / unit->data.maxHp <= 40 && chance < 70)
            chance = 70;
        if (unit->flags & 10)
            chance = static_cast<s32>(FUN_0023ea94()->partyMultiplier * static_cast<f32>(chance));
        if (unit->flags & 0x10)
            chance = static_cast<s32>(FUN_0023ea94()->enemyMultiplier * static_cast<f32>(chance));
    }
    return randRange(99) < chance;
}
}
