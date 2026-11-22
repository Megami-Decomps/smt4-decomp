/* Apocalypse's item records: item/ItemTable.tbb table 1 (data table 8, section 1) (section 6 for key items), 0x6C bytes each,
 * found by id with itemTableGetItemRecord(). IV's layout is ConsumableRecord (gamedata/ConsumableRecord.h). */
#ifndef GAMEDATA_CONSUMABLERECORDA_H
#define GAMEDATA_CONSUMABLERECORDA_H

#include "common.h"
#include <stddef.h>

struct ConsumableRecordA {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ char name[0x10];
    /* 0x30 */ u16 id;
    /* 0x32 */ u16 skillId;             /* the skill the item uses; also a link into another table */
    /* 0x34 */ u16 hpAmount;            /* HP restored */
    /* 0x36 */ u16 mpAmount;            /* MP restored */
    /* 0x38 */ u8 hpPercent;            /* HP restored, in percent of the maximum */
    /* 0x39 */ u8 mpPercent;            /* MP restored, in percent of the maximum */
    union {
        /* 0x3A */ u8 groupFlags;       /* 0x80: a member of the second group */
        /* 0x3A */ u8 cureKind;         /* low 7 bits: the ailment kind the item cures (FUN_003ff524) */
    };
    /* 0x3B */ u8 kind;
    /* 0x3C */ s32 value3C;             /* compared by the battle member removal scripts */
    /* 0x40 */ u8 iconKind;             /* the category icon */
    /* 0x41 */ u8 type;
    /* 0x42 */ u8 useFlags;             /* bit 0: not consumed on use; high nibble: matching skill category */
    /* 0x43 */ u8 rank;                 /* the sort rank */
    union {
        /* 0x44 */ u32 sortFlags;       /* low byte: a sort key */
        struct {
            u32 sortKey : 8;
            u32 stackLimit : 24;        /* 0: the default 999 */
        } sortBits;
    };
    /* 0x48 */ u16 effectValue;          /* the healing percentage of healing items */
    /* 0x4A */ u16 points;              /* the points the item awards (gameDataAddCappedPoints) */
    /* 0x4C */ s32 buyPrice;
    /* 0x50 */ s32 sellPrice;
    /* 0x54 */ u16 count;               /* waited for by scrCommRecordProgressWait */
    /* 0x56 */ s8 categoryRankBoosts[18]; /* added to a unit's SlotRecordA.categoryRanks */
    /* 0x68 */ u32 flags;
};

typedef char ConsumableRecordAOffsetCheck[sizeof(ConsumableRecordA) == 0x6C &&
    offsetof(ConsumableRecordA, id) == 0x30 && offsetof(ConsumableRecordA, skillId) == 0x32 &&
    offsetof(ConsumableRecordA, hpAmount) == 0x34 && offsetof(ConsumableRecordA, cureKind) == 0x3A &&
    offsetof(ConsumableRecordA, kind) == 0x3B && offsetof(ConsumableRecordA, type) == 0x41 &&
    offsetof(ConsumableRecordA, useFlags) == 0x42 && offsetof(ConsumableRecordA, sortFlags) == 0x44 &&
    offsetof(ConsumableRecordA, points) == 0x4A && offsetof(ConsumableRecordA, buyPrice) == 0x4C &&
    offsetof(ConsumableRecordA, categoryRankBoosts) == 0x56 && offsetof(ConsumableRecordA, flags) == 0x68 ? 1 : -1];

extern "C" {

/* The item record with `id`: the add-on's first, else a search of data table 8/1 (8/6 for key items). */
ConsumableRecordA *itemTableGetItemRecord(u32 id);

} /* extern "C" */

#endif
