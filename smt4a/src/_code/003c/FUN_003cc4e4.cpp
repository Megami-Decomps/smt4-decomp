/* NON_MATCHING: retail 61 vs built 60 rows; paired eligibility-mask loads and selected-holder branch layout differ. */
#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "shard/W5_W5Match7_BattleMask.h"

extern "C" {
u32 scrGetArg(u32);
void targetStartIndexWithFlag2(u32, u32);

u32 FUN_003cc4e4(void)
{
    u32 id = scrGetArg(0);
    u32 argument = scrGetArg(1);
    BtlMainStateA *state = btlGetMainState();
    for (s32 index = 4; index < 54; ++index) {
        BtlCombatantEntryA *entry = &state->entries[index];
        u64 flags = entry->flags;
        if ((flags & g_battleMaskPresets.eligibility.active) != 0 &&
            (flags & g_battleMaskPresets.eligibility.excluded) == 0 &&
            (flags & g_battleMaskPresets.eligibility.required) != 0 &&
            entry->selection.marked != 0 && entry->id == id) {
            targetStartIndexWithFlag2(state->roster[index].script.holder, argument);
            break;
        }
    }
    return 1;
}
}
