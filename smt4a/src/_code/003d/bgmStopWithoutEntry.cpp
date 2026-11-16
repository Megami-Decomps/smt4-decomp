#include "common.h"
#include "kernel/jyoucyuGetTableEntry.h"

extern "C" {

void bgmStop(s32 handle, u32 fade, s32 mode);

/* Stops all BGM with a 15-frame fade, unless the jyoucyu table entry 1 is set. */
void bgmStopWithoutEntry(void)
{
    if (jyoucyuGetTableEntry(1) == 0) {
        u32 fadeFrames = 15;
        s32 force = 0;
        bgmStop(-1, fadeFrames, force);
    }
}

} /* extern "C" */
