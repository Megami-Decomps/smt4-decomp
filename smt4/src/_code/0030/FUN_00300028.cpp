#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
void FUN_002954f4(u16 id, s32 mode);
void btlTalkBustUpSetUnk2F4(s32 value);

/* Script command: runs FUN_002954f4 for the id in argument zero and flags the talk bust-up. */
s32 FUN_00300028(void)
{
    FUN_002954f4(scrGetArg(0), 1);
    btlTalkBustUpSetUnk2F4(1);
    return 1;
}

} /* extern "C" */
