#include "addon/aocMain.h"

extern "C" {

/* Whether bit 16 of the flags word at +0x754 is set. */
s32 objHasFlagBit16(AocMain *main)
{
    u32 flags = main->flags;
    u32 bit = (flags & 0x10000) >> 16;
    return bit ? 1 : 0;
}

} /* extern "C" */
