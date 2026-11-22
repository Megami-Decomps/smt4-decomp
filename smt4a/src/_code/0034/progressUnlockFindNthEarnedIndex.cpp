#include "gamedata/CampCecTable.h"
#include "shard/Shard003D.h"
#include "shard/ProgressUnlock.h"
#include "Model/MoriModelManager.h"

extern "C" {


/* Returns the table index of the nth earned progress unlock, or the table count if fewer are earned. */
s32 progressUnlockFindNthEarnedIndex(s32 nth)
{
    s32 count = campCecCount();
    s32 index = 0;
    s32 earned = 0;

    for (; index < count; index++) {
        if (&campCecRecords()[index] == NULL) {
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
