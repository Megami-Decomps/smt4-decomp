#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
s32 slotIsActive(u8 value);
s32 scrSetResult(s32 value);

/* Script command: returns whether slotIsActive accepts argument zero. */
s32 FUN_001fc598(void)
{
    scrSetResult(slotIsActive(scrGetArg(0)) != 0);
    return 1;
}

} /* extern "C" */
