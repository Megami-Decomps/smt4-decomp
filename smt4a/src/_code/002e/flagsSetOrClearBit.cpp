#include "common.h"

extern "C" {

/* Sets or clears bit 2 of `*flags`. */
void flagsSetOrClearBit(u32 *flags, s32 enable)
{
    u32 value;

    if (enable != 0) {
        value = *flags | 4;
    } else {
        value = *flags & 0xFFFFFFFB;
    }
    *flags = value;
}

} /* extern "C" */
