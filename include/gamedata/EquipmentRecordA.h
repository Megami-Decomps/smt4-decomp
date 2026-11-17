/* Apocalypse's equipment records: item/ItemTable.tbb table 2 (data table 8, section 2) (0x80 bytes each), found by id with
 * itemTableGetEquipmentRecord(). IV's layout is EquipmentRecord (gamedata/EquipmentRecord.h). */
#ifndef GAMEDATA_EQUIPMENTRECORDA_H
#define GAMEDATA_EQUIPMENTRECORDA_H

#include "common.h"
#include <stddef.h>

/* One affinity of an equipment record: a 6-bit state over a signed 10-bit modifier. */
union EquipmentAffinityValueA {
    s16 raw;
    struct {
        signed short modifier : 10; /* plain s16 bit-fields read back unsigned in armcc */
        u16 state : 6;
    } fields;
};

struct EquipmentRecordA {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 id;
    /* 0x22 */ u8 slot;                 /* equipment slot kind, 2..8 */
    /* 0x23 */ u8 unk23;
    union {
        /* 0x24 */ u32 traits;
        struct {
            u32 group : 10;             /* sort group */
            u32 unk24 : 10;
            u32 attribute : 12;         /* attribute id */
        } traitBits;
    };
    union {
        /* 0x28 */ u8 hitRange;         /* low nibble: minimum hits, high nibble: maximum */
        struct {
            u8 minimum : 4;
            u8 maximum : 4;
        } hits;
    };
    /* 0x29 */ u8 target;
    /* 0x2A */ u8 unk2A;
    /* 0x2B */ u8 element;              /* the attack element or ailment; also a sort category */
    /* 0x2C */ u8 unk2C;
    /* 0x2D */ u8 specialElement;       /* counts as element 12 */
    /* 0x2E */ u8 unk2E[2];
    /* 0x30 */ u8 alignments;           /* bit 0: class 4, bit 1: class 1, bit 2: class 5 */
    /* 0x31 */ s8 statBonus[5];         /* upgrade kinds 0..4 */
    /* 0x36 */ s16 hpBonus;
    /* 0x38 */ s16 mpBonus;
    /* 0x3A */ u16 modifierId;           /* the value modifier applied to this equipment */
    /* 0x3C */ u8 unk3C[4];
    /* 0x40 */ u16 modelGroup;
    /* 0x42 */ u16 model;
    /* 0x44 */ EquipmentAffinityValueA affinities[21];
    /* 0x6E */ s16 replaceAffinities;   /* positive: the affinities replace the other record's */
    /* 0x70 */ u16 order;               /* list order, the tie-break key of most sorts */
    union {
        /* 0x72 */ u16 flags;
        struct {
            u16 unk72 : 2;
            u16 stackLimit : 5;         /* 0: the default 999 */
            u16 unk72High : 9;
        } flagBits;
    };
    /* 0x74 */ s32 buyPrice;
    /* 0x78 */ s32 sellPrice;
    /* 0x7C */ u8 scriptValue;          /* reported by scrCommGetPlayerRecordValue */
    /* 0x7D */ u8 unk7D;
    /* 0x7E */ u16 priority;             /* the type-specific sort value */
};

typedef char EquipmentRecordAOffsetCheck[sizeof(EquipmentRecordA) == 0x80 &&
    offsetof(EquipmentRecordA, id) == 0x20 && offsetof(EquipmentRecordA, traits) == 0x24 &&
    offsetof(EquipmentRecordA, hitRange) == 0x28 && offsetof(EquipmentRecordA, element) == 0x2B &&
    offsetof(EquipmentRecordA, alignments) == 0x30 && offsetof(EquipmentRecordA, statBonus) == 0x31 &&
    offsetof(EquipmentRecordA, hpBonus) == 0x36 && offsetof(EquipmentRecordA, modelGroup) == 0x40 &&
    offsetof(EquipmentRecordA, affinities) == 0x44 && offsetof(EquipmentRecordA, order) == 0x70 &&
    offsetof(EquipmentRecordA, buyPrice) == 0x74 && offsetof(EquipmentRecordA, priority) == 0x7E && offsetof(EquipmentRecordA, flags) == 0x72 ? 1 : -1];

extern "C" {

/* The equipment record with `id`: the add-on's when it has one, else a search of data table 8/2. */
EquipmentRecordA *itemTableGetEquipmentRecord(u32 id);

} /* extern "C" */

#endif
