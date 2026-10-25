#include "gamedata/FlagsB.h"

extern "C" {

u32 flagsBGetBit2(s32 index)
{
    u8 *flags = flagsBGetPtr(index);

    return (*flags & 4) >> 2;
}

} /* extern "C" */
