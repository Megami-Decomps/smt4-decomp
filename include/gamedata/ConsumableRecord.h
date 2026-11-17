/* IV's item records: data table 8, section 1 (0x80 bytes each), found by id with
 * dataTable08Sub1GetRecord(). Apocalypse's layout is ConsumableRecordA (gamedata/ConsumableRecordA.h). */
#ifndef GAMEDATA_CONSUMABLERECORD_H
#define GAMEDATA_CONSUMABLERECORD_H

#include "common.h"
#include <stddef.h>

struct ConsumableRecord {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ char name[0x10];         /* also the name of the item's battle resource */
    /* 0x60 */ u16 id;
    /* 0x62 */ u16 skillId;             /* the skill or action the item uses */
    /* 0x64 */ u16 healHp;
    /* 0x66 */ u16 healMp;              /* also a fixed value */
    /* 0x68 */ u8 curesHp;
    /* 0x69 */ u8 curesMp;              /* also a percentage of the target's stat */
    /* 0x6A */ u8 target;               /* bit 7: the whole group; low seven bits: the ailment group */
    /* 0x6B */ u8 kind;                 /* also: usable outside battle */
    /* 0x6C */ u8 iconKind;             /* the category badge */
    /* 0x6D */ u8 type;                 /* 2 or 3: a healing item */
    /* 0x6E */ u8 useFlags;             /* bit 0: not consumed on use; high nibble: a passive skill tier */
    /* 0x6F */ u8 rank;                 /* the sort rank */
    union {
        /* 0x70 */ u32 sortFlags;       /* low byte: a sort key */
        struct {
            u32 sortKey : 8;
            u32 stackLimit : 24;        /* 0: the default */
        } sortBits;
    };
    /* 0x74 */ u8 unk74[4];
    /* 0x78 */ s32 buyPrice;
    /* 0x7C */ s32 sellPrice;
};

typedef char ConsumableRecordOffsetCheck[sizeof(ConsumableRecord) == 0x80 &&
    offsetof(ConsumableRecord, name) == 0x50 && offsetof(ConsumableRecord, id) == 0x60 &&
    offsetof(ConsumableRecord, skillId) == 0x62 && offsetof(ConsumableRecord, target) == 0x6A &&
    offsetof(ConsumableRecord, type) == 0x6D && offsetof(ConsumableRecord, rank) == 0x6F &&
    offsetof(ConsumableRecord, sortFlags) == 0x70 && offsetof(ConsumableRecord, buyPrice) == 0x78 ? 1 : -1];

extern "C" {

/* The item record with `id`: the add-on's first, else a search of data table 8/1. */
ConsumableRecord *dataTable08Sub1GetRecord(u32 id);

} /* extern "C" */

#endif
