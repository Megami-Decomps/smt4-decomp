#include "camp/Unite/UniteGlobals.h"

extern "C" {

void scrSetResult(s32 result);

/* Script command: reports the unite block's word at 0x67c8. */
u32 FUN_003cc9f0(void)
{
    scrSetResult(g_unite->pairSort.unk67C8);
    return 1;
}

} /* extern "C" */
