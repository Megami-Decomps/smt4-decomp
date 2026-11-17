#include "gamedata/DevilRecordA.h"

extern "C" {

/* Compares two record ids by kind (higher first), then by order (lower first), then by id (higher first). */
s32 recordKindOrderCompare(u16 *a, u16 *b)
{
    DevilRecordA *recordA = devilGetRecord(*a);
    DevilRecordA *recordB = devilGetRecord(*b);
    s32 diff = recordB->race - recordA->race;

    if (diff == 0) {
        diff = recordA->level - recordB->level;
        if (diff == 0) {
            diff = recordB->id - recordA->id;
        }
    }
    return diff;
}

} /* extern "C" */
