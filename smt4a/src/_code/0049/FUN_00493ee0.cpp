#include "gamedata/ConsumableRecordA.h"
#include "addon/AocEntryKind.h"
#include "gamedata/DataTableAccess_VariantD_Table8Record.h"
#include "shop/shopMain.h"
#include "gamedata/EquipmentRecordA.h"

struct EquipmentSortConsumable {
    u8 unk00[0x25];
    u8 value;
};
extern "C" {
EquipmentSortConsumable *contentEntryFindById2(u32 id);
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
        value = dataTable08Sub2GetRecord(id)->priority;
        break;
    case 0:
        value = contentEntryFindById2(id)->value;
        break;
    case 1:
    case 12:
        value = dataTable8FindRecord(id)->sortFlags & 0xFF;
        break;
    }
    return value;
}

/* Orders two entries by their secondary key. */
static s32 compareOrder(const u16 *left, const u16 *right)
{
    s32 leftOrder = recordGetCompareValue(left);
    s32 rightOrder = recordGetCompareValue(right);
    return leftOrder - rightOrder;
}

/* Sorts descending by the type-specific equipment value, using the normal item order for ties. */
extern "C" s32 FUN_00493ee0(const u16 *left, const u16 *right)
{
    u32 leftValue = equipmentGetTypeSortValue(*left);
    u32 rightValue = equipmentGetTypeSortValue(*right);
    s32 result = rightValue - leftValue;
    if (result == 0) {
        result = compareOrder(left, right);
    }
    return result;
}
