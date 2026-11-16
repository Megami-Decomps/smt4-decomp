#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "battle/BtlMainAccess.h"
#include "util/SlotRangeSelect.h"

extern "C" {
s32 scrGetArg(s32 index);
s32 btlResolveEntryChoice(s32 choice);
BtlCombatantEntryA *btlFindFirstEntryMatchingCategoryAndRequiredMask(BtlMainStateA *state);
void scrSetResult(s32 value);

// Report whether an eligible selected combatant has a positive pending counter.
u32 FUN_003c1ae4()
{
    // The counter cannot enter the existing +0x0A union without raising its alignment.
    struct CounterView { u8 prefix[0xCC]; s32 pending; };
    s32 first, count;
    btlGetEntryChoiceRange(btlResolveEntryChoice(scrGetArg(0)), &first, &count);
    for (s32 index = first; index < first + count; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        if (!(entry->flags & g_btlCandidateMasks.unavailable) &&
            (entry->flags & g_btlCandidateMasks.required) && !(entry->flags & g_btlCandidateMasks.excluded) &&
            reinterpret_cast<CounterView *>(entry)->pending > 0) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1) {
        BtlCombatantEntryA *entry = btlFindFirstEntryMatchingCategoryAndRequiredMask(btlGetMainState());
        if (entry != NULL && reinterpret_cast<CounterView *>(entry)->pending > 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
