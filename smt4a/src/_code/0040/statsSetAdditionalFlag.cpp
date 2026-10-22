/* NON_MATCHING: enabled is compared after the byte load rather than before retail's mask-shift sequence. */
#include "shard/W4_W4Match6b_GameDataBlock.h"

extern "C" StatsAdditionalFlagView *gameDataBlocksGetStats(void);

/* Update one of the stats block's additional 32 flags. */
extern "C" void statsSetAdditionalFlag(u32 index, s32 enabled)
{
    if (index >= 32) {
        return;
    }
    u8 *flags = gameDataBlocksGetStats()->flags;
    u8 mask = (u8)(1 << (index & 7));
    u8 *flag = &flags[index >> 3];
    if (enabled) {
        *flag |= mask;
    } else {
        *flag &= ~mask;
    }
}
