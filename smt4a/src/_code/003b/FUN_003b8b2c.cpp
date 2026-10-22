/* NON_MATCHING: the hoisted preset masks and the mask tests land in different registers (retail
 * spills downed/required high words first and tests through r9) */
#include "shard/W5_W5Match7_BattleMask.h"

extern "C" {

s32 scrGetArg(s32 index);

/* Script command: revives every eligible party entry (indices 4-53) whose unit id is argument 0,
 * clearing its downed bits and giving it 1 HP if it has none. */
s32 FUN_003b8b2c(void)
{
    u32 unitId = scrGetArg(0);
    BattleMaskState *state = btlGetMainState();
    u64 active = g_battleMaskPresets.eligibility.active;
    u64 required = g_battleMaskPresets.eligibility.required;
    u64 excluded = g_battleMaskPresets.eligibility.excluded;
    u64 downed = g_battleMaskPresets.eligibility.downed;
    s32 i;

    for (i = 4; i < 54; i++) {
        BattleMaskEntry *entry = &state->entryView.entries[i];
        if ((entry->mask & active) && !(entry->mask & excluded) && (entry->mask & required) &&
            entry->unitId == unitId) {
            entry->mask &= ~downed;
            if (entry->hp == 0) {
                entry->hp = 1;
            }
        }
    }
    return 1;
}

} /* extern "C" */
