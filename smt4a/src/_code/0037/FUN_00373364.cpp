/* NON_MATCHING: the entries-pointer chain in the scan loop allocates r0/r1 the other way round (10 diff lines); range, masks and percentage now match. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "util/SlotRangeSelect.h"

extern "C" {
s32 scrGetArg(s32 index);
void scrSetResult(s32 result);
BtlMainStateA *btlGetMainState();
u32 btlResolveEntryChoice(s32 choice);
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *state);

static __inline s32 entryHpPercentage(const BtlCombatantEntryA *entry)
{
    s32 hp = entry->hp;
    s32 maximum = entry->maxHp;
    return hp * 100 / maximum;
}

u32 FUN_00373364()
{
    u32 unitId = scrGetArg(0);
    s32 percentage = scrGetArg(1);
    u32 choice = btlResolveEntryChoice(scrGetArg(2));
    s32 first, count;
    FUN_00301a08(choice, &first, &count);
    for (s32 index = first; index < first + count; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        if (!(g_btlCandidateMasks.unavailable & entry->flags) &&
            (g_btlCandidateMasks.required & entry->flags) &&
            !(entry->flags & g_btlCandidateMasks.excluded) && entry->id == unitId &&
            entryHpPercentage(entry) <= percentage) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1) {
        BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry && entry->id == unitId && entryHpPercentage(entry) <= percentage) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
