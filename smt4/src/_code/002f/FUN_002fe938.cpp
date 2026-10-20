#include "common.h"

extern "C" {

int scrGetArg(...);
int FUN_002df598(u32 a, u32 b);
int FUN_002e8530(void);

u32 FUN_002fe938(void)
{
    u32 b = scrGetArg();
    u32 a = scrGetArg(0);

    FUN_002df598(a, b);
    FUN_002e8530();
    return 1;
}

} /* extern "C" */
