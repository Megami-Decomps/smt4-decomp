#include "gamedata/DevilRecordA.h"

extern "C" {

s32 dataTableGetEntry0102Value(u16 id);

/* Compares two record ids by their table value (higher first), then kind (higher first), order and id. */
s32 btlDevilCompareValueKindAndOrder(u16 *a, u16 *b)
{
    DevilRecordA *recordA = devilGetRecord(*a);
    DevilRecordA *recordB = devilGetRecord(*b);
    s32 valueA = dataTableGetEntry0102Value(recordA->id);
    s32 valueB = dataTableGetEntry0102Value(recordB->id);
    s32 diff = valueB - valueA;

    if (diff == 0) {
        recordA = devilGetRecord(*a);
        recordB = devilGetRecord(*b);
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
