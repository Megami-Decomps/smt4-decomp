/* NON_MATCHING: fade and mode argument constants are materialized in the opposite order. */
#include "common.h"

extern "C" {

void *jyoucyuGetTableEntry(s32 index);
void bgmStop(s32 handle, s32 fade, s32 mode);

void bgmStopWithoutEntry(void)
{
    if (jyoucyuGetTableEntry(1) == NULL) {
        bgmStop(-1, 15, 0);
    }
}

} /* extern "C" */
