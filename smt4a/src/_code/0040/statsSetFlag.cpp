#include "shard/W4_W4Match6b_GameDataBlock.h"

extern "C" {

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

/* Set or clear one of the stats block's 32 persistent flags; indices past them are ignored. */
void statsSetFlag(u32 index, s32 enabled)
{
    if (index >= 32) {
        return;
    }
    StatsFlagView *block = reinterpret_cast<StatsFlagView *>(gameDataBlocksGetStats());
    bitArrayAssign(block->flags, index, enabled);
}
}
