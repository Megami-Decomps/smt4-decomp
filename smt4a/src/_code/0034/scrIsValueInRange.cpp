#include "common.h"


extern "C" {
s32 scrGetArg(u32 index);
void scrSetResult(u32 value);
u32 scrIsValueInRange(void)
{
    s32 value = scrGetArg(0);
    s32 minimum = scrGetArg(1);
    s32 maximum = scrGetArg(2);
    scrSetResult(minimum <= value && value <= maximum);
    return 1;
}
}
