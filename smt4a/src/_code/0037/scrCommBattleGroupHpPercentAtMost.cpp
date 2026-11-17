/* NON_MATCHING: the range record (count + entries) gives retail's 40-byte frame and loads; remaining: the exclusion-mask AND registers and the hp/maxHp totals swap r5/r6 (retail loads the pair with ldm in the special-entry tail). */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "battle/BtlMainAccess.h"
#include "util/SlotRangeSelect.h"

extern "C" {
s32 scrGetArg(s32 index);
void scrSetResult(s32 result);
s32 btlResolveEntryChoice(s32 kind);
BtlCombatantEntryA *btlFindFirstEntryMatchingCategoryAndRequiredMask(BtlMainStateA *state);

u32 scrCommBattleGroupHpPercentAtMost()
{
    s32 threshold = scrGetArg(0);
    s32 kind = btlResolveEntryChoice(scrGetArg(1));
    s32 totalHp = 0;
    s32 totalMaxHp = 0;
    struct {
        s32 count;
        s32 entries[8];
    } range;
    btlGetEntryChoiceRange(kind, range.entries, &range.count);
    s32 first = range.entries[0];
    for (s32 index = first; index < range.count + range.entries[0]; ++index) {
        const BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        if ((entry->flags & g_btlCandidateMasks.unavailable) == 0 &&
            (g_btlCandidateMasks.required & entry->flags) != 0 &&
            (entry->flags & g_btlCandidateMasks.excluded) == 0) {
            s32 hp = entry->data.hp;
            s32 maxHp = entry->data.maxHp;
            totalHp += hp;
            totalMaxHp += maxHp;
        }
    }
    if (btlGetMainState()->unk4cd1) {
        const BtlCombatantEntryA *entry = btlFindFirstEntryMatchingCategoryAndRequiredMask(btlGetMainState());
        if (entry != NULL) {
            s32 hp = entry->data.hp;
            s32 maxHp = entry->data.maxHp;
            totalHp += hp;
            totalMaxHp += maxHp;
        }
    }
    scrSetResult(totalHp * 100 / totalMaxHp <= threshold);
    return 1;
}
}
