/* NON_MATCHING: retail adds the byte index to the save pointer before the 0x282ec offset and loads with no immediate; branch offsets follow. */
#include "gamedata/DataTable.h"
#include "shard/Shard003D.h"
#include "shard/ProgressUnlock.h"

extern "C" {

GameBlock2830C *gameDataBlocksGetSaveData(void);

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
        s32 byte = index / 8;
        s32 bit = index % 8;
        u8 *earnedBits = gameDataBlocksGetSaveData()->unlocks.earned;
        if (earnedBits[byte] & (1 << bit)) {
            if (earned == nth) {
                return index;
            }
            earned++;
        }
    }
    return index;
}

} /* extern "C" */
