/* NON_MATCHING: the bit update matches, but the bank offset and indexed byte load are combined in a different order. */
#include "shard/W4_W4Match6b_GameDataBlock.h"

extern "C" StatsLeadingFlagView *gameDataBlocksGetStats();

// Set or clear a flag in the second 32-bit stats bank.
extern "C" void FUN_0040a42c(u32 index, s32 enabled)
{
    if (index >= 32)
        return;
    StatsLeadingFlagView *stats = gameDataBlocksGetStats();
    u8 mask = 1 << (index & 7);
    u8 *flag = &stats->second[index >> 3];
    if (enabled)
        *flag |= mask;
    else
        *flag &= ~mask;
}
