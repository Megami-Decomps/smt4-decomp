#include "gamedata/FlagsB.h"

extern "C" {

u32 flagsBGetBit1(s32 index)
{
    u8 *flags = flagsBGetPtr(index);

    return (*flags & 2) >> 1;
}

} /* extern "C" */
