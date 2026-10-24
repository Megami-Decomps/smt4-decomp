#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
void scrSetResult(s32 result);
s32 FUN_002bf810(s32 value);
/* Script command: sets the result to FUN_002bf810 of its first argument. */
s32 FUN_001ab964(void)
{
    scrSetResult(FUN_002bf810(scrGetArg(0)));
    return 1;
}
}
