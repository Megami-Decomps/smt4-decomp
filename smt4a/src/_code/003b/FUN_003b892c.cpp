/* NON_MATCHING: retail hoists only the first eligibility mask (active) out of the loop and reloads excluded/required through the table address in r6, keeping the id in r9, and tests the marked byte in its own ldrb/cmp/beq (BtlEntryA::marked as s8 gives that, but regresses five other units); the build hoists all three masks and spills the id. */
/* Accepts selected eligible roster entries only while their category is below three. */
#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "shard/W5_W5Match7_BattleMask.h"
#include "script/ScriptArgs.h"

extern "C" {

u32 FUN_003b892c(void)
{
    u32 id = scrGetArg(0);
    BtlMainStateA *state = btlGetMainState();
    for (s32 i = 4; i < 54; ++i) {
        BtlCombatantEntryA *entry = &state->entries[i];
        if ((entry->flags & g_battleMaskPresets.eligibility.active) == 0 ||
            (entry->flags & g_battleMaskPresets.eligibility.excluded) != 0 ||
            (entry->flags & g_battleMaskPresets.eligibility.required) == 0 ||
            entry->data.marked == 0 || entry->data.id != id) {
            continue;
        }
        s16 category = state->roster[i].classification.category;
        if (category == 0 || category == 1 || category == 2) {
            scrSetResult(1);
            return 1;
        }
        scrSetResult(0);
        return 0;
    }
    scrSetResult(1);
    return 1;
}
}
