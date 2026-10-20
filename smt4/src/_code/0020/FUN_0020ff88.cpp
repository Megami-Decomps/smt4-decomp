#include "common.h"

extern "C" {

/* Sets or clears flag bit 2. */
void FUN_0020ff88(u32 *flags, int set)
{
    u32 value;

    if (set != 0) {
        value = *flags | 4;
    } else {
        value = *flags & 0xfffffffb;
    }
    *flags = value;
}

} /* extern "C" */
