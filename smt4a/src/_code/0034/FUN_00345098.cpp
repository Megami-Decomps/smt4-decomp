#include "common.h"


extern "C" {
/* Compare the two state ids through their signed priority table. */
s32 FUN_00345098(s32 left, s32 right)
{
    const s8 priority[8] = {0, 2, -1, 3, 4, 1, 0, 0};
    s32 result = 0;
    if (priority[left] > priority[right]) { result = -1; }
    if (priority[left] < priority[right]) { result = 1; }
    return result;
}
}
