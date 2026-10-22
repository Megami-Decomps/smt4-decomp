/* NON_MATCHING: mask-test temporary registers and active-entry flag address formation differ from retail. */
#include "common.h"
#include "shard/W5_W5Match7_BattleMask.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

struct CombatantStatMasks {
    u64 active;       /* 0x00 */
    u8 unk08[0x10];
    u64 excluded;     /* 0x18 */
    u8 unk20[8];
    u64 blocked;      /* 0x28 */
};

extern "C" {
extern CombatantStatMasks g_btlCandidateMasks;
u32 scrGetArg(s32 index);
u32 btlResolveEntryChoice();
void FUN_00301a08(u32 group, s32 *first, s32 *count);
void scrSetResult(s32 result);
BtlCombatantEntryA *FUN_003eaf20(BattleMaskState *battle);

// Find the requested combatant with an encoded statistic whose high six bits equal one.
u32 btlScriptGetEncodedCombatantStat()
{
    u32 id = scrGetArg(0);
    s32 stat = scrGetArg(1);
    scrGetArg(2);
    s32 first;
    s32 count;
    FUN_00301a08(btlResolveEntryChoice(), &first, &count);
    for (s32 index = first; index < first + count; ++index) {
        BattleMaskState *battle = btlGetMainState();
        BtlCombatantEntryA *entry = &reinterpret_cast<BtlCombatantEntryA *>(battle->entryMaskView.mask)[index];
        u64 flags = entry->flags;
        if ((flags & g_btlCandidateMasks.excluded) == 0 &&
            (flags & g_btlCandidateMasks.active) != 0 &&
            (flags & g_btlCandidateMasks.blocked) == 0 &&
            entry->id == id && (entry->encodedStats.values[stat] >> 10) == 1) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->activeEntry.present) {
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
