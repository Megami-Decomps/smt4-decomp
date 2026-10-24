#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
void FUN_003847d4(s32 value);

/* Script command: passes the argument to FUN_003847d4. */
u32 FUN_00370768(void)
{
    FUN_003847d4(scrGetArg(0));
    return 1;
}

} /* extern "C" */
