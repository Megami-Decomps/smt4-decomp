/* NON_MATCHING: 127 vs 127 rows (78 diff lines): switch(kind) restores r4-r7 and branch structure; retail retains r8=0 (32-byte frame vs 36-byte), compares `999 > used + add` in `cmp r0, r2; bgt`, and adds the stat constant before extras. */
#include "shard/W5_W5Match7_EntrySort.h"
#include "gamedata/DataTableAccess_VariantE_EntrySort.h"
#include "gamedata/EquipmentUpgradeState.h"
#include "shard/ItemStackLimit.h"

extern "C" {
s32 equipmentIsFullyUpgraded(void);
void __ARM_common_memcpy4_5(EquipmentUpgradeModifiers *extras, const EquipmentUpgradeModifiers *source);

/* Fills `limits` with how much more an upgrade of equipment `item` may add to its capped values. */
void FUN_0048053c(s32 item, UpgradeLimits *limits)
{
    if (equipmentIsFullyUpgraded() != 0) {
        return;
    }
    EquipmentUpgradeRecord *record = (EquipmentUpgradeRecord *)itemCategoryFindByItemId(item);
    s32 kind = 0;
    if (record != NULL) {
        kind = record->category;
    }
    s16 bonuses[7];
    equipmentGetCappedUpgradeBonuses(item, bonuses);
    const EquipmentRecordA *upgrade = itemTableGetEquipmentRecord(item);
    EquipmentUpgradeModifiers extras = {};
    s32 hp = 0;
    if (upgrade != NULL) {
        hp = upgrade->hpBonus;
        __ARM_common_memcpy4_5(&extras, (const EquipmentUpgradeModifiers *)upgrade->statBonus);
    }
    switch (kind) {
    case 4: {
        u32 index = item - 0x12d;
        if ((s32)index >= 0) {
            if (index <= 0x77) {
                limits->hp = 15;
                limits->statA = 3;
                limits->statC = 3;
                s32 used = bonuses[0] + hp;
                if (!(999 > used + 15)) {
                    s32 value = 999 - used;
                    limits->hp = value > 0 ? value : 0;
                }
                if (bonuses[4] + 3 + extras.values[2] >= 99) {
                    s32 value = 99 - (extras.values[2] + bonuses[4]);
                    limits->statA = value > 0 ? value : 0;
                }
                if (bonuses[6] + 3 + extras.extra >= 99) {
                    s32 value = 99 - (extras.extra + bonuses[6]);
                    limits->statC = value > 0 ? value : 0;
                }
            }
        }
        break;
    }
    case 5: {
        u32 index = item - 0x1a5;
        if ((s32)index >= 0) {
            if (index <= 0x77) {
                limits->hp = 30;
                s32 used = bonuses[0] + hp;
                if (!(999 > used + 30)) {
                    s32 value = 999 - used;
                    limits->hp = value > 0 ? value : 0;
                }
            }
        }
        break;
    }
    case 6: {
        u32 index = item - 0x21d;
        if ((s32)index >= 0) {
            if (index <= 0x77) {
                limits->hp = 20;
                limits->statB = 6;
                s32 used = bonuses[0] + hp;
                if (!(999 > used + 20)) {
                    s32 value = 999 - used;
                    limits->hp = value > 0 ? value : 0;
                }
                if (bonuses[5] + 6 + extras.values[3] >= 99) {
                    s32 value = 99 - (extras.values[3] + bonuses[5]);
                    limits->statB = value > 0 ? value : 0;
                }
            }
        }
        break;
    }
    }
}
} /* extern "C" */
