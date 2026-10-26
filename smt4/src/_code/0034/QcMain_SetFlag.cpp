#include "shard/W4_W4Match6b_GameDataBlock.h"

extern "C" {
    u8 *gameGetQuestCenterBlock(void);
}


/* Update one of the stats block's additional 32 flags. */
extern "C" void QcMain_SetFlag(u32 index, s32 enabled)
{
    if (index >= 32) {
        return;
    }
    StatsAdditionalFlagView *stats = reinterpret_cast<StatsAdditionalFlagView *>(gameGetQuestCenterBlock());
    u8 *bank = stats->flags;
    u8 mask = 1 << (index & 7);
    if (enabled) {
        u8 *flag = &bank[index >> 3];
        *flag |= mask;
    } else {
        u8 *flag = &bank[index >> 3];
        *flag &= ~mask;
    }
}
