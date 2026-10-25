/* NON_MATCHING: retail issues `cmp enabled, #0` right after the bit-index `and`; armcc schedules it after the flag-byte load. */
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
    u8 *flags = block->questFlags;
    u8 *flag = &flags[bit >> 3];
    if (enabled)
        *flag |= mask;
    else
        *flag &= ~mask;
}
