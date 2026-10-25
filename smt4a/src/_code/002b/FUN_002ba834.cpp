#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
void scrSetResult(s32 result);
s32 slotIsActive(u8 id);

/* Script command: returns 1 when slotIsActive accepts the argument. */
u32 FUN_002ba834(void)
{
    scrSetResult(slotIsActive(scrGetArg(0)) != 0);
    return 1;
}

} /* extern "C" */
