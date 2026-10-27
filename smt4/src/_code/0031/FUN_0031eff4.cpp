#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "util/SlotRangeSelect.h"
#include "battle/BtlMainAccess.h"
#include "battle/BattleHelpers.h"

extern "C" {
void scrSetResult(s32);
s32 scrGetArg(s32);
BtlEntry *btlMainFindActiveEntry(BtlMainState *);

// Report whether the selected group or active entry has either pending effect.
u32 FUN_0031eff4(void)
{
    s32 first;
    s32 count;
    u32 group = btlScriptResolveGroupArg(scrGetArg(0));
    FUN_002499fc(group, &first, &count);
    for (s32 index = first; index < first + count; ++index) {
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
