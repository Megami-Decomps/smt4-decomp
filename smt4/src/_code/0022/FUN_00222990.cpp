#include "common.h"

extern "C" {

int FUN_002879dc(u32 a, u32 b, int c);
int scrGetArg(...);

u32 FUN_00222990(void)
{
    u32 a = scrGetArg();
    u32 b = scrGetArg(0);

    FUN_002879dc(b, a, 0);
    return 1;
}

} /* extern "C" */
