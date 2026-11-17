#include "common.h"
#include "gamedata/EquipmentRecordA.h"

extern "C" {

/* Sort comparator over two record ids: by maximum hits, then minimum hits, then by order descending. */
s32 recordCompareByRank(u16 *a, u16 *b)
{
    EquipmentRecordA *recA = dataTable08Sub2GetRecord(*a);
    EquipmentRecordA *recB = dataTable08Sub2GetRecord(*b);
    s32 diff = (recA->hitRange >> 4) - (recB->hitRange >> 4);

    if (diff == 0) {
        diff = (recA->hitRange & 0xf) - (recB->hitRange & 0xf);
        if (diff == 0) {
            recA = dataTable08Sub2GetRecord(*a);
            recB = dataTable08Sub2GetRecord(*b);
            diff = recB->order - recA->order;
        }
    }
    return diff;
}

} /* extern "C" */
