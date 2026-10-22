#include "shard/W5_W5Match7_BattleMask.h"

extern "C" {

void FUN_004c571c(s32 id, s32 arg1, s32 arg2, s32 arg3);

/* Runs FUN_004c571c(id, 24, 1, 0) on every battle entry whose mask passes the eligibility presets. */
u32 FUN_003b8c60(void)
{
    BattleMaskState *state = btlGetMainState();
    s32 i;

    for (i = 0; i < 109; i++) {
        BattleMaskEntry *entry = &state->entryView.entries[i];

        if (entry != NULL && (entry->mask & g_battleMaskPresets.eligibility.active) != 0
            && (entry->mask & g_battleMaskPresets.eligibility.excluded) == 0
            && (g_battleMaskPresets.eligibility.required & entry->mask) == 0
            && (entry->mask & g_battleMaskPresets.eligibility.unk10) == 0) {
            FUN_004c571c(entry->id, 24, 1, 0);
        }
    }
    return 1;
}

} /* extern "C" */
