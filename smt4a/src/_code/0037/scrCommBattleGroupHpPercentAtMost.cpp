/* NON_MATCHING: scalar range uses an 8-byte frame versus retail 40; range order, total registers and final exclusion-mask operands differ. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "battle/BtlMainAccess.h"
#include "util/SlotRangeSelect.h"

extern "C" {
s32 scrGetArg(s32 index);
void scrSetResult(s32 result);
s32 btlResolveEntryChoice(s32 kind);
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *state);

u32 scrCommBattleGroupHpPercentAtMost()
{
    s32 threshold = scrGetArg(0);
    s32 kind = btlResolveEntryChoice(scrGetArg(1));
    s32 totalHp = 0;
    s32 totalMaxHp = 0;
    u32 first, count;
    FUN_00301a08(kind, reinterpret_cast<s32 *>(&first), reinterpret_cast<s32 *>(&count));
    for (s32 index = first; index < (s32)(first + count); ++index) {
        const BtlCombatantEntryA *entries = btlGetMainState()->entries;
        const BtlCombatantEntryA *entry = &entries[index];
        u64 flags = entry->flags;
        if (!(g_btlCandidateMasks.unavailable & flags) &&
            (flags & g_btlCandidateMasks.required) && !(g_btlCandidateMasks.excluded & flags)) {
            s32 hp = entry->hp;
            s32 maxHp = entry->maxHp;
            totalHp += hp;
            totalMaxHp += maxHp;
        }
    }
    if (btlGetMainState()->unk4cd1) {
        const BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry != NULL) {
            s32 hp = entry->hp;
            s32 maxHp = entry->maxHp;
            totalHp += hp;
            totalMaxHp += maxHp;
        }
    }
    scrSetResult(totalHp * 100 / totalMaxHp <= threshold);
    return 1;
}
}
