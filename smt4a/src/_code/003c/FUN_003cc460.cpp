/* NON_MATCHING: one load form: retail loads the excluded mask pair with ldm {r3, ip} (after add r3, r6, #24); the build uses two ldr into different registers. */
#include "battle/BtlMainAccess.h"
#include "shard/W5_W5Match7_BattleMask.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {

void FUN_004c3db4(BtlCombatantEntryA *entry);

/* Runs FUN_004c3db4 for every battle entry that is eligible, not excluded and has the required mask bits. */
u32 FUN_003cc460(void)
{
    BtlMainStateA *battle = btlGetMainState();

    for (s32 i = 0; i < 109; i++) {
        BtlCombatantEntryA *entry = &battle->entries[i];

        if ((g_battleMaskPresets.eligibility.active & entry->flags) != 0 &&
            (g_battleMaskPresets.eligibility.excluded & entry->flags) == 0 &&
            (entry->flags & g_battleMaskPresets.eligibility.required) != 0) {
            FUN_004c3db4(entry);
        }
    }
    return 1;
}

} /* extern "C" */
