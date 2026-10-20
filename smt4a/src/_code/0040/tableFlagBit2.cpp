#include "shard/Shard0040.h"

extern "C" {

extern u8 *gameDataBlocksGetHalf280C4(s32 index);

u32 tableFlagBit2(s32 index)
{
    u8 *flags = gameDataBlocksGetHalf280C4(index);

    return (*flags & 4) >> 2;
}

} /* extern "C" */
