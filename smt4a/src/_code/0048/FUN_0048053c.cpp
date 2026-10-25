/* NON_MATCHING: canonical modifier alignment, seven-halfword bonus extent and unsigned range bounds are restored; zero/one lifetimes, stack slot placement and clamp arithmetic scheduling remain different. */
#include "shard/W5_W5Match7_EntrySort.h"
#include "gamedata/EquipmentUpgradeState.h"

// The points an equipment upgrade of one kind can still add: hit points (cap 999) and up to three
// stats (cap 99), laid out like the bonuses already applied.
struct UpgradeLimits {
    s16 hp;        // 0x00
    u8 unk02[6];
    s16 statA;     // 0x08
    s16 statB;     // 0x0a
    s16 statC;     // 0x0c
};


extern "C" {
s32 FUN_0047fc38(void);
EquipmentUpgradeRecord* FUN_0019c06c(u32 item);
void FUN_001a90f0(EquipmentUpgradeModifiers* extras, const EquipmentUpgradeModifiers* source);

// Fills `limits` with how much more an upgrade of equipment `item` may add to its capped values.
void FUN_0048053c(s32 item, UpgradeLimits* limits)
{
    if (FUN_0047fc38() != 0) {
        return;
    }
    EquipmentUpgradeRecord* record = FUN_0019c06c(item);
    s32 kind = 0;
    if (record != NULL)
        kind = record->category;
    s16 bonuses[7];
    equipmentGetCappedUpgradeBonuses(item, bonuses);
    const EquipmentUpgradeBonusRecord* upgrade =
        reinterpret_cast<const EquipmentUpgradeBonusRecord*>(dataTable08Sub2GetRecord(item));
    EquipmentUpgradeModifiers extras = {};
    s32 hp = 0;
    if (upgrade != NULL) {
        hp = upgrade->power;
        FUN_001a90f0(&extras,
            reinterpret_cast<const EquipmentUpgradeModifiers*>(upgrade->modifiers));
    }
    if (kind == 4) {
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
                    s32 value = 99 - (bonuses[4] + extras.values[2]);
                    limits->statA = value > 0 ? value : 0;
                }
                if (bonuses[6] + 3 + extras.extra >= 99) {
                    s32 value = 99 - (bonuses[6] + extras.extra);
                    limits->statC = value > 0 ? value : 0;
                }
            }
        }
    } else if (kind == 5) {
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
    } else if (kind == 6) {
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
                    s32 value = 99 - (bonuses[5] + extras.values[3]);
                    limits->statB = value > 0 ? value : 0;
                }
            }
        }
    }
}
}
