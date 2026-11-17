/* NON_MATCHING: only the saved registers of the index argument and the bit constant are swapped (retail index fp, constant sl). */
#include "gamedata/CampCecTable.h"
#include "shard/Shard003D.h"
#include "shard/ProgressUnlock.h"
#include "Model/MoriModelManager.h"

extern "C" {

/* Tests entry `id`'s bit in the save's earned set. */
static __inline bool unlockIsEarned(s32 id)
{
    s32 byte = id / 8;
    s32 bit = id % 8;
    const u8 *earnedByte = &reinterpret_cast<GameBlock2830C *>(gameDataBlocksGetSaveData())->unlocks.earned[byte];
    return (*earnedByte & (1u << bit)) != 0;
}

/* Returns the title of the index-th earned title (CampCecTable.tbb), or "" when fewer are earned. */
const char *FUN_0035aa90(s32 index)
{
    s32 count = campCecCount();
    s32 found = 0;
    for (s32 i = 0; i < count; i++) {
        CampCecRecord *record = &campCecRecords()[i];
        if (record != NULL && unlockIsEarned(i)) {
            if (found == index) {
                return record->title;
            }
            found++;
        }
    }
    return "";
}
}
