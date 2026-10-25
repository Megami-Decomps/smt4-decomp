/* NON_MATCHING: zero lifetime/save set, upgrade-bank address splitting and first clamp scratch registers differ. */
#include "shard/W5_W5Match7_EntrySort.h"
#include "util/DataTable08Sub2GetRecord.h"
#include "gamedata/EquipmentUpgradeState.h"
#include "shard/ItemStackLimit.h"

static inline s32 capUpgradeBonus(s32 value, s32 maximum)
{
    return value > maximum ? maximum : value;
}

extern "C" {
EquipmentUpgradeState *FUN_00239200();

void equipmentGetCappedUpgradeBonuses(u32 id, s16 *values)
{
    const ItemCategoryEntry *range = itemCategoryFindByItemId(id);
    u8 kind = range != NULL ? range->type : 0;
    EquipmentUpgradeState *storage = FUN_00239200();
    values[0] = 0;
    values[1] = 0;
    values[2] = 0;
    values[3] = 0;
    values[4] = 0;
    values[5] = 0;
    values[6] = 0;
    u32 index;
    switch (kind) {
    case 4:
        index = id - 0x12d;
        if ((s32)index < 0) {
            return;
        }
        if (index > 119) {
            return;
        }
        values[0] = storage->categories[0][index].power;
        values[4] = storage->categories[0][index].secondary;
        values[6] = storage->categories[0][index].secondary;
        break;
    case 5:
        index = id - 0x1a5;
        if ((s32)index < 0) {
            return;
        }
        if (index > 119) {
            return;
        }
        values[0] = storage->categories[1][index].power;
        break;
    case 6:
        index = id - 0x21d;
        if ((s32)index < 0) {
            return;
        }
        if (index > 119) {
            return;
        }
        values[0] = storage->categories[2][index].power;
        values[5] = storage->categories[2][index].secondary;
        break;
    }
    const EquipmentUpgradeBonusRecord *base =
        reinterpret_cast<const EquipmentUpgradeBonusRecord *>(dataTable08Sub2GetRecord(id));
    if (base != NULL) {
        values[0] = capUpgradeBonus(values[0], 999 - base->power);
        values[4] = capUpgradeBonus(values[4], 99 - (s8)base->modifiers[2]);
        values[5] = capUpgradeBonus(values[5], 99 - (s8)base->modifiers[3]);
        values[6] = capUpgradeBonus(values[6], 99 - (s8)base->modifiers[4]);
    }
}
}
