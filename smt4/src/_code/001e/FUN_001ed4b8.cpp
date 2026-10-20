#include "common.h"

extern "C" {

int FUN_0025930c(u32 a, u32 b);
int FUN_0027db40(void);
int scrGetArg(...);

u32 FUN_001ed4b8(void)
{
    u32 a = scrGetArg();
    u32 b = scrGetArg(0);

    FUN_0025930c(b, a);
    FUN_0027db40();
    return 2;
}

} /* extern "C" */
