#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
s32 compendiumEntryIsRegistered(u16 value);
s32 scrSetResult(s32 value);

/* Script command: returns whether compendiumEntryIsRegistered accepts argument zero. */
s32 FUN_003b85c4(void)
{
    scrSetResult(compendiumEntryIsRegistered(scrGetArg(0)) != 0);
    return 1;
}

} /* extern "C" */
