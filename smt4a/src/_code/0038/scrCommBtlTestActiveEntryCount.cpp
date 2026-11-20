#include "battle/BtlMainAccess.h"
#include "common.h"

struct BtlMainStateA;
struct BtlCombatantEntryA;

extern "C" {
s32 scrGetArg(u32 index);
BtlCombatantEntryA *btlFindFirstEntryMatchingCategoryAndRequiredMask(BtlMainStateA *battle);
void scrSetResult(u32 value);

/* Script command: sets the result to whether the battle's active entry count (1 when
 * btlFindFirstEntryMatchingCategoryAndRequiredMask finds an entry, else 0) is at most argument 0. */
u32 scrCommBtlTestActiveEntryCount(void)
{
    s32 maximum = scrGetArg(0);
    s32 activeCount = 0;
    if (btlFindFirstEntryMatchingCategoryAndRequiredMask(btlGetMainState()) != NULL)
        activeCount = 1;
    scrSetResult(activeCount <= maximum);
    return 1;
}

} /* extern "C" */
