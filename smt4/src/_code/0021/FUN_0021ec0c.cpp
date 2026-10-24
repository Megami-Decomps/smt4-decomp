#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
s32 padIsButtonPressed(u8 button);
s32 scrSetResult(s32 value);

/* Script command: returns whether the button in argument zero is pressed. */
s32 FUN_0021ec0c(void)
{
    scrSetResult(padIsButtonPressed(scrGetArg(0)) != 0);
    return 1;
}

} /* extern "C" */
