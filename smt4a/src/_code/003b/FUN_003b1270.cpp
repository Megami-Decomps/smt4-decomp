#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "util/SlotRangeSelect.h"

extern "C" {
u32 scrGetArg(u32 index);
u32 btlResolveEntryChoice(u32 choice);
BtlCombatantEntryA *btlFindFirstEntryMatchingCategoryAndRequiredMask(BtlMainStateA *battle);
void scrSetResult(s32 value);

/* Test a per-index flag among eligible group candidates and the special combatant. */
u32 FUN_003b1270(void)
{
    u32 flag = scrGetArg(0);
    u32 choice = btlResolveEntryChoice(scrGetArg(1));
    if (flag < 21) {
        s32 first, count;
        btlGetEntryChoiceRange(choice, &first, &count);
        for (s32 index = first; index < first + count; ++index) {
            BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
            if ((entry->flags & g_btlCandidateMasks.unavailable) == 0 &&
                (entry->flags & g_btlCandidateMasks.required) != 0 &&
                !(entry->flags & g_btlCandidateMasks.excluded) &&
                entry->data.slotFlags[flag] != 0) {
                scrSetResult(1);
                return 1;
            }
        }
        if (btlGetMainState()->unk4cd1 != 0) {
            BtlCombatantEntryA *entry = btlFindFirstEntryMatchingCategoryAndRequiredMask(btlGetMainState());
            if (entry != NULL && entry->data.slotFlags[flag] != 0) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    scrSetResult(0);
    return 1;
}
}
