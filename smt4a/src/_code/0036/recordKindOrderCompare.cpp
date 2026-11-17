#include "gamedata/NkmBaseRecordA.h"

extern "C" {

/* Compares two record ids by kind (higher first), then by order (lower first), then by id (higher first). */
s32 recordKindOrderCompare(u16 *a, u16 *b)
{
    NkmBaseRecordA *recordA = nkmBaseGetRecord(*a);
    NkmBaseRecordA *recordB = nkmBaseGetRecord(*b);
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
