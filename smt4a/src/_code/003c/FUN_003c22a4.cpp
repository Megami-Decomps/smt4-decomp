#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

void *FUN_003eaf20(void *battle);
void scrSetResult(s32 result);

/* Script command: returns 1 when FUN_003eaf20 finds an entry for the battle. */
u32 FUN_003c22a4(void)
{
    scrSetResult(FUN_003eaf20(static_cast<void *>(btlGetMainState())) != NULL);
    return 1;
}

} /* extern "C" */
