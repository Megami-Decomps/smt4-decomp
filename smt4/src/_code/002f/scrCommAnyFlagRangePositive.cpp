#include "common.h"

extern "C" {

s32 flagValueIsPositive(u32 flag);
void scrSetResult(bool value);

/* Script command: reports whether any of the flags 0x79f..0x802 holds a positive value. Returns 1. */
u32 scrCommAnyFlagRangePositive(void)
{
    u8 any = 0;
    u32 flag;

    for (flag = 0x79f; flag <= 0x802; flag++) {
        if (flagValueIsPositive(flag) != 0) {
            any = 1;
        }
    }
    scrSetResult(any);
    return 1;
}

} /* extern "C" */
