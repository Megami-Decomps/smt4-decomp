#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
s32 flagBitIsSet(s32 bit);
void scrSetResult(s32 result);
}

extern "C" s32 scrFlagBitIsSet(void)
{
    scrSetResult(flagBitIsSet(scrGetArg(0)));
    return 1;
}
