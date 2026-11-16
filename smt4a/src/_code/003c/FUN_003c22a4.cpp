#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

void *btlFindFirstEntryMatchingCategoryAndRequiredMask(void *battle);
void scrSetResult(s32 result);

/* Script command: returns 1 when btlFindFirstEntryMatchingCategoryAndRequiredMask finds an entry for the battle. */
u32 FUN_003c22a4(void)
{
    scrSetResult(btlFindFirstEntryMatchingCategoryAndRequiredMask(static_cast<void *>(btlGetMainState())) != NULL);
    return 1;
}

} /* extern "C" */
