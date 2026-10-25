/* NON_MATCHING: retail materialises the arguments as r1, r2, r0; the build orders them r2, r1, r0. */
#include "common.h"

extern "C" {

extern void *jyoucyuGetTableEntry(s32 index);
extern void bgmStop(s32 handle, s32 fade, s32 mode);

/* Stops all BGM with a 15-frame fade, unless the jyoucyu table entry 1 is set. */
void FUN_0032c69c(void)
{
    if (jyoucyuGetTableEntry(1) == NULL) {
        bgmStop(-1, 15, 0);
    }
}

} /* extern "C" */
