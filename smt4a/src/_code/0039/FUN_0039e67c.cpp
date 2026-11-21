/* NON_MATCHING: the masks are read through a local pointer (only the active mask hoisted, the others reloaded in the loop as in retail); remaining: battle-mask loop spills and roster-base arithmetic differ. */
#include "battle/BtlMainAccess.h"
#include "shard/W5_W5Match7_BattleMask.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "script/ScriptArgs.h"

extern "C" {
void FUN_003f2638(BtlMainStateA *, s32, BattleRosterRecordA *, s32);
}

/* Dispatch the requested command against the first marked eligible unit of the given ID. */
extern "C" u32 FUN_0039e67c(void)
{
    u32 id = scrGetArg(0);
    s16 command = (s16)scrGetArg(1);
    BtlMainStateA *battle = btlGetMainState();
    const BattleMaskPresets *masks = &g_battleMaskPresets;
    BattleRosterRecordA *target = NULL;
    for (s32 i = 4; i < 54; ++i) {
        const BtlCombatantEntryA *entry = &battle->entries[i];
        if ((entry->flags & masks->eligibility.active) != 0 &&
            (entry->flags & masks->eligibility.excluded) == 0 &&
            (entry->flags & masks->eligibility.required) != 0 &&
            entry->data.marked != 0 && entry->data.id == id) {
            target = &battle->roster[i];
            break;
        }
    }
    FUN_003f2638(battle, command, target, 0);
    return 1;
}
