#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
void FUN_002560a4(s32 value);

/* Script command: passes the argument to FUN_002560a4. */
u32 FUN_0030a9c0(void)
{
    FUN_002560a4(scrGetArg(0));
    return 1;
}

} /* extern "C" */
