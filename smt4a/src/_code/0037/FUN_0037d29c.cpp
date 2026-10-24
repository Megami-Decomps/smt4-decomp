#include "common.h"

extern "C" {

void FUN_003dfdb4(s16 value);
s32 scrGetArg(s32 index);

/* Script command: passes the first argument, as a signed halfword, to FUN_003dfdb4. */
u32 FUN_0037d29c(void)
{
    FUN_003dfdb4(static_cast<s16>(scrGetArg(0)));
    return 1;
}

} /* extern "C" */
