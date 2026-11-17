#include "common.h"
#include "gamedata/EquipmentRecord.h"

extern "C" {

/* Sort comparison of two devil ids: by the high then the low nibble of the byte at 0x58 (descending), then order ascending. */
s32 FUN_002dcd38(u16 *idA, u16 *idB)
{
    EquipmentRecord *recordA = itemTableGetEquipmentRecord(*idA);
    EquipmentRecord *recordB = itemTableGetEquipmentRecord(*idB);
    s32 diff = (recordB->hitRange >> 4) - (recordA->hitRange >> 4);

    if (diff == 0) {
        diff = (recordB->hitRange & 0xF) - (recordA->hitRange & 0xF);
        if (diff == 0) {
            recordA = itemTableGetEquipmentRecord(*idA);
            recordB = itemTableGetEquipmentRecord(*idB);
            diff = recordA->order - recordB->order;
        }
    }
    return diff;
}

} /* extern "C" */
