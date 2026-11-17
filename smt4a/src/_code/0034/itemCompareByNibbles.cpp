#include "common.h"
#include "gamedata/EquipmentRecordA.h"

extern "C" {

/* qsort-style comparison of two ids by the records' high nibble and low nibble (descending), then order (ascending). */
s32 itemCompareByNibbles(u16 *a, u16 *b)
{
    EquipmentRecordA *recordA = dataTable08Sub2GetRecord(*a);
    EquipmentRecordA *recordB = dataTable08Sub2GetRecord(*b);
    s32 result = recordB->hits.maximum - recordA->hits.maximum;

    if (result == 0) {
        result = recordB->hits.minimum - recordA->hits.minimum;
        if (result == 0) {
            recordA = dataTable08Sub2GetRecord(*a);
            recordB = dataTable08Sub2GetRecord(*b);
            result = recordA->order - recordB->order;
        }
    }
    return result;
}

} /* extern "C" */
