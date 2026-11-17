#include "common.h"
#include "gamedata/NkmBaseRecord.h"

extern "C" {

/* Sort comparison of two devil ids: by base MP descending, then level ascending, then id descending. */
s32 FUN_003acd88(u16 *idA, u16 *idB)
{
    NkmBaseRecord *recordA = nkmBaseGetRecord(*idA);
    NkmBaseRecord *recordB = nkmBaseGetRecord(*idB);
    s32 diff = recordB->baseMp - recordA->baseMp;

    if (diff == 0) {
        recordA = nkmBaseGetRecord(*idA);
        recordB = nkmBaseGetRecord(*idB);
        diff = recordA->level - recordB->level;
        if (diff == 0) {
            diff = *idB - *idA;
        }
    }
    return diff;
}

} /* extern "C" */
