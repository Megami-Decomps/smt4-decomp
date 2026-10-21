/* NON_MATCHING: retail uses `mov r2, #0` where armcc emits `mov r2, #0`. */
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
