#include "common.h"
#include "gamedata/DevilRecord.h"

extern "C" {

/* Sort comparison of two devil ids: by base HP ascending, then level descending, then id ascending. */
s32 FUN_003ac8a0(u16 *idA, u16 *idB)
{
    DevilRecord *recordA = devilGetRecord(*idA);
    DevilRecord *recordB = devilGetRecord(*idB);
    s32 diff = recordA->baseHp - recordB->baseHp;

    if (diff == 0) {
        recordA = devilGetRecord(*idA);
        recordB = devilGetRecord(*idB);
        diff = recordB->level - recordA->level;
        if (diff == 0) {
            diff = *idA - *idB;
        }
    }
    return diff;
}

} /* extern "C" */
