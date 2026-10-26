#include "common.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"

extern "C" {

extern void bgmStop(s32 handle, u32 fade, s32 mode);

static void bgmStopAll(u32 fade, s32 mode)
{
    bgmStop(-1, fade, mode);
}

/* Stops all BGM with a 15-frame fade, unless the jyoucyu table entry 1 is set. */
void FUN_0032c69c(void)
{
    if (jyoucyuGetTableEntry(1) == NULL) {
        bgmStopAll(15, 0);
    }
}

} /* extern "C" */
