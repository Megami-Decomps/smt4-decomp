#include "common.h"
#include "gamedata/EquipmentRecordA.h"

extern "C" {

/* Sort comparator over two record ids: by maximum hits, then minimum hits, then by order descending. */
s32 recordCompareByRank(u16 *a, u16 *b)
{
    EquipmentRecordA *recA = itemTableGetEquipmentRecord(*a);
    EquipmentRecordA *recB = itemTableGetEquipmentRecord(*b);
    s32 diff = (recA->hitRange >> 4) - (recB->hitRange >> 4);

    if (diff == 0) {
        diff = (recA->hitRange & 0xf) - (recB->hitRange & 0xf);
        if (diff == 0) {
            recA = itemTableGetEquipmentRecord(*a);
            recB = itemTableGetEquipmentRecord(*b);
            diff = recB->order - recA->order;
        }
    }
    return diff;
}

} /* extern "C" */
