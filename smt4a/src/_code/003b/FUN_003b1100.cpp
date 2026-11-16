/* NON_MATCHING: only the required- and excluded-mask ANDs: retail ANDs flags & mask (using r7 for the high mask word) and pairs the excluded halves the other way round. */
#include "battle/BtlMainAccess.h"
#include "battle/BattleHelpers.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "util/SlotRangeSelect.h"

/* The shared entry's padding union starts at 0x0a and must not acquire s32 alignment. */
struct BattleCandidateSignedValuesView {
    u8 unk00[0x74];
    s32 values[12];
};

extern "C" {
s32 scrGetArg(s32 argument);
void scrSetResult(s32 result);
BtlCombatantEntryA *btlFindFirstEntryMatchingCategoryAndRequiredMask(BtlMainStateA *battle);

u32 FUN_003b1100(void)
{
    s32 selector = scrGetArg(0);
    s32 valueIndex = 0;
    if (selector == 0)
        valueIndex = 7;
    else if (selector == 1)
        valueIndex = 8;
    else if (selector == 2)
        valueIndex = 10;
    else if (selector == 3)
        valueIndex = 11;
    u32 group = btlResolveEntryChoice(scrGetArg(1));
    s32 first, count;
    btlGetEntryChoiceRange(group, &first, &count);
    for (s32 i = first; i < count + first; ++i) {
        BtlMainStateA *state = btlGetMainState();
        BtlCombatantEntryA *entry = &state->entries[i];
        if (!(g_btlCandidateMasks.unavailable & entry->flags) &&
            (g_btlCandidateMasks.required & entry->flags) &&
            !(g_btlCandidateMasks.excluded & entry->flags) &&
            ((const BattleCandidateSignedValuesView *)entry)->values[valueIndex] <= -1) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1) {
        BtlCombatantEntryA *entry = btlFindFirstEntryMatchingCategoryAndRequiredMask(btlGetMainState());
        if (entry && ((const BattleCandidateSignedValuesView *)entry)->values[valueIndex] <= -1) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
