#include "shard/W4_W4Match6b_GameDataBlock.h"

extern "C" {
    u8 *gameGetQuestCenterBlock(void);
}


// Set or clear a flag in the second 32-bit stats bank.
extern "C" void questCenterSetFlag(u32 index, s32 enabled)
{
    if (index >= 32)
        return;
    StatsLeadingFlagView *stats = reinterpret_cast<StatsLeadingFlagView *>(gameGetQuestCenterBlock());
    u8 *bank = stats->second;
    u8 mask = 1 << (index & 7);
    if (enabled) {
        u8 *flag = &bank[index >> 3];
        *flag |= mask;
    } else {
        u8 *flag = &bank[index >> 3];
        *flag &= ~mask;
    }
}
