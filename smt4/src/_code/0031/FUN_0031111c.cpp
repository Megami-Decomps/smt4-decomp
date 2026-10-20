#include "common.h"

extern "C" {

int FUN_002d4e58(u32 a, u32 b, u32 c);
extern u32 scrGetArg(u32 index);

u32 FUN_0031111c(void)
{
    u32 c = scrGetArg(2);
    u32 b = scrGetArg(1);
    u32 a = scrGetArg(0);

    FUN_002d4e58(a, b, c);
    return 1;
}

} /* extern "C" */
