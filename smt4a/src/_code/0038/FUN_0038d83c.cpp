#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
void scrSetResult(s32 result);
int btlTalkBustUpSetUnk2F4(int enabled);
/* Script command: sets the bust-up flag from its first argument. */
s32 FUN_0038d83c(void)
{
    btlTalkBustUpSetUnk2F4(scrGetArg(0) != 0);
    return 1;
}
}
