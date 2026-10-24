/* NON_MATCHING: one load form: retail loads the excluded mask pair with ldm {r3, ip} (after add r3, r6, #24); the build uses two ldr into different registers. */
#include "shard/W5_W5Match7_BattleMask.h"

extern "C" {

void FUN_004c3db4(BattleMaskEntry *entry);

/* Runs FUN_004c3db4 for every battle entry that is eligible, not excluded and has the required mask bits. */
u32 FUN_003cc460(void)
{
    BattleMaskState *battle = btlGetMainState();

    for (s32 i = 0; i < 109; i++) {
        BattleMaskEntry *entry = &battle->entryView.entries[i];

        if ((g_battleMaskPresets.eligibility.active & entry->mask) != 0 &&
            (g_battleMaskPresets.eligibility.excluded & entry->mask) == 0 &&
            (entry->mask & g_battleMaskPresets.eligibility.required) != 0) {
            FUN_004c3db4(entry);
        }
    }
    return 1;
}

} /* extern "C" */
