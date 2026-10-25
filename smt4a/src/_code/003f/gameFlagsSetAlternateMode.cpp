#include "gamedata/FlagsB.h"

extern "C" {

void gameFlagsSetAlternateMode(s32 index, s8 value)
{
    u8 *flags = flagsBGetPtr(index);

    *flags = (*flags & ~2) | (value << 1);
}

}
