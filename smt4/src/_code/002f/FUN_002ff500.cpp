/* NON_MATCHING: retail keeps separate early-result call and common epilogue; compiler merges the matching-result branches. */
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "util/SlotRangeSelect.h"
#include "battle/BtlMainAccess.h"
#include "util/btlScriptResolveGroupArg.h"

extern "C" {
u32 scrGetArg(s32 argument);
s32 scrSetResult(s32 result);
BtlEntry *btlMainFindActiveEntry(BtlMainState *battle);

/* Test a requested entry ID's group bit, including the special active entry. */
u32 FUN_002ff500(void)
{
    u32 id = scrGetArg(0);
    u32 bit = scrGetArg(1);
    u32 group = (u32)btlScriptResolveGroupArg(scrGetArg(2));
    s32 first, count;
    FUN_002499fc(group, &first, &count);
    for (s32 i = first; i < first + count; ++i) {
        BtlEntry *entry = &btlGetMainState()->entries[i];
        if (!(entry->flags & 0x10) && (entry->flags & 1) && !(entry->flags & 0x40) &&
            entry->id == id && (entry->groupMask & (1u << bit))) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->hasActiveEntry) {
        BtlEntry *entry = btlMainFindActiveEntry(btlGetMainState());
        if (entry && (entry->groupMask & (1u << bit))) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
