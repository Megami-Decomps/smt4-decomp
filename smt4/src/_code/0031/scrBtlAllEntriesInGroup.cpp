#include "common.h"
#include "battle/BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"

extern "C" {


/* Script command: 0 if some present, active, unblocked entry is not in script group `arg` (its bit in groupMask clear), else 1. */
u32 scrBtlAllEntriesInGroup(void)
{
    u32 group = scrGetArg(0);
    s32 result = 1; /* the command's status: always continue */
    s32 i;

    for (i = 0; i < BTL_ENTRY_COUNT; i++) {
        BtlEntry *entry = &btlGetMainState()->entries[i];

        if ((entry->flags & BTL_ENTRY_FLAG_PRESENT) != 0 && (entry->flags & BTL_ENTRY_FLAG_ACTIVE) != 0 &&
            (entry->flags & BTL_ENTRY_FLAG_BLOCKED) == 0 && (entry->data.statusFlags & (1 << (group & 0xFF))) == 0) {
            scrSetResult(0);
            return result;
        }
    }
    scrSetResult(1);
    return result;
}

}
