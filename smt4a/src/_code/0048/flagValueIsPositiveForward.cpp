#include "gamedata/FlagValueIsPositive.h"

extern "C" {

u8 flagValueIsPositiveForward(s32 index)
{
    return flagValueIsPositive(index);
}

} /* extern "C" */
