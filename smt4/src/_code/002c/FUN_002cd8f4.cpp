#include "common.h"

extern "C" void bgmStopAllForced(s32 first, s32 second);

extern "C" s32 FUN_002cd8f4(void)
{
    bgmStopAllForced(0, 1);
    return 1;
}
