/* NON_MATCHING: upgrade-bank field addressing, bound comparisons and clamp scratch registers differ. */
#include "gamedata/EquipmentUpgradeState.h"
#include "shard/ItemStackLimit.h"

extern "C" {
u32 FUN_0047fc38(u32);
const ItemCategoryEntry *FUN_0019c06c(u32);
EquipmentUpgradeState *FUN_00239200();

void FUN_004803e4(u32 itemId)
{
    if (FUN_0047fc38(itemId))
        return;
    const ItemCategoryEntry *category = FUN_0019c06c(itemId);
    if (!category) {
        FUN_00239200();
        return;
    }
    u8 type = category->type;
    EquipmentUpgradeState *upgrades = FUN_00239200();
    switch (type) {
    case 4: {
        s32 index = itemId - 301;
        if (index < 0 || static_cast<u32>(index) >= 120)
            return;
        EquipmentUpgradeEntry *entry = &upgrades->categories[0][index];
        entry->power += 15;
        entry->secondary += 3;
        entry->power = entry->power < 999 ? entry->power : 999;
        entry->secondary = entry->secondary < 99 ? entry->secondary : 99;
        break;
    }
    case 5: {
        s32 index = itemId - 421;
        if (index < 0 || static_cast<u32>(index) >= 120)
            return;
        EquipmentUpgradeEntry *entry = &upgrades->categories[1][index];
        entry->power += 30;
        entry->power = entry->power < 999 ? entry->power : 999;
        break;
    }
    case 6: {
        s32 index = itemId - 541;
        if (index < 0 || static_cast<u32>(index) >= 120)
            return;
        EquipmentUpgradeEntry *entry = &upgrades->categories[2][index];
        entry->power += 20;
        entry->secondary += 6;
        entry->power = entry->power < 999 ? entry->power : 999;
        entry->secondary = entry->secondary < 99 ? entry->secondary : 99;
        break;
    }
    }
}
}
