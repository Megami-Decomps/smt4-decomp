#include "common.h"

extern "C" {

void FUN_003768dc(void);
void FUN_0039587c(u32 a, u32 b);
u32 scrGetArg(s32 index);
u32 FUN_002360dc(void);

/* Script command: passes FUN_002360dc's result and script argument 0 to FUN_0039587c, runs FUN_003768dc and returns 3. */
u32 FUN_002c2070(void)
{
    u32 value;
    u32 arg;

    value = FUN_002360dc();
    arg = scrGetArg(0);
    FUN_0039587c(arg, value);
    FUN_003768dc();
    return 3;
}

} /* extern "C" */
