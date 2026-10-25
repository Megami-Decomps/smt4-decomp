#include "common.h"
#include "battle/BtlMainAccess.h"
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"

extern "C" {


extern u32 scrGetArg(s32 index);
extern void scrSetResult(s32 value);

/* Script command: result is 1 when a live entry (flags 0x11, not 0x40) has the argument's bit in its mask. */
s32 scrLiveEntryHasBit(void)
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

} /* extern "C" */
