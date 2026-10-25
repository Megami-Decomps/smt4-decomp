/* NON_MATCHING: retail adds the byte index to the save pointer before the 0x282ec offset and loads with no immediate; branch offsets follow. */
#include "gamedata/DataTable.h"
#include "shard/Shard003D.h"
#include "shard/ProgressUnlock.h"

extern "C" {

GameBlock2830C *gameDataBlocksGetSaveData(void);

static __inline bool unlockBitIsEarned(s32 index)
{
    s32 byteIndex = index / 8;
    s32 bitIndex = index % 8;
    return (progressUnlockByteGet(&gameDataBlocksGetSaveData()->unlocks.earned[byteIndex]) & (1u << bitIndex)) != 0;
}

/* Returns the table index of the nth earned progress unlock, or the table count if fewer are earned. */
s32 FUN_00344bc8(s32 nth)
{
    s32 count = dataTableGetCount(dataTableGet(0x4a, 0));
    s32 index = 0;
    s32 earned = 0;

    for (; index < count; index++) {
        ProgressUnlockCondition *entries =
            static_cast<ProgressUnlockCondition *>(dataTableGetEntries(dataTableGet(0x4a, 0)));
        if (&entries[index] == NULL) {
            continue;
        }
        if (!unlockBitIsEarned(index)) {
            continue;
        }
        if (earned == nth) {
            return index;
        }
        earned++;
    }
    return index;
}

} /* extern "C" */
