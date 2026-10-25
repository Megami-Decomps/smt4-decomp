/* NON_MATCHING: the selection range's stack slots and loads differ; register allocation of the mask AND/ORR chain differs; u64 mask loads pair differently (ldm versus two ldr); entries base/product registers are swapped in the entry address (the active-entry byte already folds with the s8 flag). */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
s32 scrGetArg(s32 index);
void scrSetResult(s32 result);
s32 btlResolveEntryChoice(s32 kind);
void FUN_00301a08(s32 kind, u32 *first, u32 *count);
BtlMainStateA *btlGetMainState();
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *state);

u32 scrCommBattleGroupHpPercentAtMost()
{
    s32 threshold = scrGetArg(0);
    s32 kind = btlResolveEntryChoice(scrGetArg(1));
    s32 totalHp = 0;
    s32 totalMaxHp = 0;
    u32 first, count;
    FUN_00301a08(kind, &first, &count);
    for (s32 index = first; index < (s32)(first + count); ++index) {
        const BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        u64 flags = entry->flags;
        if (!(g_btlCandidateMasks.unavailable & flags) &&
            (g_btlCandidateMasks.required & flags) && !(g_btlCandidateMasks.excluded & flags)) {
            totalHp += entry->hp;
            totalMaxHp += entry->maxHp;
        }
    }
    if (btlGetMainState()->unk4cd1) {
        const BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry != NULL) {
            totalHp += entry->hp;
            totalMaxHp += entry->maxHp;
        }
    }
    scrSetResult(totalHp * 100 / totalMaxHp <= threshold);
    return 1;
}
}
