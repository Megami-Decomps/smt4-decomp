/* NON_MATCHING: required-mask low/high scratch assignment prevents LDM pairing; range layout and HP arithmetic match. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "battle/BtlMainAccess.h"
#include "util/SlotRangeSelect.h"

namespace {
inline s32 hpPercent(s32 hp, s32 maxHp)
{
    return hp * 100 / maxHp;
}
}

extern "C" {
s32 scrGetArg(s32);
void scrSetResult(s32);
s32 btlResolveEntryChoice(s32);
BtlCombatantEntryA* FUN_003eaf20(BtlMainStateA*);

/* Check eligible HP percentages, preserving the special entry's opposite comparison. */
u32 scrAnyEligibleHpPercentThreshold(void)
{
    const s32 threshold = scrGetArg(0);
    const s32 kind = btlResolveEntryChoice(scrGetArg(1));
    s32 first, count;
    FUN_00301a08(kind, reinterpret_cast<s32 *>(reinterpret_cast<u32*>(&first)), reinterpret_cast<s32 *>(reinterpret_cast<u32*>(&count)));
    for (s32 index = first; index < first + count; ++index) {
        const BtlCombatantEntryA* entry = &btlGetMainState()->entries[index];
        if (!(entry->flags & g_btlCandidateMasks.unavailable) &&
            (entry->flags & g_btlCandidateMasks.required) && !(entry->flags & g_btlCandidateMasks.excluded) &&
            hpPercent(entry->hp, entry->maxHp) >= threshold) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1 != 0) {
        const BtlCombatantEntryA* entry = FUN_003eaf20(btlGetMainState());
        if (entry != NULL && hpPercent(entry->hp, entry->maxHp) <= threshold) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
} // extern "C"
