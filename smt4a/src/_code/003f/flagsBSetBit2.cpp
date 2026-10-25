#include "gamedata/FlagsB.h"

extern "C" {

/* Sets bit 2 of the flags byte of the object returned by flagsBGetPtr to the given value. */
void flagsBSetBit2(s32 index, s8 enabled)
{
    u8 *flags = flagsBGetPtr(index);

    *flags = (*flags & ~4) | (enabled << 2);
}

} /* extern "C" */
