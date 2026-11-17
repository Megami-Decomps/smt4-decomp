#include "gamedata/CampCecTable.h"
#include "shard/Shard003D.h"
#include "shard/ProgressUnlock.h"
extern "C" GameBlock2830C* gameDataBlocksGetSaveData(void);

static __inline bool unlockBitIsEarned(s32 index)
{
    s32 byteIndex = index / 8;
    s32 bitIndex = index % 8;
    return (progressUnlockByteGet(&gameDataBlocksGetSaveData()->unlocks.earned[byteIndex]) & (1u << bitIndex)) != 0;
}

extern "C" s32 progressUnlockCountEarned(void)
{
    s32 count = (s32)campCecCount();
    s32 earned = 0;
    for (s32 index = 0; index < count; ++index) {
        if (&campCecRecords()[index] == NULL) {
            continue;
        }
        if (unlockBitIsEarned(index)) {
            ++earned;
        }
    }
    return earned;
}
