#include "common.h"
#include "gamedata/EquipmentRecord.h"

extern "C" {

/* qsort-style comparison of two ids by the records' group (descending), then order (descending). */
s32 dataTable08Sub2CompareByGroup(u16 *a, u16 *b)
{
    EquipmentRecord *recordA = itemTableGetEquipmentRecord(*a);
    EquipmentRecord *recordB = itemTableGetEquipmentRecord(*b);
    s32 result = recordB->traitBits.group - recordA->traitBits.group;

    if (result == 0) {
        recordA = itemTableGetEquipmentRecord(*a);
        recordB = itemTableGetEquipmentRecord(*b);
        result = recordB->order - recordA->order;
    }
    return result;
}

} /* extern "C" */
