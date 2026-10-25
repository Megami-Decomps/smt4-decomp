/* NON_MATCHING: fade and mode argument constants are materialized in the opposite order. */
#include "common.h"
#include "kernel/jyoucyuGetTableEntry.h"

extern "C" {

void bgmStop(s32 handle, u32 fade, s32 mode);

void bgmStopWithoutEntry(void)
{
    if (jyoucyuGetTableEntry(1) == 0) {
        bgmStop(-1, 15, 0);
    }
}

} /* extern "C" */
