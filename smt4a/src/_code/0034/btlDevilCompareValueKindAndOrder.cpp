#include "gamedata/NkmBaseRecordA.h"

extern "C" {

s32 dataTableGetEntry0102Value(u16 id);

/* Compares two record ids by their table value (higher first), then kind (higher first), order and id. */
s32 btlDevilCompareValueKindAndOrder(u16 *a, u16 *b)
{
    NkmBaseRecordA *recordA = nkmBaseGetRecord(*a);
    NkmBaseRecordA *recordB = nkmBaseGetRecord(*b);
    s32 valueA = dataTableGetEntry0102Value(recordA->id);
    s32 valueB = dataTableGetEntry0102Value(recordB->id);
    s32 diff = valueB - valueA;

    if (diff == 0) {
        recordA = nkmBaseGetRecord(*a);
        recordB = nkmBaseGetRecord(*b);
        diff = recordB->race - recordA->race;
        if (diff == 0) {
            diff = recordA->level - recordB->level;
            if (diff == 0) {
                diff = recordB->id - recordA->id;
            }
        }
    }
    return diff;
}

} /* extern "C" */
