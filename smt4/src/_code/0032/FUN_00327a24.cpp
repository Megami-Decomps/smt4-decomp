/* NON_MATCHING: the loop reloads the adjacent group-range outputs with LDM instead of retail's two scalar loads. */
#include "shard/W4_Match6_BtlEntry.h"
extern "C" {
s32 scrGetArg(s32 index);
u32 btlScriptResolveGroupArg(s32 group);
void FUN_002499fc(u32 group, s32 *range, s32 *count);
BtlMainState *btlGetMainState(void);
BtlEntry *btlMainFindActiveEntry(BtlMainState *state);
void scrSetResult(s32 result);

// Test whether a selected combatant has either alternate pending effect.
u32 FUN_00327a24(void)
{
    s32 first;
    s32 count;
    FUN_002499fc(btlScriptResolveGroupArg(scrGetArg(0)), &first, &count);
    for (s32 index = first; index < first + count; ++index) {
        BtlEntry *entry = &btlGetMainState()->entries[index];
        if (!(entry->flags & BTL_ENTRY_FLAG_PRESENT) &&
            (entry->flags & BTL_ENTRY_FLAG_ACTIVE) &&
            !(entry->flags & BTL_ENTRY_FLAG_BLOCKED)) {
            s16 effect = entry->effects.primaryAlternate;
            if (effect <= 0)
                effect = entry->effects.secondaryAlternate;
            if (effect > 0) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    if (btlGetMainState()->hasActiveEntry) {
        BtlEntry *entry = btlMainFindActiveEntry(btlGetMainState());
        if (entry && (entry->effects.primaryAlternate > 0 || entry->effects.secondaryAlternate > 0)) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
