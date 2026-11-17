#include "common.h"
#include "gamedata/EquipmentRecord.h"

extern "C" {

/* qsort-style comparison of two ids by the records' group (descending), then order (descending). */
s32 dataTable08Sub2CompareByGroup(u16 *a, u16 *b)
{
    EquipmentRecord *recordA = dataTable08Sub2GetRecord(*a);
    EquipmentRecord *recordB = dataTable08Sub2GetRecord(*b);
    s32 result = recordB->traitBits.group - recordA->traitBits.group;

    if (result == 0) {
        recordA = dataTable08Sub2GetRecord(*a);
        recordB = dataTable08Sub2GetRecord(*b);
        result = recordB->order - recordA->order;
    }
    return result;
}

} /* extern "C" */
