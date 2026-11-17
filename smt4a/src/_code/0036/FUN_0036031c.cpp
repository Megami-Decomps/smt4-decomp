#include "common.h"
#include "gamedata/ConsumableRecordA.h"

extern "C" {

/* Sort comparison of two ids: by the records' major byte, then by minor, both descending. */
s32 FUN_0036031c(u16 *idA, u16 *idB)
{
    ConsumableRecordA *recordA = itemTableGetItemRecord(*idA);
    ConsumableRecordA *recordB = itemTableGetItemRecord(*idB);
    s32 diff = (recordB->sortFlags & 0xFF) - (recordA->sortFlags & 0xFF);

    if (diff == 0) {
        recordA = itemTableGetItemRecord(*idA);
        recordB = itemTableGetItemRecord(*idB);
        diff = recordB->rank - recordA->rank;
    }
    return diff;
}

} /* extern "C" */
