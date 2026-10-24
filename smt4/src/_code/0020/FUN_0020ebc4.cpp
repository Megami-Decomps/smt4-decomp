#include "common.h"

extern "C" {

void gameFlagSetValue(s32 flag, s32 value, s32 mode);
s32 scrGetArg(s32 index);

/* Script command: sets the game flag given by the first argument. */
u32 FUN_0020ebc4(void)
{
    gameFlagSetValue(scrGetArg(0), 0, 1);
    return 1;
}

} /* extern "C" */
