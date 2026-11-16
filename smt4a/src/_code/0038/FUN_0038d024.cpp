#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "util/SlotRangeSelect.h"

extern "C" {
s32 scrGetArg(s32 argument);
s32 btlResolveEntryChoice(s32 choice);
BtlCombatantEntryA *btlFindFirstEntryMatchingCategoryAndRequiredMask(BtlMainStateA *battle);
void scrSetResult(s32 result);

// Query the selected group's encoded affinity class, including the active special combatant.
u32 FUN_0038d024()
{
    u32 affinity = scrGetArg(0);
    s32 group = btlResolveEntryChoice(scrGetArg(1));
    if (affinity < 21) {
        s32 first, count;
        btlGetEntryChoiceRange(group, &first, &count);
        for (s32 index = first; index < first + count; ++index) {
            BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
            if (!(entry->flags & g_btlCandidateMasks.unavailable) &&
                (entry->flags & g_btlCandidateMasks.required) &&
                !(entry->flags & g_btlCandidateMasks.excluded) &&
                entry->encodedStats.values[affinity] >> 10 == 5) {
                scrSetResult(1);
                return 1;
            }
        }
        if (btlGetMainState()->unk4cd1) {
            BtlCombatantEntryA *entry = btlFindFirstEntryMatchingCategoryAndRequiredMask(btlGetMainState());
            if (entry && entry->encodedStats.values[affinity] >> 10 == 5) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    scrSetResult(0);
    return 1;
}
}
