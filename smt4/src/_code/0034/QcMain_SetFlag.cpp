/* NON_MATCHING: retail rebases the flag bank by +12 before the indexed byte access; armcc folds +12 into the final load/store instead. */
#include "common.h"
#include "quest_center/qcMain.h"

extern "C" QcFlagBlock *gameGetQuestCenterBlock();

// Update one of the 32 persistent quest bits.
extern "C" void QcMain_SetFlag(u32 bit, s32 enabled)
{
    if (bit >= 32)
        return;
    QcFlagBlock *block = gameGetQuestCenterBlock();
    u8 mask = 1 << (bit & 7);
    if (enabled)
        block->questFlags[bit >> 3] |= mask;
    else
        block->questFlags[bit >> 3] &= ~mask;
}
