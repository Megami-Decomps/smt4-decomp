/* NON_MATCHING: battle-mask loop retains extra spills and different roster-base arithmetic. */
#include "battle/btlMain.h"
#include "shard/W5_W5Match7_BattleMask.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

extern "C" {
s32 scrGetArg(u32);
void FUN_003f2638(BtlMainStateA *, s32, BattleRosterRecordA *, s32);
}

/* Dispatch the requested command against the first marked eligible unit of the given ID. */
extern "C" u32 FUN_0039e67c(void)
{
    u32 id = scrGetArg(0);
    s16 command = (s16)scrGetArg(1);
    BtlMainStateA *battle = (BtlMainStateA *)btlGetMainState();
    BattleRosterRecordA *target = NULL;
    for (s32 i = 4; i < 54; ++i) {
        const BtlCombatantEntryA *entry = &battle->entries[i];
        if ((entry->flags & g_battleMaskPresets.eligibility.active) != 0 &&
            (entry->flags & g_battleMaskPresets.eligibility.excluded) == 0 &&
            (entry->flags & g_battleMaskPresets.eligibility.required) != 0 &&
            entry->selection.marked != 0 && entry->id == id) {
            target = &battle->roster[i];
            break;
        }
    }
    FUN_003f2638(battle, command, target, 0);
    return 1;
}
