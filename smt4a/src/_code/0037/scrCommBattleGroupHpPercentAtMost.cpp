/* NON_MATCHING: the initial range-end calculation and the exclusion-mask test use different registers. */
#include "battle/BattleHelpers.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"
#include "util/SlotRangeSelect.h"

extern "C" {
BtlCombatantEntryA *btlFindFirstEntryMatchingCategoryAndRequiredMask(BtlMainStateA *state);

/* Tests whether the selected group's combined HP percentage is at most the script threshold. */
u32 scrCommBattleGroupHpPercentAtMost()
{
    s32 threshold = scrGetArg(0);
    s32 kind = btlResolveEntryChoice(scrGetArg(1));
    HpSums sums;

    sums.maximum = 0;
    sums.current = 0;
    struct {
        s32 count;
        s32 entries[8];
    } range;
    btlGetEntryChoiceRange(kind, range.entries, &range.count);
    s32 first = range.entries[0];
    for (s32 index = first; index < range.entries[0] + range.count; ++index) {
        const BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        if ((g_btlCandidateMasks.unavailable & entry->flags) == 0 &&
            (g_btlCandidateMasks.required & entry->flags) != 0 &&
            (g_btlCandidateMasks.excluded & entry->flags) == 0) {
            sums.maximum += entry->data.maxHp;
            sums.current += entry->data.hp;
        }
    }
    if (btlGetMainState()->unk4cd1) {
        const BtlCombatantEntryA *entry = btlFindFirstEntryMatchingCategoryAndRequiredMask(btlGetMainState());
        if (entry != NULL) {
            sums.maximum += entry->data.maxHp;
            sums.current += entry->data.hp;
        }
    }
    scrSetResult(sums.current * 100 / sums.maximum <= threshold);
    return 1;
}
} /* extern "C" */
