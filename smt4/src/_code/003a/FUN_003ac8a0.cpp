#include "common.h"
#include "gamedata/NkmBaseRecord.h"

extern "C" {

/* Sort comparison of two devil ids: by base HP ascending, then level descending, then id ascending. */
s32 FUN_003ac8a0(u16 *idA, u16 *idB)
{
    NkmBaseRecord *recordA = nkmBaseGetRecord(*idA);
    NkmBaseRecord *recordB = nkmBaseGetRecord(*idB);
    s32 diff = recordA->baseHp - recordB->baseHp;

    if (diff == 0) {
        recordA = nkmBaseGetRecord(*idA);
        recordB = nkmBaseGetRecord(*idB);
        diff = recordB->level - recordA->level;
        if (diff == 0) {
            diff = *idA - *idB;
        }
    }
    return diff;
}

} /* extern "C" */
