#include "common.h"

extern "C" {

extern int flagValueIsPositive(u32 id);

/* 1 when any of the flags 0x3B7-0x79E is set. */
u32 storyFlagRangeAnySet(void)
{
    u32 flag = 0x3b7;

    do {
        if (flagValueIsPositive(flag) != 0) {
            return 1;
        }
        flag = flag + 1;
    } while (flag <= 0x47e);
    flag = 0x47f;
    do {
        if (flagValueIsPositive(flag) != 0) {
            return 1;
        }
        flag = flag + 1;
    } while (flag <= 0x79e);
    return 0;
}

} /* extern "C" */
