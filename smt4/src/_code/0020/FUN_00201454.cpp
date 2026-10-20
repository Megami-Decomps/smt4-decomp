#include "common.h"

extern "C" {

int FUN_00254434(u32 a, u32 b);
int FUN_0027db40(void);
extern u32 FUN_002592d8(void);
extern u32 scrGetArg(u32 index);

u32 FUN_00201454(void)
{
    u32 a = FUN_002592d8();
    u32 b = scrGetArg(0);

    FUN_00254434(b, a);
    FUN_0027db40();
    return 2;
}

} /* extern "C" */
