#include "common.h"
#include "gamedata/EquipmentRecord.h"

extern "C" {

/* qsort comparison of two ids by their records' order value, descending. */
s32 dataTable08Sub2CompareIds(const u16 *a, const u16 *b)
{
    EquipmentRecord *first = dataTable08Sub2GetRecord(*a);
    EquipmentRecord *second = dataTable08Sub2GetRecord(*b);

    return second->order - first->order;
}

} /* extern "C" */
