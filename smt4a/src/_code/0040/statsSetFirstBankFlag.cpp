#include "shard/GameDataBlocks.h"

extern "C" StatsLeadingFlagView *gameDataBlocksGetStats();

// Set or clear a flag in the first 32-bit stats bank.
extern "C" void statsSetFirstBankFlag(u32 index, s32 enabled)
{
    if (index >= 32)
        return;
    StatsLeadingFlagView *stats = gameDataBlocksGetStats();
    u8 mask = 1 << (index & 7);
    u8 *flag = &stats->first[index >> 3];
    if (enabled)
        *flag |= mask;
    else
        *flag &= ~mask;
}
