#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {

u32 scrGetArg(u32 index);
void scrSetResult(s32 result);
s32 FUN_003248e4(BtlCombatantEntryA *entry);

// Script command: result 1 when a combatant with flags of the unavailable and required masks, none of the excluded mask, the argument's
// ID and passing FUN_003248e4 exists.
u32 scrCommBtlHasCandidateWithId(void)
{
    u32 id = scrGetArg(0);
    for (s32 i = 0; i < 109; i++) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if ((entry->flags & g_btlCandidateMasks.unavailable) != 0 && (entry->flags & g_btlCandidateMasks.required) != 0 &&
            (entry->flags & g_btlCandidateMasks.excluded) == 0 && entry->data.id == id && FUN_003248e4(entry) != 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
