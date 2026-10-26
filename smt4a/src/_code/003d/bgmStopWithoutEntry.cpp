#include "common.h"
#include "kernel/jyoucyuGetTableEntry.h"

extern "C" {

void bgmStop(s32 handle, u32 fade, s32 mode);

static void bgmStopAll(u32 fade, s32 mode)
{
    bgmStop(-1, fade, mode);
}

void bgmStopWithoutEntry(void)
{
    if (jyoucyuGetTableEntry(1) == 0) {
        bgmStopAll(15, 0);
    }
}

} /* extern "C" */
