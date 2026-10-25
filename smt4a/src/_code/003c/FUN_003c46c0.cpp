/* NON_MATCHING: the selection range's stack slots and loads differ; register allocation of the mask AND/ORR chain differs; u64 mask loads pair differently (ldm versus two ldr) (the active-entry byte already folds with the s8 flag). */
#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "util/SlotRangeSelect.h"

extern "C" {
s32 scrGetArg(s32 index);
s32 btlResolveEntryChoice(s32 choice);
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *state);
void scrSetResult(s32 value);

// Test selected matching combatants and the special active entry for an effect counter.
u32 FUN_003c46c0()
{
    // These words cannot enter the byte-aligned +0x0A union without shifting its layout.
    struct EffectCountersView {
        u8 prefix[0xAC];
        s32 primary;
        s32 unused;
        s32 secondary;
    };
    u32 id = scrGetArg(0);
    s32 first, count;
    FUN_00301a08(btlResolveEntryChoice(scrGetArg(1)), &first, &count);
    for (s32 index = first; index < first + count; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        u64 flags = entry->flags;
        if (!(flags & g_btlCandidateMasks.unavailable) &&
            (flags & g_btlCandidateMasks.required) && !(flags & g_btlCandidateMasks.excluded) &&
            entry->id == id) {
            const EffectCountersView *counters = reinterpret_cast<const EffectCountersView *>(entry);
            if (counters->primary > 0 || counters->secondary > 0) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    if (btlGetMainState()->unk4cd1) {
        BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry != NULL && entry->id == id) {
            const EffectCountersView *counters = reinterpret_cast<const EffectCountersView *>(entry);
            if (counters->primary > 0 || counters->secondary > 0) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    scrSetResult(0);
    return 1;
}
}
