#include "gamedata/FlagsB.h"

extern "C" {

u8 flagsBGetBit0(s32 index)
{
    u8 *flags = flagsBGetPtr(index);

    return *flags & 1;
}

} /* extern "C" */
