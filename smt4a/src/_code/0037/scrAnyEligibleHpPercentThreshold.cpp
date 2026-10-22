/* NON_MATCHING: range output slots separate, constant-100 scheduling differs, and the 4CD1 byte access splits its offset; O2 may restore retail lowering. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

namespace {
inline s32 hpPercent(const BtlCombatantEntryA& entry)
{
    return entry.hp * 100 / entry.maxHp;
}
}

extern "C" {
s32 scrGetArg(s32);
void scrSetResult(s32);
s32 btlResolveEntryChoice(s32);
void FUN_00301a08(s32, u32*, u32*);
BtlMainStateA* btlGetMainState(void);
BtlCombatantEntryA* FUN_003eaf20(BtlMainStateA*);

/* Check eligible HP percentages, preserving the special entry's opposite comparison. */
u32 scrAnyEligibleHpPercentThreshold(void)
{
    const s32 threshold = scrGetArg(0);
    const s32 kind = btlResolveEntryChoice(scrGetArg(1));
    s32 first, count;
    FUN_00301a08(kind, reinterpret_cast<u32*>(&first), reinterpret_cast<u32*>(&count));
    for (s32 index = first; index < first + count; ++index) {
        const BtlCombatantEntryA* entry = &btlGetMainState()->entries[index];
        const u64 flags = entry->flags;
        if (!(flags & g_btlCandidateMasks.unavailable) &&
            (flags & g_btlCandidateMasks.required) && !(flags & g_btlCandidateMasks.excluded) &&
            hpPercent(*entry) >= threshold) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1 != 0) {
        const BtlCombatantEntryA* entry = FUN_003eaf20(btlGetMainState());
        if (entry != NULL && hpPercent(*entry) <= threshold) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
} // extern "C"
