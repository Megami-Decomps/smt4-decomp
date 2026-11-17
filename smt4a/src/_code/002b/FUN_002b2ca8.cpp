#include "gamedata/NkmBaseRecordA.h"

extern "C" {

s32 dataTableGetEntry0102Value(u16 id);

/* Compares two record ids by their table value (lower first), then kind, order (higher first) and id. */
s32 FUN_002b2ca8(u16 *a, u16 *b)
{
    NkmBaseRecordA *recordA = nkmBaseGetRecord(*a);
    NkmBaseRecordA *recordB = nkmBaseGetRecord(*b);
    s32 diff = dataTableGetEntry0102Value(recordA->id) - dataTableGetEntry0102Value(recordB->id);

    if (diff == 0) {
        recordA = nkmBaseGetRecord(*a);
        recordB = nkmBaseGetRecord(*b);
        diff = recordA->race - recordB->race;
        if (diff == 0) {
            diff = recordB->level - recordA->level;
            if (diff == 0) {
                diff = recordA->id - recordB->id;
            }
        }
    }
    return diff;
}

} /* extern "C" */
