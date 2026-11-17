/* NON_MATCHING: the editor-mask test now matches; retail keeps the found unit in r5 (the listedId register) and its flags in r6, armcc swaps them. */
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
        u32 flags = unit->flags;
        if (flags & 10) {
            chance = 30;
            if (mode == 1)
                chance = 85;
        } else if (!(flags & 0x20) && (flags & 0x10)) {
            if ((unit->data.values[10] >> 10) == 1)
                return 0;
            if (mode == 1)
                chance = 85;
        }
        if ((flags & 0x10) && unit->data.hp * 100 / unit->data.maxHp <= 40 && chance < 70)
            chance = 70;
        if (flags & 10)
            chance = static_cast<s32>(FUN_0023ea94()->partyMultiplier * static_cast<f32>(chance));
        if (unit->flags & 0x10)
            chance = static_cast<s32>(FUN_0023ea94()->enemyMultiplier * static_cast<f32>(chance));
    }
    return randRange(99) < chance;
}
}
