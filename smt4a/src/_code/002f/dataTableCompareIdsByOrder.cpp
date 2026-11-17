#include "common.h"
#include "gamedata/ConsumableRecordA.h"

extern "C" {

/* qsort comparison of two ids by their records' order byte, ascending. */
s32 dataTableCompareIdsByOrder(const u16 *a, const u16 *b)
{
    ConsumableRecordA *first = dataTable8FindRecord(*a);
    ConsumableRecordA *second = dataTable8FindRecord(*b);

    return first->rank - second->rank;
}

} /* extern "C" */
