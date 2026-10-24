#include "common.h"

extern "C" {

void FUN_0029bed8(u16 value);
s32 scrGetArg(s32 index);

/* Script command: passes the first argument, as a halfword, to FUN_0029bed8. */
u32 FUN_00300558(void)
{
    FUN_0029bed8(static_cast<u16>(scrGetArg(0)));
    return 1;
}

} /* extern "C" */
