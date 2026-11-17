#include "common.h"
#include "battle/BtlMainAccess.h"
#include "battle/BtlEntry.h"
#include "battle/btlMain.h"
#include "script/ScriptArgs.h"

extern "C" {

// Reports whether any eligible battle entry has the script-selected bit set.
u32 FUN_002f0304(void)
{
    u32 bit = scrGetArg(0);
    s32 result = 1; /* the command's status: always continue */
    s32 i;

    for (i = 0; i < 0x6d; i++) {
        BtlEntry *entry = &btlGetMainState()->entries[i];

        if ((entry->flags & 0x10) != 0 && (entry->flags & 1) != 0 && (entry->flags & 0x40) == 0
            && (entry->data.statusFlags & (1 << bit)) != 0) {
            scrSetResult(1);
            return result;
        }
    }
    scrSetResult(0);
    return result;
}
}
