#include "common.h"

extern "C" void bgmRequestSelectedChannelFade(s32 value);

extern "C" s32 FUN_002ef270(void)
{
    bgmRequestSelectedChannelFade(30);
    return 1;
}
