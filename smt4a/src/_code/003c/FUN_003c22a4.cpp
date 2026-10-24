#include "common.h"

extern "C" {

void *btlGetMainState(void);
void *FUN_003eaf20(void *battle);
void scrSetResult(s32 result);

/* Script command: returns 1 when FUN_003eaf20 finds an entry for the battle. */
u32 FUN_003c22a4(void)
{
    scrSetResult(FUN_003eaf20(btlGetMainState()) != NULL);
    return 1;
}

} /* extern "C" */
