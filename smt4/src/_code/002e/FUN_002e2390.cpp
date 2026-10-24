#include "common.h"

extern "C" {

int FUN_00249c4c(u32 a, u32 b, int c);
int scrGetArg(...);

u32 FUN_002e2390(void)
{
    u32 a = scrGetArg(0);
    u32 b = scrGetArg(1);

    FUN_00249c4c(a, b, 0);
    return 1;
}

} /* extern "C" */
