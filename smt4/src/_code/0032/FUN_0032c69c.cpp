/* NON_MATCHING: retail materialises the arguments as r1, r2, r0; the build orders them r2, r1, r0. */
#include "common.h"

extern "C" {

extern int jyoucyuGetTableEntry(u32 id);
extern int bgmStop(u32 channel, u32 fadeFrames, int force);

/* Stops all BGM with a 15-frame fade, unless the jyoucyu table entry 1 is set. */
void FUN_0032c69c(void)
{
    if (jyoucyuGetTableEntry(1) == 0) {
        bgmStop(0xffffffff, 15, 0);
    }
}

} /* extern "C" */
