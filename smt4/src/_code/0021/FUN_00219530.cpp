#include "shard/W6_W6Match2_RankedTableRecord.h"
#include "gamedata/EquipmentRecord.h"

// Compare the high twelve flag bits, then ascending secondary order.
extern "C" s32 FUN_00219530(const u16 *left, const u16 *right)
{
    EquipmentRecord *leftRecord = itemTableGetEquipmentRecord(*left);
    EquipmentRecord *rightRecord = itemTableGetEquipmentRecord(*right);
    s32 result = (leftRecord->traits >> 20)
               - (rightRecord->traits >> 20);
    if (result == 0) {
        leftRecord = itemTableGetEquipmentRecord(*left);
        rightRecord = itemTableGetEquipmentRecord(*right);
        result = leftRecord->order - rightRecord->order;
    }
    return result;
}
