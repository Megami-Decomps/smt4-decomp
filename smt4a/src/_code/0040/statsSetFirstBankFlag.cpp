#include "shard/W4_W4Match6b_GameDataBlock.h"


// Set or clear a flag in the first 32-bit stats bank.
extern "C" void statsSetFirstBankFlag(u32 index, s32 enabled)
{
    if (index >= 32)
        return;
    StatsLeadingFlagView *stats = reinterpret_cast<StatsLeadingFlagView *>(gameDataBlocksGetStats());
    u8 mask = 1 << (index & 7);
    u8 *flag = &stats->first[index >> 3];
    if (enabled)
        *flag |= mask;
    else
        *flag &= ~mask;
}
