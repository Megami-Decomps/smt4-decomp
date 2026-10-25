#include "shard/Shard0048.h"
#include "gamedata/FlagValueIsPositive.h"

extern "C" {

extern s32 FUN_001ba3d4(s32 index);

u8 flagValueIsPositive(s32 index)
{
    return 0 < FUN_001ba3d4(index);
}

} /* extern "C" */
