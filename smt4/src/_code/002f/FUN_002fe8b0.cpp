#include "common.h"

extern "C" {

int FUN_001e2478(u32 a, u32 b, u32 c, u32 d);
extern u32 scrGetArg(u32 index);

u32 FUN_002fe8b0(void)
{
    u32 d = scrGetArg(3);
    u32 c = scrGetArg(2);
    u32 b = scrGetArg(1);
    u32 a = scrGetArg(0);

    FUN_001e2478(a, b, c, d);
    return 1;
}

} /* extern "C" */
