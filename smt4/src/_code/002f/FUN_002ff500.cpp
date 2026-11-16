/* NON_MATCHING: control flow, frame and shared epilogue now match; id and the shifted bit mask swap r6/r7, and retail returns the shift-base 1 from r8 (`mov r0, r8`) where the build writes `mov r0, #1`. */
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "util/SlotRangeSelect.h"
#include "battle/BtlMainAccess.h"
#include "battle/BattleHelpers.h"

extern "C" {
u32 scrGetArg(s32 argument);
s32 scrSetResult(s32 result);
BtlEntry *btlMainFindActiveEntry(BtlMainState *battle);

/* Sets the script result to whether entry `id` of the group's range, or the special active entry, has group bit `bit`. */
static __inline void groupEntryBitResult(u32 id, u32 bit, u32 group)
{
    s32 first, count;
    btlSideGetEntryRange(group, &first, &count);
    for (s32 i = first; i < first + count; ++i) {
        BtlEntry *entry = &btlGetMainState()->entries[i];
        if (!(entry->flags & 0x10) && (entry->flags & 1) && !(entry->flags & 0x40) &&
            entry->id == id && (entry->groupMask & (1u << bit))) {
            scrSetResult(1);
            return;
        }
    }
    if (btlGetMainState()->hasActiveEntry) {
        BtlEntry *entry = btlMainFindActiveEntry(btlGetMainState());
        if (entry && (entry->groupMask & (1u << bit))) {
            scrSetResult(1);
            return;
        }
    }
    scrSetResult(0);
}

/* Test a requested entry ID's group bit, including the special active entry. */
u32 FUN_002ff500(void)
{
    u32 id = scrGetArg(0);
    u32 bit = scrGetArg(1);
    groupEntryBitResult(id, bit, (u32)btlScriptResolveGroupArg(scrGetArg(2)));
    return 1;
}
}
