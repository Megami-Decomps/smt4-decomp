#include "common.h"

extern "C" {

void FUN_003768dc(void);
void FUN_003847ac(u32 a, u32 b);
u32 scrGetArg(...);

/* Script command: passes script argument 0 and the (unindexed) first script argument to FUN_003847ac, runs FUN_003768dc and returns 3. */
u32 FUN_002a3de8(void)
{
    u32 first;
    u32 second;

    first = scrGetArg();
    second = scrGetArg(0);
    FUN_003847ac(second, first);
    FUN_003768dc();
    return 3;
}

} /* extern "C" */
