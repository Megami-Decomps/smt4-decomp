#include "shard/W5_W5Match2_QuestFlags.h"

extern "C" {

QuestFlagBlock *gameDataBlocksGetStats(void); // declcheck: local (returns the block as the quest flags, as questTestPackedFlag does)

/* Tests flag `index` (0 to 31) of the quest center block's second flag set. */
s32 questCenterTestFlag(u32 index)
{
    if (index >= 32) {
        return 0;
    }
    u8 *flags = gameDataBlocksGetStats()->flags;
    u8 mask = (u8)(1u << (index & 7));
    u32 byte = flags[index >> 3];
    return (mask & byte) != 0;
}

} /* extern "C" */
