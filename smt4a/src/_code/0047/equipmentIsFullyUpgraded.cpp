/* NON_MATCHING: modifier zero-initialization, upgrade bank addressing and return-block placement differ. */
#include "gamedata/EquipmentUpgradeState.h"
#include "shard/ItemStackLimit.h"
#include "gamedata/EquipmentRecordA.h"

extern "C" {
EquipmentUpgradeState *FUN_00239200(void);
void FUN_001a90f0(EquipmentUpgradeModifiers *, const EquipmentUpgradeModifiers *);

// True when this equipment item cannot accept any further upgrade bonus.
u32 equipmentIsFullyUpgraded(u32 itemId)
{
    const ItemCategoryEntry *categoryInfo = itemCategoryFindByItemId(itemId);
    u8 category = categoryInfo ? categoryInfo->type : 0;
    EquipmentUpgradeState *upgrades = FUN_00239200();
    const EquipmentRecordA *bonus = itemTableGetEquipmentRecord(itemId);
    EquipmentUpgradeModifiers modifiers = {};
    s32 power = 0;
    if (bonus) {
        power = bonus->hpBonus;
        FUN_001a90f0(&modifiers,
            reinterpret_cast<const EquipmentUpgradeModifiers *>(bonus->statBonus));
    }
    switch (category) {
    case 4: {
        s32 index = itemId - 301;
        if (index >= 0 && static_cast<u32>(index) <= 119) {
            const EquipmentUpgradeEntry *entry = &upgrades->categories[0][index];
            if (entry->power + power < 999 ||
                entry->secondary + modifiers.values[2] < 99 ||
                entry->secondary + modifiers.extra < 99)
                return 0;
            return 1;
        }
        break;
    }
    case 5: {
        s32 index = itemId - 421;
        if (index >= 0 && static_cast<u32>(index) <= 119 &&
            upgrades->categories[1][index].power + power < 999)
            return 0;
        break;
    }
    case 6: {
        u32 index = itemId - 541;
        if (index >= 0 && static_cast<u32>(index) <= 119) {
            const EquipmentUpgradeEntry *entry = &upgrades->categories[2][index];
            if (entry->power + power < 999 || entry->secondary + modifiers.values[3] < 99)
                return 0;
        }
        break;
    }
    }
    return 1;
}
}
