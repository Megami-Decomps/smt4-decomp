/* NON_MATCHING: retail's loop-hit exit is `bl scrSetResult; nop; nop; b epilogue` (shared `mov r0,r7` return with r7 = 1) and builds the active-entry result with movne/mov before one shared scrSetResult; the build duplicates the epilogue and keeps the result in r7. */
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/BtlMainAccess.h"
#include "util/SlotRangeSelect.h"
#include "script/ScriptArgs.h"

extern "C" {
s32 scrGetArg(s32 index);
s32 btlScriptResolveGroupArg(s32 group);
BtlEntry *btlMainFindActiveEntry(BtlMainState *state);

// Whether the special active battle entry belongs to the group bit `flag`.
static __inline s32 activeEntryHasGroupBit(s32 flag)
{
    if (btlGetMainState()->hasActiveEntry != 0) {
        BtlEntry *entry = btlMainFindActiveEntry(btlGetMainState());
        if (entry != NULL && (entry->groupMask & (1 << flag)) != 0) {
            return 1;
        }
    }
    return 0;
}

// Test whether an eligible member of the selected group has the requested flag.
u32 FUN_002f07c8(void)
{
    s32 flag = scrGetArg(0);
    s32 group = btlScriptResolveGroupArg(scrGetArg(1));
    s32 first;
    s32 count;
    FUN_002499fc(group, &first, &count);
    for (s32 index = first; index < count + first; ++index) {
        BtlEntry *entry = &btlGetMainState()->entries[index];
        if ((entry->flags & 0x10) == 0 && (entry->flags & 1) != 0 &&
            (entry->flags & 0x40) == 0 && (entry->groupMask & (1 << flag)) != 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(activeEntryHasGroupBit(flag));
    return 1;
}
}
