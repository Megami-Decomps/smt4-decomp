/* NON_MATCHING: first two 64-bit mask tests use different AND temporaries, omitting retail's r9 save and four frame bytes. */
#include "common.h"
#include "battle/BtlMainAccess.h"
#include "shard/W5_W5Match7_BattleMask.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "util/SlotRangeSelect.h"


extern "C" {
u32 scrGetArg(s32 index);
s32 btlResolveEntryChoice(s32 choice);
void scrSetResult(s32 result);
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *battle);

// Find the requested combatant with an encoded statistic whose high six bits equal one.
u32 btlScriptGetEncodedCombatantStat()
{
    u32 id = scrGetArg(0);
    s32 stat = scrGetArg(1);
    s32 choice = scrGetArg(2);
    u32 first;
    u32 count;
    FUN_00301a08(btlResolveEntryChoice(choice), reinterpret_cast<s32 *>(&first), reinterpret_cast<s32 *>(&count));
    for (s32 index = first; index < static_cast<s32>(first + count); ++index) {
        BtlMainStateA *battle = btlGetMainState();
        BtlCombatantEntryA *entry = &battle->entries[index];
        u64 flags = entry->flags;
        if ((flags & g_btlCandidateMasks.unavailable) == 0 &&
            (flags & g_btlCandidateMasks.required) != 0 &&
            (flags & g_btlCandidateMasks.excluded) == 0 &&
            entry->id == id && (entry->encodedStats.values[stat] >> 10) == 1) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1) {
        BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry != NULL && entry->id == id && (entry->encodedStats.values[stat] >> 10) == 1) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
