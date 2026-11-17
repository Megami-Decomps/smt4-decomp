/* IV's equipment records: data table 8, section 2 (0xA8 bytes each), found by id with
 * dataTable08Sub2GetRecord(). Apocalypse's layout is EquipmentRecordA (gamedata/EquipmentRecordA.h). */
#ifndef GAMEDATA_EQUIPMENTRECORD_H
#define GAMEDATA_EQUIPMENTRECORD_H

#include "common.h"
#include <stddef.h>

struct EquipmentRecord {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u16 id;
    /* 0x52 */ u8 slot;                 /* equipment slot kind */
    /* 0x53 */ u8 unk53;
    union {
        /* 0x54 */ u32 traits;
        struct {
            u32 group : 10;             /* sort group */
            u32 unk54 : 10;
            u32 attribute : 12;         /* attribute id */
        } traitBits;
    };
    union {
        /* 0x58 */ u8 hitRange;         /* low nibble: minimum hits, high nibble: maximum */
        struct {
            u8 minimum : 4;
            u8 maximum : 4;
        } hits;
    };
    /* 0x59 */ u8 target;
    /* 0x5A */ u8 unk5A;
    /* 0x5B */ u8 element;              /* the attack element or ailment; also a sort category */
    /* 0x5C */ u8 unk5C;
    /* 0x5D */ u8 specialElement;
    /* 0x5E */ u8 unk5E[2];
    /* 0x60 */ u8 alignments;           /* bits 0-2: the alignments that may equip it */
    /* 0x61 */ s8 statBonus[5];
    /* 0x66 */ s16 hpBonus;
    /* 0x68 */ s16 mpBonus;
    /* 0x6A */ u16 modifierId;          /* the value modifier applied to this equipment */
    /* 0x6C */ u8 unk6C[4];
    /* 0x70 */ u16 modelGroup;
    /* 0x72 */ u16 model;
    /* 0x74 */ s16 affinities[18];      /* the affinity class occupies the high six bits */
    /* 0x98 */ u16 order;               /* list order, the tie-break key of most sorts */
    union {
        /* 0x9A */ u16 flags;
        struct {
            u16 unk9A : 2;
            u16 stackLimit : 5;         /* 0: the default */
            u16 unk9AHigh : 9;
        } flagBits;
    };
    /* 0x9C */ s32 buyPrice;
    /* 0xA0 */ s32 sellPrice;
    /* 0xA4 */ u8 unkA4[2];
    /* 0xA6 */ u16 priority;            /* the type-specific sort value */
};

typedef char EquipmentRecordOffsetCheck[sizeof(EquipmentRecord) == 0xA8 &&
    offsetof(EquipmentRecord, id) == 0x50 && offsetof(EquipmentRecord, traits) == 0x54 &&
    offsetof(EquipmentRecord, hitRange) == 0x58 && offsetof(EquipmentRecord, element) == 0x5B &&
    offsetof(EquipmentRecord, alignments) == 0x60 && offsetof(EquipmentRecord, statBonus) == 0x61 &&
    offsetof(EquipmentRecord, hpBonus) == 0x66 && offsetof(EquipmentRecord, modelGroup) == 0x70 &&
    offsetof(EquipmentRecord, affinities) == 0x74 && offsetof(EquipmentRecord, order) == 0x98 &&
    offsetof(EquipmentRecord, flags) == 0x9A && offsetof(EquipmentRecord, buyPrice) == 0x9C &&
    offsetof(EquipmentRecord, priority) == 0xA6 ? 1 : -1];

extern "C" {

/* The equipment record with `id`: the add-on's when it has one, else a search of data table 8/2. */
EquipmentRecord *dataTable08Sub2GetRecord(u32 id);

} /* extern "C" */

#endif
