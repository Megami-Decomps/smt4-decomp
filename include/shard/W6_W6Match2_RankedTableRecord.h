#ifndef SHARD_W6_W6MATCH2_RANKED_TABLE_RECORD_H
#define SHARD_W6_W6MATCH2_RANKED_TABLE_RECORD_H

#include "common.h"
#include <stddef.h>
struct PlayerEquipmentAppearance {
    union {
        u8 unk00[6];
        struct { u16 melee, firearm, ammunition; } equipped;
    };
    u16 head;
    u16 body;
    u16 legs;
};

struct RankedTableRecord {
    union {
        u8 unk00[0x59]; // 0x00
        struct {
            u8 prefix[0x52];
            /* 0x52 */ u8 kind;
        } appearance;
        struct {
            u8 prefix[0x58];
            u8 attackCount; // low/high nibbles are the attack-count range.
        } attack;
    };
    u8 category;     // 0x59
    u8 unk5a;        // 0x5a
    union { u8 rank; u8 ailment; }; // 0x5b
    union {
        u8 unk5c[0x3c]; // 0x5c
        struct {
            u8 unk5c[0x0a]; // 0x5c
            s16 value;        // 0x66
            u8 unk68[0x30]; // 0x68
        } stats;
        struct {
            u8 unk5c[0x18];
            s16 affinities[8]; // 0x74: affinity class occupies the high six bits.
            u8 unk84[0x14];
        } elements;
        struct {
            u8 unk5c[0x14];
            u16 group; // 0x70
            u16 variant; // 0x72
        } model;
    };
    u16 order;       // 0x98
    u8 unk9a[2]; // 0x9a
};

typedef char RankedTableRecordSizeCheck[sizeof(RankedTableRecord) == 0x9c ? 1 : -1];
typedef char RankedTableRecordAffinitiesOffsetCheck[offsetof(RankedTableRecord, elements.affinities) == 0x74 ? 1 : -1];
typedef char RankedTableRecordModelOffsetCheck[offsetof(RankedTableRecord, model.group) == 0x70 &&
    offsetof(RankedTableRecord, model.variant) == 0x72 ? 1 : -1];
typedef char RankedTableRecordAppearanceKindOffsetCheck[
    offsetof(RankedTableRecord, appearance.kind) == 0x52 &&
    sizeof(RankedTableRecord) == 0x9C ? 1 : -1];
typedef char RankedTableRecordAttackOffsetsCheck[
    offsetof(RankedTableRecord, attack.attackCount) == 0x58 &&
    offsetof(RankedTableRecord, ailment) == 0x5B &&
    offsetof(PlayerEquipmentAppearance, equipped.firearm) == 2 &&
    offsetof(PlayerEquipmentAppearance, equipped.ammunition) == 4 &&
    sizeof(PlayerEquipmentAppearance) == 0xC ? 1 : -1];

struct EquipmentModelCompatibility {
    u16 modelId;
    u16 unk02;
    const u16 *compatibleIds;
    s32 count;
};
typedef char EquipmentModelCompatibilityLayoutCheck[sizeof(EquipmentModelCompatibility) == 0xc &&
    offsetof(EquipmentModelCompatibility, compatibleIds) == 4 &&
    offsetof(EquipmentModelCompatibility, count) == 8 &&
    offsetof(PlayerEquipmentAppearance, body) == 8 ? 1 : -1];

// The backing table word is aligned; keep this prefix view's original alignment.
static __inline u32 rankedTableRecordGetSortFlags(const RankedTableRecord *record)
{
    return *(const u32 *)(record->unk00 + 0x54);
}

extern "C" RankedTableRecord* dataTable08Sub2GetRecord(u16 id);

#endif
