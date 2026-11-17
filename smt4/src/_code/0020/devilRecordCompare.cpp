#include "common.h"
#include "gamedata/EquipmentRecord.h"

extern "C" {

/* Sort comparator over two record ids: by the record's 10-bit key, then by its order. */
s32 devilRecordCompare(u16 *a, u16 *b)
{
    EquipmentRecord *recA = itemTableGetEquipmentRecord(*a);
    EquipmentRecord *recB = itemTableGetEquipmentRecord(*b);
    s32 diff = (recA->traits & 0x3ff) - (recB->traits & 0x3ff);

    if (diff == 0) {
        recA = itemTableGetEquipmentRecord(*a);
        recB = itemTableGetEquipmentRecord(*b);
        diff = recA->order - recB->order;
    }
    return diff;
}

} /* extern "C" */
