#include "shard/Shard0048.h"
#include "gamedata/FlagValueIsPositive.h"

extern "C" {

extern s32 flagValueRead(s32 index);

u8 flagValueIsPositive(s32 index)
{
    return 0 < flagValueRead(index);
}

} /* extern "C" */
