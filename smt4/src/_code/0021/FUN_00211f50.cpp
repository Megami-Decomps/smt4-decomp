#include "common.h"

extern "C" {

int FUN_0025930c(u32 a, u32 b);
int FUN_0026f960(u32 value);
extern u32 scrGetArg(u32 index);

u32 FUN_00211f50(void)
{
    u32 value = scrGetArg(0);
    u32 b = scrGetArg(2);
    u32 a = scrGetArg(1);

    FUN_0025930c(a, b);
    FUN_0026f960(value);
    return 2;
}

} /* extern "C" */
