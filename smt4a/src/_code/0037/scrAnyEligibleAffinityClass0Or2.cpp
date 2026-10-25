/* NON_MATCHING: the selection range's stack slots and loads differ (the active-entry byte already folds with the s8 flag). */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "battle/BtlMainAccess.h"


extern "C" {
s32 scrGetArg(s32);
void scrSetResult(s32);
s32 btlResolveEntryChoice(s32);
void FUN_00301a08(s32, u32*, u32*);
BtlCombatantEntryA* FUN_003eaf20(BtlMainStateA*);

/* Test eligible combatants, then the optional special combatant, for an accepted affinity. */
u32 scrAnyEligibleAffinityClass0Or2(void)
{
    const s32 stat = scrGetArg(0);
    const s32 kind = btlResolveEntryChoice(scrGetArg(1));
    s32 first, count;
    FUN_00301a08(kind, reinterpret_cast<u32*>(&first), reinterpret_cast<u32*>(&count));
    for (s32 index = first; index < first + count; ++index) {
        const BtlCombatantEntryA* entry = &btlGetMainState()->entries[index];
        const u64 flags = entry->flags;
        if (!(flags & g_btlCandidateMasks.unavailable) &&
            (flags & g_btlCandidateMasks.required) && !(flags & g_btlCandidateMasks.excluded)) {
            const u16 encoded = entry->encodedStats.values[stat];
            if ((encoded & 0xFC00) == 0 || (encoded >> 10) == 2) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    if (btlGetMainState()->unk4cd1 != 0) {
        const BtlCombatantEntryA* entry = FUN_003eaf20(btlGetMainState());
        if (entry != NULL) {
            const u16 encoded = entry->encodedStats.values[stat];
            if ((encoded & 0xFC00) == 0 || (encoded >> 10) == 2) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    scrSetResult(0);
    return 1;
}
} // extern "C"
