#include "common.h"
#include "quest_center/qcMain.h"

extern "C" QcFlagBlock *gameGetQuestCenterBlock();

// Update one of the 32 persistent quest-center state bits.
extern "C" void qcSetPersistentStateFlag(u32 bit, s32 enabled)
{
    if (bit >= 32)
        return;
    QcFlagBlock *block = gameGetQuestCenterBlock();
    u8 mask = 1 << (bit & 7);
    u8 *flags = &block->stateFlags[bit >> 3];
    if (enabled)
        *flags |= mask;
    else
        *flags &= ~mask;
}
