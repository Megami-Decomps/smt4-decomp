/* NON_MATCHING: enabled is compared after the byte load rather than before retail's mask-shift sequence. */
#include "shard/GameDataBlocks.h"

extern "C" QuestCenterFlagView *gameGetQuestCenterBlock(void);

/* Update one of the quest-center block's 32 flags. */
extern "C" void questCenterSetFlag(u32 index, s32 enabled)
{
    if (index >= 32) {
        return;
    }
    u8 *flags = gameGetQuestCenterBlock()->flags;
    u8 mask = (u8)(1 << (index & 7));
    u8 *flag = &flags[index >> 3];
    if (enabled) {
        *flag |= mask;
    } else {
        *flag &= ~mask;
    }
}
