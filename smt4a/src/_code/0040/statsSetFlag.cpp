/* NON_MATCHING: byte-flag address formation and mask allocation differ from retail. */
#include "shard/GameDataBlocks.h"

extern "C" StatsFlagView *gameDataBlocksGetStats(void);

/* Set or clear one of the stats block's 32 persistent flags. */
extern "C" void statsSetFlag(u32 index, bool enabled)
{
    if (index >= 32)
        return;
    StatsFlagView *stats = gameDataBlocksGetStats();
    if (enabled)
        stats->flags[index >> 3] |= (u8)(1 << (index & 7));
    else
        stats->flags[index >> 3] &= ~(u8)(1 << (index & 7));
}
