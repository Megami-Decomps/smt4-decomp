#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
void countersAddSaturating(u32 index, s32 amount);

s32 scrCommAddCounterSaturating(u32 index)
{
    s32 counter = scrGetArg(index);
    s32 amount = scrGetArg(1);
    countersAddSaturating((u8)counter, amount);
    return 1;
}

} /* extern "C" */
