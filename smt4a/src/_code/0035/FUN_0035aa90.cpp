/* NON_MATCHING: earned-byte getter matches, but index/bit-constant saved registers are swapped and one compiler hint NOP precedes the bit-test branch. */
#include "gamedata/DataTable.h"
#include "shard/Shard003D.h"
#include "shard/ProgressUnlock.h"
#include "Model/MoriModelManager.h"

extern "C" {

/* Tests entry `id`'s bit in the save's earned set. */
static inline bool unlockIsEarned(s32 id)
{
    s32 byte = id / 8;
    s32 bit = id % 8;
    return (progressUnlockByteGet(&reinterpret_cast<GameBlock2830C *>(gameDataBlocksGetSaveData())->unlocks.earned[byte]) & (1 << bit)) != 0;
}

/* Returns the name of the index-th earned entry of data table 0x4a (0x2c-byte records), or "" when
 * fewer are earned. */
const char *FUN_0035aa90(s32 index)
{
    s32 count = dataTableGetCount(dataTableGet(0x4a, 0));
    s32 found = 0;
    for (s32 i = 0; i < count; i++) {
        ProgressUnlockCondition *entries = static_cast<ProgressUnlockCondition *>(dataTableGetEntries(dataTableGet(0x4a, 0)));
        ProgressUnlockCondition *record = &entries[i];
        if (record != NULL && unlockIsEarned(i)) {
            if (found == index) {
                return reinterpret_cast<const char *>(record);
            }
            found++;
        }
    }
    return "";
}
}
