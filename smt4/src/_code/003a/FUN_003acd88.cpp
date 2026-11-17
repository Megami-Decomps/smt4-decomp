#include "common.h"
#include "gamedata/DevilRecord.h"

extern "C" {

/* Sort comparison of two devil ids: by base MP descending, then level ascending, then id descending. */
s32 FUN_003acd88(u16 *idA, u16 *idB)
{
    DevilRecord *recordA = devilGetRecord(*idA);
    DevilRecord *recordB = devilGetRecord(*idB);
    s32 diff = recordB->baseMp - recordA->baseMp;

    if (diff == 0) {
        recordA = devilGetRecord(*idA);
        recordB = devilGetRecord(*idB);
        diff = recordA->level - recordB->level;
        if (diff == 0) {
            diff = *idB - *idA;
        }
    }
    return diff;
}

} /* extern "C" */
