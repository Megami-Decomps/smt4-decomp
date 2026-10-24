#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
void FUN_002d1b94(s32 first, s32 second);

/* Script command: passes its first two arguments to FUN_002d1b94. */
u32 FUN_002fe8f8(void)
{
    s32 second = scrGetArg(1);

    FUN_002d1b94(scrGetArg(0), second);
    return 1;
}

} /* extern "C" */
