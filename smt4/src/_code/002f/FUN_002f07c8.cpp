/* NON_MATCHING: only the final return differs: retail returns the shift-base 1 kept in r7 (`mov r0, r7`), the build writes `mov r0, #1`. */
#include "battle/BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/BtlMainAccess.h"
#include "util/SlotRangeSelect.h"
#include "script/ScriptArgs.h"

extern "C" {

s32 btlScriptResolveGroupArg(s32 group);
BtlEntry *btlMainFindActiveEntry(BtlMainState *state);

/* Sets the script result to whether an eligible member of the group's range, or the special active entry, has group
 * bit `flag`. */
static __inline void groupMemberBitResult(s32 flag, s32 group)
{
    s32 first;
    s32 count;
    btlSideGetEntryRange(group, &first, &count);
    for (s32 index = first; index < count + first; ++index) {
        BtlEntry *entry = &btlGetMainState()->entries[index];
        if ((entry->flags & 0x10) == 0 && (entry->flags & 1) != 0 &&
            (entry->flags & 0x40) == 0 && (entry->data.statusFlags & (1 << flag)) != 0) {
            scrSetResult(1);
            return;
        }
    }
    if (btlGetMainState()->hasActiveEntry != 0) {
        BtlEntry *entry = btlMainFindActiveEntry(btlGetMainState());
        if (entry != NULL && (entry->data.statusFlags & (1 << flag)) != 0) {
            scrSetResult(1);
            return;
        }
    }
    scrSetResult(0);
}

// Test whether an eligible member of the selected group has the requested flag.
u32 FUN_002f07c8(void)
{
    s32 flag = scrGetArg(0);
    groupMemberBitResult(flag, btlScriptResolveGroupArg(scrGetArg(1)));
    return 1;
}
}
