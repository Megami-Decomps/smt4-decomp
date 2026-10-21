#include "common.h"

extern "C" {
s32 FUN_002c2758(u16 index);
void scrSetResult(s32 result);

// Return the first index whose state is one, or zero if none is active.
u32 scrCommFindFirstActiveDataFlag(void)
{
    u16 selected = 0;
    for (u16 index = 0; index < 32; ++index) {
        if (FUN_002c2758(index) == 1) {
            selected = index;
            break;
        }
    }
    scrSetResult(selected);
    return 1;
}
}
