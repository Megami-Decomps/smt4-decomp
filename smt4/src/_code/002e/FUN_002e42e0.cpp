#include "common.h"

extern "C" {

extern void *g_btlTalk;

s32 scrGetArg(u32 index);
s32 FUN_003c07ac(void *talk, s32 value);

/* Script condition: FUN_003c07ac accepts argument zero for the battle talk. */
s32 FUN_002e42e0(void)
{
    return FUN_003c07ac(g_btlTalk, scrGetArg(0)) != 0;
}

} /* extern "C" */
