/* NON_MATCHING: loop bound uses one LDRD instead of retail's two scalar loads; remaining instruction sequence matches. */
#include "shard/W4_Match6_BtlEntry.h"
#include "util/CalleeContracts.h"

extern "C" {
void scrSetResult(s32);
BtlMainState *btlGetMainState(void);
s32 scrGetArg(s32);
BtlEntry *btlMainFindActiveEntry(BtlMainState *);
u32 btlScriptResolveGroupArg(s32);

// Report whether the selected group or active entry has either pending effect.
u32 FUN_0031eff4(void)
{
    u32 first, count;
    u32 group = btlScriptResolveGroupArg(scrGetArg(0));
    FUN_002499fc(group, &first, &count);
    for (s32 index = first; index < static_cast<s32>(count + first); ++index) {
        BtlEntry *entry = &btlGetMainState()->entries[index];
        if (!(entry->flags & BTL_ENTRY_FLAG_PRESENT) &&
            (entry->flags & BTL_ENTRY_FLAG_ACTIVE) &&
            !(entry->flags & BTL_ENTRY_FLAG_BLOCKED)) {
            if (entry->effects.primary > 0 || entry->effects.secondary > 0) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    if (btlGetMainState()->hasActiveEntry) {
        BtlEntry *entry = btlMainFindActiveEntry(btlGetMainState());
        if (entry && (entry->effects.primary > 0 || entry->effects.secondary > 0)) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
