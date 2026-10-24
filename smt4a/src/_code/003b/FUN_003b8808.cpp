#include "common.h"

extern "C" {

void *btlGetMainState(void);
u32 FUN_003ea1bc(void *state);
void scrSetResult(s32 result);

/* Script command: reports the battle global's word at 0x24. */
u32 FUN_003b8808(void)
{
    scrSetResult(FUN_003ea1bc(btlGetMainState()));
    return 1;
}

} /* extern "C" */
