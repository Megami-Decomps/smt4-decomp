#include "common.h"

extern "C" {

void btlTalkBustUpSetUnk2F4(s32 value);
s32 scrGetArg(s32 index);

/* Script command: switches the bust-up flag on when the first argument is non-zero. */
u32 FUN_00300008(void)
{
    btlTalkBustUpSetUnk2F4(scrGetArg(0) != 0);
    return 1;
}

} /* extern "C" */
