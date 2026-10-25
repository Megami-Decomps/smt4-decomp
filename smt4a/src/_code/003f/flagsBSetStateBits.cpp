#include "gamedata/FlagsB.h"

extern "C" {

/* Sets the low two flag bits and clears bit 2. */
void flagsBSetStateBits(s32 index)
{
    u8 *flags = flagsBGetPtr(index);

    *flags = (*flags & ~4) | 3;
}

} /* extern "C" */
