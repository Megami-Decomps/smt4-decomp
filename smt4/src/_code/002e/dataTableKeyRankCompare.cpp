#include "common.h"
#include "gamedata/ConsumableRecord.h"

extern "C" {

int flagValueRead(u16 id);

/* Comparator on two u16 ids: orders by flagValueRead(id), then by the records' rank (second minus first). */
int dataTableKeyRankCompare(u16 *a, u16 *b)
{
    int keyA = flagValueRead(*a);
    int keyB = flagValueRead(*b);
    int result = keyA - keyB;

    if (result == 0) {
        ConsumableRecord *recordA = itemTableGetItemRecord(*a);
        ConsumableRecord *recordB = itemTableGetItemRecord(*b);

        result = recordB->rank - recordA->rank;
    }
    return result;
}

} /* extern "C" */
