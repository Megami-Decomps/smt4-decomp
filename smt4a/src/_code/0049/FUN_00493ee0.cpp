/* NON_MATCHING: The inlined value helper interchanges r4/r5 for record ids and the two comparison values. */
#include "gamedata/Table8Record.h"
#include "addon/AocEntryKind.h"
#include "shard/dataTable8FindRecord.h"
#include "shop/shopMain.h"

struct EquipmentSortConsumable {
    u8 unk00[0x25];
    u8 value;
};
struct EquipmentSortArmor {
    u8 unk00[0x7E];
    u16 value;
};
/* Table8Record has halfword alignment; keep this word-aligned field view local. */
struct EquipmentSortWeapon {
    u8 unk00[0x44];
    u32 value;
};
extern "C" {
EquipmentSortConsumable *contentEntryFindById2(u32 id);
EquipmentSortArmor *dataTable08Sub2GetRecord(u32 id);
}

static __inline u32 equipmentGetTypeSortValue(u32 id)
{
    u32 value = 0;
    switch (aocEntryGetKindForward(id)) {
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
        value = dataTable08Sub2GetRecord(id)->value;
        break;
    case 0:
        value = contentEntryFindById2(id)->value;
        break;
    case 1:
    case 12:
        value = ((EquipmentSortWeapon *)dataTable8FindRecord(id))->value & 0xFF;
        break;
    }
    return value;
}

/* Sorts descending by the type-specific equipment value, using the normal item order for ties. */
extern "C" s32 FUN_00493ee0(const u16 *left, const u16 *right)
{
    u32 leftValue = equipmentGetTypeSortValue(*left);
    u32 rightValue = equipmentGetTypeSortValue(*right);
    s32 result = rightValue - leftValue;
    if (result == 0) {
        result = FUN_0049c9a0(left) - FUN_0049c9a0(right);
    }
    return result;
}
