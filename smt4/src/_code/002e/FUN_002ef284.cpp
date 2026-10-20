#include "common.h"

extern "C" {

int FUN_0025930c(u32 a, u32 b);
int FUN_0027d8b4(u32 a);
int FUN_002eb674(void);
extern u32 scrGetArg(u32 index);

u32 FUN_002ef284(void)
{
    u32 a = scrGetArg(0);
    u32 b = scrGetArg(1);
    u32 c = scrGetArg(2);

    FUN_0025930c(b, c);
    FUN_0027d8b4(a);
    FUN_002eb674();
    return 1;
}

} /* extern "C" */
