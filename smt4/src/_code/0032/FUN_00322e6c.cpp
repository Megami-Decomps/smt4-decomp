#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"

extern "C" {


// Script command: result 1 when a used, listed, non-excluded entry has a positive value.
u32 FUN_00322e6c(void)
{
    for (s32 i = 0; i < 109; i++) {
        BtlEntry *entry = &btlGetMainState()->entries[i];
        if ((entry->flags & 0x10) != 0 && (entry->flags & 1) != 0 && (entry->flags & 0x40) == 0 && entry->turn.counter > 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
