/* NON_MATCHING: sibling scrLiveEntryHasBit's form matches the loop; retail keeps the constant 1 of `1 << bit` in r6 and returns it (mov r0, r6) where the build re-materialises it. A named `one` local reproduces it only with r5/r6 exchanged and is declaration-order steering (same issue in scrBtlAllEntriesInGroup and scrCommHasUnitWithoutMaskBit). */
#include "common.h"
#include "battle/BtlMainAccess.h"
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "script/ScriptArgs.h"

extern "C" {

// Reports whether any eligible battle entry has the script-selected bit set.
u32 FUN_002f0304(void)
{
    u32 bit = scrGetArg(0);
    s32 i;

    for (i = 0; i < 0x6d; i++) {
        BtlEntry *entry = &btlGetMainState()->entries[i];

        if ((entry->flags & 0x10) != 0 && (entry->flags & 1) != 0 && (entry->flags & 0x40) == 0
            && (entry->groupMask & (1 << bit)) != 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
