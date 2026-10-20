#include "common.h"

extern "C" {

int scrSetResult(void);
int scrGetArg(...);
int FUN_00298fa0(int a, u32 b);

u32 FUN_002e2994(void)
{
    u16 a = scrGetArg();
    u32 b = scrGetArg(1);

    FUN_00298fa0(a, b);
    scrSetResult();
    return 1;
}

} /* extern "C" */
