#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
void scrSetResult(s32 result);
void flagEntryReset(u16 questIndex);
/* Script command: resets the flag entry named by its first argument. */
s32 FUN_002144ac(void)
{
    flagEntryReset(scrGetArg(0));
    return 1;
}
}
