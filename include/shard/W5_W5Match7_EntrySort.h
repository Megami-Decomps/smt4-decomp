#ifndef SHARD_W5_W5MATCH7_ENTRYSORT_H
#define SHARD_W5_W5MATCH7_ENTRYSORT_H

#include "common.h"

struct SortItem { u16 id; };

struct EntrySortData {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 key;
    union {
        /* 0x22 */ u8 unk22[0x10];
        struct {
            /* 0x22 */ u8 unk22[9];
            /* 0x2b */ u8 category;
            /* 0x2c */ u8 unk2c[6];
        } sort;
        struct {
            /* 0x22 */ u8 unk22[7];
            /* 0x29 */ u8 key;
            /* 0x2a */ u8 unk2a[8];
        } secondarySort;
        struct {
            /* 0x22 */ u8 unk22[0xF];
            /* 0x31 */ s8 bonus; /* upgrade kind 0 */
        } firstKind;
    };
    union {
        /* 0x32 */ s8 bonus;
        /* 0x32 */ s8 bonusesFrom1[5]; /* upgrade kinds 1..5 */
    };
    /* 0x37 */ u8 unk37[0xD];
    /* 0x44 */ s16 ranks[8];
    /* 0x54 */ u8 unk54[0x1c];
    /* 0x70 */ u16 tieKey;
};

struct EntrySortBonus {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s16 firstValue; /* upgrade kind 0 */
    union {
        /* 0x06 */ s16 value;
        /* 0x06 */ s16 valuesFrom1[5]; /* upgrade kinds 1..5 */
    };
};

union EquipmentUpgradeBonuses {
    EntrySortBonus common;
    s16 values[8];
};
struct EquipmentUpgradeRecord {
    /* 0x00 */ u32 firstId;
    /* 0x04 */ u32 lastId;
    /* 0x08 */ u8 category;
    /* 0x09 */ u8 unk09[3];
};
typedef char EquipmentUpgradeBonusesSizeCheck[sizeof(EquipmentUpgradeBonuses) == 0x10 ? 1 : -1];

struct SortDefaults { s32 left, right; };

extern "C" {
EntrySortData *dataTable08Sub2GetRecord(u32 id);
void equipmentGetCappedUpgradeBonuses(u32 id, EntrySortBonus *bonus);
s32 FUN_00345098(s32 left, s32 right);
extern SortDefaults DAT_0052b8ac[2];
}

#endif
