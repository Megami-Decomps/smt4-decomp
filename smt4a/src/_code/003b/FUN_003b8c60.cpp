#include "battle/BtlMainAccess.h"
#include "shard/W5_W5Match7_BattleMask.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {

void btlAdjustPropertyClamped(s32 id, s32 arg1, s32 arg2, s32 arg3);

/* Runs btlAdjustPropertyClamped(id, 24, 1, 0) on every battle entry whose mask passes the eligibility presets. */
u32 FUN_003b8c60(void)
{
    BtlMainStateA *state = btlGetMainState();
    s32 i;

    for (i = 0; i < 109; i++) {
        BtlCombatantEntryA *entry = &state->entries[i];

        if (entry != NULL && (entry->flags & g_battleMaskPresets.eligibility.active) != 0
            && (entry->flags & g_battleMaskPresets.eligibility.excluded) == 0
            && (g_battleMaskPresets.eligibility.required & entry->flags) == 0
            && (entry->flags & g_battleMaskPresets.eligibility.unk10) == 0) {
            btlAdjustPropertyClamped(entry->unitIndex, 24, 1, 0);
        }
    }
    return 1;
}

} /* extern "C" */
