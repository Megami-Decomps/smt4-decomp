/* NON_MATCHING: the selection range's stack slots and loads differ; register allocation of the mask AND/ORR chain differs; u64 mask loads pair differently (ldm versus two ldr); the frame/saved-register set differs (the active-entry byte already folds with the s8 flag). */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "battle/BtlMainAccess.h"
#include "util/SlotRangeSelect.h"


extern "C" {
s32 scrGetArg(s32 index);
void scrSetResult(s32 result);
s32 btlResolveEntryChoice(s32 choice);
s32 FUN_002b54a0(BtlCombatantEntryA *entry, s32 kind);
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *);

// Report whether a candidate in the current battle group satisfies the script query.
u32 btlScriptAnyCandidateMatches(void)
{
    s32 kind = scrGetArg(0);
    s32 choice = scrGetArg(1);
    u32 first, count;
    FUN_00301a08(btlResolveEntryChoice(choice), reinterpret_cast<s32 *>(&first), reinterpret_cast<s32 *>(&count));
    for (s32 i = first; i < (s32)(first + count); ++i) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if (!(entry->flags & g_btlCandidateMasks.unavailable) &&
            (entry->flags & g_btlCandidateMasks.required) &&
            !(entry->flags & g_btlCandidateMasks.excluded) &&
            FUN_002b54a0(entry, kind)) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1) {
        BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry && FUN_002b54a0(entry, kind)) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
