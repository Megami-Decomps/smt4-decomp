#include "shard/W5_W5Match2_QuestFlags.h"
extern "C" {
QuestFlagBlock *gameDataBlocksGetStats(void);
/* Test a packed quest-status bit. */
s32 questTestPackedFlag(u32 index)
{
    if (index >= 32) {
        return 0;
    }
    u8 *bits = gameDataBlocksGetStats()->bits;
    u8 mask = (u8)(1u << (index & 7));
    u32 byte = bits[index >> 3];
    return (mask & byte) != 0;
}
}
