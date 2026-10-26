#include "shard/W4_W4Match6b_GameDataBlock.h"


/* Read one of the stats block's 32 persistent flags. */
extern "C" bool statsTestFlag(u32 index)
{
    if (index >= 32)
        return false;
    StatsFlagView *stats = reinterpret_cast<StatsFlagView *>(gameDataBlocksGetStats());
    const u8 *flags = stats->flags;
    u8 mask = (u8)(1u << (index & 7));
    u8 byte = flags[index >> 3];
    return (byte & mask) != 0;
}
