#include "common.h"

extern "C" {

extern void *g_btlTalk;

s32 scrGetArg(u32 index);
s32 FUN_004c96f8(void *talk, s32 value);

/* Script condition: FUN_004c96f8 accepts argument zero for the battle talk. */
s32 FUN_0035f988(void)
{
    return FUN_004c96f8(g_btlTalk, scrGetArg(0)) != 0;
}

} /* extern "C" */
