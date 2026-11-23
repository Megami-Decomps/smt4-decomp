#include "gamedata/CampCecTable.h"
#include "shard/Shard003D.h"
#include "shard/ProgressUnlock.h"
#include "Model/MoriModelManager.h"

extern "C" {

/* Returns the title of the index-th earned title (CampCecTable.tbb), or "" when fewer are earned. */
const char *progressUnlockGetNthEarnedTitle(s32 index)
{
    s32 count = campCecCount();
    s32 found = 0;
    for (s32 i = 0; i < count; i++) {
        const CampCecRecord *record = campCecRecordAt(i);
        if (record != NULL && unlockBitIsEarned(i)) {
            if (found == index) {
                return record->title;
            }
            found++;
        }
    }
    return "";
}
} /* extern "C" */
