/* NON_MATCHING: roster category filtering uses different saved registers and condition merging. */
/* Accepts selected eligible roster entries only while their category is below three. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "shard/W5_W5Match7_BattleMask.h"

extern "C" {
u32 scrGetArg(u32 index);
void scrSetResult(u32 result);

u32 FUN_003b892c(void)
{
    u32 id = scrGetArg(0);
    BtlMainStateA *state = (BtlMainStateA *)btlGetMainState();
    for (s32 i = 4; i < 54; ++i) {
        BtlCombatantEntryA *entry = &state->entries[i];
        if ((entry->flags & g_battleMaskPresets.eligibility.active) != 0 &&
            (entry->flags & g_battleMaskPresets.eligibility.excluded) == 0 &&
            (entry->flags & g_battleMaskPresets.eligibility.required) != 0 &&
            entry->selection.marked != 0 && entry->id == id) {
            if (state->roster[i].classification.category >= 3) {
                scrSetResult(0);
                return 0;
            }
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(1);
    return 1;
}
}
