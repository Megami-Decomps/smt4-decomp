#include "battle/BtlMainAccess.h"
#include "common.h"
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"

extern "C" {


s32 scrGetArg(u32 index);
int scrSetResult(bool value);

/* Script command: result is whether the argument is at most the average level of the active, present units. */
u32 scrCommBtlAverageLevelAtLeast(void)
{
    s32 threshold = scrGetArg(0);
    s32 total = 0;
    s32 count = 0;
    s32 i;

    for (i = 0; i < 109; i++) {
        BtlEntry *unit = &btlGetMainState()->entries[i];

        if ((unit->flags & 0x10) != 0 && (unit->flags & 1) != 0 && (unit->flags & 0x40) == 0) {
            count++;
            total += unit->level;
        }
    }
    scrSetResult(threshold <= total / count);
    return 1;
}

} /* extern "C" */
