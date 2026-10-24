#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
void bannerShow(s32 value);

/* Script command: passes its first argument to bannerShow. */
s32 FUN_002dc0b4(void)
{
    bannerShow(scrGetArg(0));
    return 1;
}
}
