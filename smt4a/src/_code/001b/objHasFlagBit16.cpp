#include "common.h"

extern "C" {

/* Whether bit 16 of the flags word at +0x754 is set. */
s32 objHasFlagBit16(u8 *obj)
{
    u32 flags = *(u32 *)(obj + 0x754);
    u32 bit = (flags & 0x10000) >> 16;
    return bit ? 1 : 0;
}

} /* extern "C" */
