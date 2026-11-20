#include "battle/BtlMainAccess.h"
#include "common.h"

struct BtlMainState;
struct BtlEntry;

extern "C" {
s32 scrGetArg(u32 index);
BtlEntry *btlMainFindActiveEntry(BtlMainState *state);
void scrSetResult(s32 value);

/* Script command: sets the result to whether the battle's active entry count (1 when
 * btlMainFindActiveEntry finds an entry, else 0) is at most argument 0. */
u32 scrCommBtlTestActiveEntryCount(void)
{
    s32 maximum = scrGetArg(0);
    s32 activeCount = 0;
    if (btlMainFindActiveEntry(btlGetMainState()) != NULL)
        activeCount = 1;
    scrSetResult(activeCount <= maximum);
    return 1;
}

} /* extern "C" */
