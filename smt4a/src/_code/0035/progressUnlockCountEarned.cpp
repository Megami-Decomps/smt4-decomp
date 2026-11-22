#include "gamedata/CampCecTable.h"
#include "shard/Shard003D.h"
#include "shard/ProgressUnlock.h"

/* unlockBitIsEarned with the byte read through the save-data byte accessor. */
static __inline bool unlockBitIsEarnedThroughGetter(s32 index)
{
    s32 byteIndex = index / 8;
    s32 bitIndex = index % 8;
    return (progressUnlockByteGet(&((GameBlock2830C *)gameDataBlocksGetSaveData())->unlocks.earned[byteIndex]) & (1u << bitIndex)) != 0;
}

extern "C" s32 progressUnlockCountEarned(void)
{
    s32 count = (s32)campCecCount();
    s32 earned = 0;
    for (s32 index = 0; index < count; ++index) {
        if (&campCecRecords()[index] == NULL) {
            continue;
        }
        if (unlockBitIsEarnedThroughGetter(index)) {
            ++earned;
        }
    }
    return earned;
}
