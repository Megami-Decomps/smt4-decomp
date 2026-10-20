#include "common.h"

extern "C" {

/* Sets or clears bit 7 of the byte `*flags`. */
void FUN_0030fbca(u8 *flags, s32 enable)
{
    if (enable != 0) {
        *flags = *flags | 0x80;
        return;
    }
    *flags = *flags & 0x7F;
}

} /* extern "C" */
