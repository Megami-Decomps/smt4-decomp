/* NON_MATCHING: the selection range's stack slots and loads differ; register allocation of the mask AND/ORR chain differs; u64 mask loads pair differently (ldm versus two ldr); the frame/saved-register set differs (the active-entry byte already folds with the s8 flag). */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "battle/BtlMainAccess.h"
#include "util/SlotRangeSelect.h"

extern "C" {
s32 scrGetArg(s32 index);
s32 btlResolveEntryChoice(s32 choice);
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *state);
void scrSetResult(s32 value);

// Report whether an eligible selected combatant has a positive pending counter.
u32 FUN_003c1ae4()
{
    // The counter cannot enter the existing +0x0A union without raising its alignment.
    struct CounterView { u8 prefix[0xCC]; s32 pending; };
    struct Selection { u32 count, first; } selection;
    FUN_00301a08(btlResolveEntryChoice(scrGetArg(0)), reinterpret_cast<s32 *>(&selection.first), reinterpret_cast<s32 *>(&selection.count));
    for (s32 index = selection.first; index < (s32)(selection.first + selection.count); ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        u64 flags = entry->flags;
        if (!(flags & g_btlCandidateMasks.unavailable) &&
            (flags & g_btlCandidateMasks.required) && !(flags & g_btlCandidateMasks.excluded) &&
            reinterpret_cast<CounterView *>(entry)->pending > 0) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1) {
        BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry != NULL && reinterpret_cast<CounterView *>(entry)->pending > 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
