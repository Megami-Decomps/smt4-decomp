#include "common.h"

extern "C" {

int btlGetMainState(void);
int FUN_00295228(u32 a, u32 b);
extern u32 scrGetArg(u32 index);

u32 FUN_0030bb94(void)
{
    u32 a;
    u32 b;

    btlGetMainState();
    a = scrGetArg(0);
    b = scrGetArg(1);
    FUN_00295228(a, b);
    return 1;
}

} /* extern "C" */
