/* NON_MATCHING: only the position of `cmp enabled` differs (retail issues it right after the mask and before the load; built after the writeback load). */
#include "shard/W4_W4Match6b_GameDataBlock.h"


/* Set or clear one of the stats block's 32 persistent flags. */
extern "C" void statsSetFlag(u32 index, bool enabled)
{
    if (index >= 32)
        return;
    u8 *flags = reinterpret_cast<StatsFlagView *>(gameDataBlocksGetStats())->flags;
    u8 *byte = &flags[index >> 3];
    u8 mask = 1 << (index & 7);
    if (enabled)
        *byte |= mask;
    else
        *byte &= ~mask;
}
