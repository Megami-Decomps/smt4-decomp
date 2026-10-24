#include "common.h"

extern "C" {

int scrSetResult(void);
int scrGetArg(...);
int questReadRuntimeFlag(int a, u32 b);

u32 scrCommGameFlagEntryGetBit(void)
{
    u16 a = scrGetArg(0);
    u32 b = scrGetArg(1);

    questReadRuntimeFlag(a, b);
    scrSetResult();
    return 1;
}

} /* extern "C" */
