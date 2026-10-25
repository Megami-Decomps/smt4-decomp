#include "shard/W5_W5Match2_QuestFlags.h"
extern "C" {
QuestFlagBlock *gameDataBlocksGetStats(void);

/* Sets or clears bit `index` of a packed bit array. */
static __inline void bitArrayAssign(u8 *bits, u32 index, s32 enabled)
{
    u8 *byte = &bits[index >> 3];
    u8 mask = (u8)(1u << (index & 7));
    if (enabled) {
        *byte |= mask;
    } else {
        *byte &= ~mask;
    }
}

/* Set or clear a packed quest-status bit; indices past the 32 stored bits are ignored. */
void questSetPackedFlag(u32 index, s32 enabled)
{
    if (index >= 32) {
        return;
    }
    QuestFlagBlock *block = gameDataBlocksGetStats();
    bitArrayAssign(block->bits, index, enabled);
}
}
