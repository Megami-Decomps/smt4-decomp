/* NON_MATCHING: the required-mask intersection uses a different LDM pair and AND result registers. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "battle/BtlMainAccess.h"

extern "C" {
s32 scrGetArg(s32 index);
void scrSetResult(s32 result);
s32 btlResolveEntryChoice(s32 kind);
void FUN_00301a08(s32 kind, u32 *first, u32 *count);
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *state);

u32 scrCheckUnitStatStageThree()
{
    u32 id = scrGetArg(0);
    s32 stat = scrGetArg(1);
    s32 kind = btlResolveEntryChoice(scrGetArg(2));
    s32 first, count;
    FUN_00301a08(kind, (u32 *)&first, (u32 *)&count);
    for (s32 index = first; index < first + count; ++index) {
        const BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        if (!(entry->flags & g_btlCandidateMasks.unavailable) &&
            (entry->flags & g_btlCandidateMasks.required) && !(entry->flags & g_btlCandidateMasks.excluded) &&
            entry->id == id && (entry->encodedStats.values[stat] >> 10) == 3) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1 != 0) {
        const BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry != NULL && entry->id == id &&
            (entry->encodedStats.values[stat] >> 10) == 3) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
