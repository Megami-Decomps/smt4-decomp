#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
u32 FUN_003e4b2c(u32 id, s32 targetLevel, s32 maximumIncrease);

s32 scrCommForwardTriple(void)
{
    s32 id = scrGetArg(0);
    s32 targetLevel = scrGetArg(1);
    s32 maximumIncrease = scrGetArg(2);
    FUN_003e4b2c((u16)id, targetLevel, maximumIncrease);
    return 1;
}

} /* extern "C" */
