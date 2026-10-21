/* NON_MATCHING: table loads use different registers and compiler emits trailing literal table words. */
#include "common.h"


extern "C" {
/* Reads or updates the requested state. */
s32 FUN_0028886c(s32 left, s32 right)
{
    const s8 priority[8] = {0, 2, -1, 3, 4, 1, 0, 0};
    s32 result = 0;
    if (priority[right] < priority[left]) { result = -1; }
    if (priority[left] < priority[right]) { result = 1; }
    return result;
}
}
