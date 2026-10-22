/* NON_MATCHING: -O2 candidate; zero lifetime/save set, inclusive index bound form, table-base address splitting, and first clamp registers differ. */
#include "shard/W5_W5Match7_EntrySort.h"

struct EquipmentIdRange {
    u32 first;
    u32 last;
    u8 kind;
    u8 unk09[3];
};

struct EquipmentUpgradeBonusRecord {
    s16 rating;
    s16 bonus;
    u8 unk04[8];
};

struct EquipmentUpgradeStorage {
    u8 unk00[8];
    EquipmentUpgradeBonusRecord records[3][120];
};

struct EquipmentBonusCaps {
    u8 unk00[0x33];
    s8 stats[3];
    s16 rating;
};

static inline s32 capUpgradeBonus(s32 value, s32 maximum)
{
    return value > maximum ? maximum : value;
}

extern "C" {
const EquipmentIdRange *FUN_0019c06c(u32 id);
EquipmentUpgradeStorage *FUN_00239200();

void equipmentGetCappedUpgradeBonuses(u32 id, EntrySortBonus *bonus)
{
    const EquipmentIdRange *range = FUN_0019c06c(id);
    u8 kind = range != NULL ? range->kind : 0;
    EquipmentUpgradeStorage *storage = FUN_00239200();
    s16 *values = (s16 *)bonus;
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
        if (index >= 120) {
            return;
        }
        values[0] = storage->records[0][index].rating;
        values[4] = storage->records[0][index].bonus;
        values[6] = storage->records[0][index].bonus;
        break;
    case 5:
        index = id - 0x1a5;
        if ((s32)index < 0) {
            return;
        }
        if (index >= 120) {
            return;
        }
        values[0] = storage->records[1][index].rating;
        break;
    case 6:
        index = id - 0x21d;
        if ((s32)index < 0) {
            return;
        }
        if (index >= 120) {
            return;
        }
        values[0] = storage->records[2][index].rating;
        values[5] = storage->records[2][index].bonus;
        break;
    }
    const EquipmentBonusCaps *base = (const EquipmentBonusCaps *)FUN_00192608(id);
    if (base != NULL) {
        values[0] = capUpgradeBonus(values[0], 999 - base->rating);
        values[4] = capUpgradeBonus(values[4], 99 - base->stats[0]);
        values[5] = capUpgradeBonus(values[5], 99 - base->stats[1]);
        values[6] = capUpgradeBonus(values[6], 99 - base->stats[2]);
    }
}
}
