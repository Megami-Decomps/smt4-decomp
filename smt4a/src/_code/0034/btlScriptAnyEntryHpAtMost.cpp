#include "battle/BtlMainAccess.h"
#include "battle/BattleHelpers.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "util/SlotRangeSelect.h"

extern "C" {
s32 scrGetArg(s32 index);
void scrSetResult(s32 result);
BtlCombatantEntryA *btlFindFirstEntryMatchingCategoryAndRequiredMask(BtlMainStateA *);

static __inline s32 entryHpPercentage(const BtlCombatantEntryA *entry)
{
    s32 hp = entry->hp;
    s32 maximum = entry->maxHp;
    return hp * 100 / maximum;
}

// Report whether any eligible battle entry is at or below the requested HP percentage.
u32 btlScriptAnyEntryHpAtMost(void)
{
    s32 percent = scrGetArg(0);
    u32 choice = scrGetArg(1);
    s32 first, count;
    btlGetEntryChoiceRange(btlResolveEntryChoice(choice), &first, &count);
    for (s32 i = first; i < first + count; ++i) {
        BtlMainStateA *state = btlGetMainState();
        BtlCombatantEntryA *entry = &state->entries[i];
        if (!(g_btlCandidateMasks.unavailable & entry->flags) &&
            (entry->flags & g_btlCandidateMasks.required) &&
            !(g_btlCandidateMasks.excluded & entry->flags) &&
            entryHpPercentage(entry) <= percent) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1) {
        BtlCombatantEntryA *entry = btlFindFirstEntryMatchingCategoryAndRequiredMask(btlGetMainState());
        if (entry && entryHpPercentage(entry) <= percent) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
