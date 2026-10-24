/* NON_MATCHING: retail keeps zero in callee-saved r8 (kind default and the extras zeroing after the upgrade lookup) with the extras at sp+4 and the bonuses at sp+12 in a 32-byte frame, tests `999 > used + limit` with the constant as the first compare operand and `(bonus + step) + extra` left to right, and range-tests the id as `subs; bmi; cmp #119; bhi` (signed sign test, then an unsigned count test); this build reassociates the sums, swaps the compare operands, uses a signed second test and a 36-byte frame. */
#include "common.h"

// The points an equipment upgrade of one kind can still add: hit points (cap 999) and up to three
// stats (cap 99), laid out like the bonuses already applied.
struct UpgradeLimits {
    s16 hp;        // 0x00
    u8 unk02[6];
    s16 statA;     // 0x08
    s16 statB;     // 0x0a
    s16 statC;     // 0x0c
};

struct UpgradeBonuses {
    s16 hp;        // 0x00
    u8 unk02[6];
    s16 statA;     // 0x08
    s16 statB;     // 0x0a
    s16 statC;     // 0x0c
    u8 unk0e[2];
};

// The signed stat bonuses of an upgrade record.
struct UpgradeExtras {
    u8 unk00[2];
    s8 statA;      // 0x02
    s8 statB;      // 0x03
    s8 statC;      // 0x04
    u8 unk05[3];
};

struct UpgradeRecord {
    u8 unk00[0x31];
    u8 extras[3];  // 0x31
    u8 unk34[2];
    s16 hp;        // 0x36
};

struct ItemRecord {
    u8 unk00[8];
    u8 kind;       // 0x08: 4, 5 or 6 for the equipment kinds that can be upgraded
};

extern "C" {
s32 FUN_0047fc38(void);
ItemRecord* FUN_0019c06c(s32 item);
void equipmentGetCappedUpgradeBonuses(s32 item, UpgradeBonuses* bonuses);
UpgradeRecord* dataTable08Sub2GetRecord(s32 item);
void FUN_001a90f0(UpgradeExtras* extras, const u8* source);

// Fills `limits` with how much more an upgrade of equipment `item` may add to its capped values.
void FUN_0048053c(s32 item, UpgradeLimits* limits)
{
    if (FUN_0047fc38() != 0) {
        return;
    }
    ItemRecord* record = FUN_0019c06c(item);
    s32 kind = record != NULL ? record->kind : 0;
    UpgradeBonuses bonuses;
    equipmentGetCappedUpgradeBonuses(item, &bonuses);
    UpgradeRecord* upgrade = dataTable08Sub2GetRecord(item);
    UpgradeExtras extras = {};
    s32 hp = 0;
    if (upgrade != NULL) {
        hp = upgrade->hp;
        FUN_001a90f0(&extras, upgrade->extras);
    }
    if (kind == 4) {
        s32 index = item - 0x12d;
        if (index >= 0) {
            if (index <= 0x77) {
                limits->hp = 15;
                limits->statA = 3;
                limits->statC = 3;
                s32 used = bonuses.hp + hp;
                if (!(999 > used + 15)) {
                    s32 value = 999 - used;
                    limits->hp = value > 0 ? value : 0;
                }
                if (bonuses.statA + 3 + extras.statA >= 99) {
                    s32 value = 99 - (bonuses.statA + extras.statA);
                    limits->statA = value > 0 ? value : 0;
                }
                if (bonuses.statC + 3 + extras.statC >= 99) {
                    s32 value = 99 - (bonuses.statC + extras.statC);
                    limits->statC = value > 0 ? value : 0;
                }
            }
        }
    } else if (kind == 5) {
        s32 index = item - 0x1a5;
        if (index >= 0) {
            if (index <= 0x77) {
                limits->hp = 30;
                s32 used = bonuses.hp + hp;
                if (!(999 > used + 30)) {
                    s32 value = 999 - used;
                    limits->hp = value > 0 ? value : 0;
                }
            }
        }
    } else if (kind == 6) {
        s32 index = item - 0x21d;
        if (index >= 0) {
            if (index <= 0x77) {
                limits->hp = 20;
                limits->statB = 6;
                s32 used = bonuses.hp + hp;
                if (!(999 > used + 20)) {
                    s32 value = 999 - used;
                    limits->hp = value > 0 ? value : 0;
                }
                if (bonuses.statB + 6 + extras.statB >= 99) {
                    s32 value = 99 - (bonuses.statB + extras.statB);
                    limits->statB = value > 0 ? value : 0;
                }
            }
        }
    }
}
}
