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
    struct { s32 count; s32 first; } range;
    FUN_00301a08(kind, &range.first, &range.count);
    for (s32 index = range.first; index < range.count + range.first; ++index) {
        const BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        if ((g_btlCandidateMasks.unavailable & entry->flags) == 0 &&
            (g_btlCandidateMasks.required & entry->flags) != 0 &&
            (g_btlCandidateMasks.excluded & entry->flags) == 0) {
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
