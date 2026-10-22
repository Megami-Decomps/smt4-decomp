/* NON_MATCHING: compiler combines the stats base and byte index before the 0x264 member offset. */
#include "shard/W4_W4Match6b_GameDataBlock.h"

extern "C" StatsFlagView *gameDataBlocksGetStats(void);

/* Read one of the stats block's 32 persistent flags. */
extern "C" bool statsTestFlag(u32 index)
{
    if (index >= 32)
        return false;
    StatsFlagView *stats = gameDataBlocksGetStats();
    return (stats->flags[index >> 3] & (u8)(1 << (index & 7))) != 0;
}
