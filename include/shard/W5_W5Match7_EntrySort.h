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
    };
    /* 0x32 */ s8 bonus;
    /* 0x33 */ u8 unk33[0x11];
    /* 0x44 */ s16 ranks[8];
    /* 0x54 */ u8 unk54[0x1c];
    /* 0x70 */ u16 tieKey;
};

struct EntrySortBonus {
    /* 0x00 */ u8 unk00[6];
    /* 0x06 */ s16 value;
    /* 0x08 */ u8 unk08[8];
};

struct SortDefaults { s32 left, right; };

extern "C" {
EntrySortData *FUN_00192608(u32 id);
void equipmentGetCappedUpgradeBonuses(u32 id, EntrySortBonus *bonus);
s32 FUN_00345098(s32 left, s32 right);
extern SortDefaults DAT_0052b8ac[2];
}

#endif
