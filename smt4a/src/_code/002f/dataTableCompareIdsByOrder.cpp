#include "common.h"
#include "gamedata/ConsumableRecordA.h"

extern "C" {

/* qsort comparison of two ids by their records' order byte, ascending. */
s32 dataTableCompareIdsByOrder(const u16 *a, const u16 *b)
{
    ConsumableRecordA *first = itemTableGetItemRecord(*a);
    ConsumableRecordA *second = itemTableGetItemRecord(*b);

    return first->rank - second->rank;
}

} /* extern "C" */
