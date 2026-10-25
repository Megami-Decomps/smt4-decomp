/* NON_MATCHING: explicit choice argument and shared HP-percentage operation restore range/HP load grouping; required candidate mask still uses two loads instead of LDM. */
#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "util/SlotRangeSelect.h"

extern "C" {
s32 scrGetArg(s32 index);
void scrSetResult(s32 result);
u32 btlResolveEntryChoice(s32 choice);
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *);

static __inline s32 entryHpPercentage(const BtlCombatantEntryA *entry)
{
    s32 hp = entry->hp;
    s32 maximum = entry->maxHp;
    return hp * 100 / maximum;
}

// Report whether any eligible battle entry is at or below the requested HP percentage.
u32 btlScriptAnyEntryHpAtMost(void)
{
    s32 percent = scrGetArg(0);
    s32 choice = scrGetArg(1);
    s32 first, count;
    FUN_00301a08(btlResolveEntryChoice(choice), &first, &count);
    for (s32 i = first; i < first + count; ++i) {
        BtlMainStateA *state = btlGetMainState();
        BtlCombatantEntryA *entry = &state->entries[i];
        if (!(entry->flags & g_btlCandidateMasks.unavailable) &&
            (entry->flags & g_btlCandidateMasks.required) &&
            !(entry->flags & g_btlCandidateMasks.excluded) &&
            entryHpPercentage(entry) <= percent) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1) {
        BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry && entryHpPercentage(entry) <= percent) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
