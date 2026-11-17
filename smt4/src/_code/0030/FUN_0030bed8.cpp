#include "common.h"
#include "gamedata/EquipmentRecord.h"

extern "C" {

/* Compares two record ids by the high then low nibble of byte 0x58 (ascending), then by order (descending). */
s32 FUN_0030bed8(u16 *a, u16 *b)
{
    EquipmentRecord *recordA = dataTable08Sub2GetRecord(*a);
    EquipmentRecord *recordB = dataTable08Sub2GetRecord(*b);
    s32 diff = recordA->hits.maximum - recordB->hits.maximum;

    if (diff == 0) {
        diff = recordA->hits.minimum - recordB->hits.minimum;
        if (diff == 0) {
            recordA = dataTable08Sub2GetRecord(*a);
            recordB = dataTable08Sub2GetRecord(*b);
            diff = recordB->order - recordA->order;
        }
    }
    return diff;
}

} /* extern "C" */
