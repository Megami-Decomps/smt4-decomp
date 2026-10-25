#ifndef GAMEDATA_TABLE04RECORD_H
#define GAMEDATA_TABLE04RECORD_H
#include "common.h"
#include <stddef.h>
#include "gamedata/Table04Record.h"

/* A record of data table 4, section 0: skills and items. dataTable04FindById() searches the records with a
 * stride of 0x88 bytes (retail passes 0x88 to libc_bsearch and its key buffer is 0x88 bytes). */
struct Table04Record {
    union {
        /* 0x00 */ u8 unk00[0x28];
        struct {
            /* 0x00 */ u8 unk00[0x23];
            /* 0x23 */ u8 category;
        } sort;
        struct {
            /* 0x00 */ u8 unk00[0x20];
            /* 0x20 */ u16 id;
        } identity;
        struct {
            /* 0x00 */ u8 unk00[0x22];
            /* 0x22 */ u8 baseCost;
        } cost;
    };
    union {
        /* 0x28 */ u32 properties;
        struct {
            u32 unk00 : 12;
            u32 category : 5;
            u32 unk11 : 15;
        } skillProperties;
        struct {
            u32 unk00 : 5;
            u32 targeting : 4;
            u32 mode : 2;
            u32 unk0b : 21;
        } effectProperties;
        struct {
            u32 unk00 : 5;
            u32 category : 4;
            u32 unk09 : 23;
        } itemProperties;
    };
    union {
        /* 0x2C */ u8 unk2C[0x10];
        struct {
            /* 0x2C */ u16 sortKey;
        } listing;
        struct {
            u8 prefix[6];
            /* 0x32 */ s8 effects[4];
        } effectList;
        struct {
            u8 prefix[0xA];
            /* 0x36 */ u8 enabled;
        } specialAvailability;
        struct {
            u8 prefix[0xD];
            /* 0x39 */ u8 flags;
        } itemUse;
    };
    /* 0x3C */ u32 flags;
    /* 0x40 */ u8 unk40[0x22];
    /* 0x62 */ u8 stages[9][2];
    /* 0x74 */ u8 unk74[0x12];
    /* 0x86 */ u16 unk86;
};
struct Table04ExtraRecord {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 id;
    union {
        /* 0x22 */ u8 unk22[0x22];
        struct {
            u8 unk22[0x12];
            /* 0x34 */ s16 triggeredSkill;
            /* 0x36 */ s16 triggerChance;
        } trigger;
    };
    /* 0x44 */ s32 flags;
};
typedef char Table04RecordOffsets[offsetof(Table04Record, properties) == 0x28 &&
    offsetof(Table04Record, flags) == 0x3C ? 1 : -1];
typedef char Table04RecordSizeCheck[sizeof(Table04Record) == 0x88 &&
    offsetof(Table04Record, stages) == 0x62 && offsetof(Table04Record, unk86) == 0x86 ? 1 : -1];
typedef char Table04CategoryOffsetCheck[offsetof(Table04Record, sort.category) == 0x23 ? 1 : -1];
typedef char Table04IdentityOffsetCheck[offsetof(Table04Record, identity.id) == 0x20 ? 1 : -1];
typedef char Table04ExtraRecordOffsets[sizeof(Table04ExtraRecord) == 0x48 &&
    offsetof(Table04ExtraRecord, id) == 0x20 && offsetof(Table04ExtraRecord, flags) == 0x44 ? 1 : -1];
typedef char Table04ExtraTriggerOffsets[offsetof(Table04ExtraRecord, trigger.triggeredSkill) == 0x34 &&
    offsetof(Table04ExtraRecord, trigger.triggerChance) == 0x36 && sizeof(Table04ExtraRecord) == 0x48 ? 1 : -1];
typedef char Table04SkillPropertiesOffsetCheck[
    offsetof(Table04Record, skillProperties) == 0x28 ? 1 : -1];
typedef char Table04BaseCostOffsetCheck[
    offsetof(Table04Record, cost.baseCost) == 0x22 ? 1 : -1];
typedef char Table04EffectPropertiesOffsetCheck[
    offsetof(Table04Record, effectProperties) == 0x28 ? 1 : -1];
typedef char Table04SpecialAvailabilityOffsetCheck[
    offsetof(Table04Record, specialAvailability.enabled) == 0x36 ? 1 : -1];
typedef char Table04ItemPropertiesOffsetCheck[offsetof(Table04Record, itemProperties) == 0x28 &&
    offsetof(Table04Record, listing.sortKey) == 0x2C &&
    offsetof(Table04Record, effectList.effects) == 0x32 &&
    offsetof(Table04Record, itemUse.flags) == 0x39 ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif
/* Finds the record with `id`: the add-on content's override first, else a search of data table 4. */
Table04Record *dataTable04FindById(u32 id);
#ifdef __cplusplus
}
#endif
extern "C" {
u32 FUN_00333758(Table04Record *record);
}

extern "C" {
bool FUN_004aba9c(u32 arg0);
}

#endif
