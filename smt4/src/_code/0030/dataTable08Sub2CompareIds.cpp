#include "common.h"
#include "gamedata/EquipmentRecord.h"

extern "C" {

/* qsort comparison of two ids by their records' order value, descending. */
s32 dataTable08Sub2CompareIds(const u16 *a, const u16 *b)
{
    EquipmentRecord *first = itemTableGetEquipmentRecord(*a);
    EquipmentRecord *second = itemTableGetEquipmentRecord(*b);

    return second->order - first->order;
}

} /* extern "C" */
