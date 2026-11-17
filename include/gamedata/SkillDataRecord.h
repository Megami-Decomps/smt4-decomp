#ifndef GAMEDATA_SKILLDATARECORD_H
#define GAMEDATA_SKILLDATARECORD_H
#include "common.h"
#include <stddef.h>

/* IV's skill record: one row of battle/SkillData.tbb table 0 (the game's data table 4, section 0; 0x68 bytes; the same fields up to 0x40 as Apocalypse's
 * SkillDataRecordA): skillDataFindById() searches the records with a stride of 0x68. */
struct SkillDataRecord {
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
    /* 0x40 */ u8 unk40[0x28];
};
typedef char Table04RecordSizeCheck[sizeof(SkillDataRecord) == 0x68 &&
    offsetof(SkillDataRecord, properties) == 0x28 && offsetof(SkillDataRecord, flags) == 0x3C &&
    offsetof(SkillDataRecord, identity.id) == 0x20 && offsetof(SkillDataRecord, sort.category) == 0x23 ? 1 : -1];

/* Apocalypse's skill record: one row of battle/SkillData.tbb table 0 (data table 4, section 0; 0x88 bytes): skills and items. skillDataFindById()
 * searches the records with a stride of 0x88 bytes (retail passes 0x88 to libc_bsearch). */
struct SkillDataRecordA {
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
/* A record of data table 4, section 1 (0x48 bytes; smt4a skill records): `id` at 0x20 is the key of
 * dataTable41FindById(). */
struct Table04ExtraRecord {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 id;
    union {
        /* 0x22 */ u8 unk22[0x22];
        struct {
            /* 0x22 */ u16 level;
            /* 0x24 */ u8 hpPercentTens;
            /* 0x25 */ u8 mpPercentTens;
            /* 0x26 */ u8 holdChance;  /* percent */
            /* 0x27 */ u8 chance;      /* percent */
            /* 0x28 */ u8 statBonus[5];
        } stats;
        struct {
            u8 unk22[0x12];
            /* 0x34 */ s16 triggeredSkill;
            /* 0x36 */ s16 triggerChance;
        } trigger;
        struct {
            u8 unk22[0xD];
            /* 0x2F */ u8 percentage;      /* the value percentage an equipment modifier applies */
            u8 unk30[3];
            /* 0x33 */ u8 category;        /* the skill category the record matches */
        } modifier;
    };
    union {
        /* 0x44 */ s32 flags;
        /* 0x44 */ u32 affinity;
        struct {
            u32 tier : 2;
            u32 reserved : 30;
        } actionTier;
    };
};
typedef char Table04RecordAOffsets[offsetof(SkillDataRecordA, properties) == 0x28 &&
    offsetof(SkillDataRecordA, flags) == 0x3C ? 1 : -1];
typedef char Table04RecordASizeCheck[sizeof(SkillDataRecordA) == 0x88 &&
    offsetof(SkillDataRecordA, stages) == 0x62 && offsetof(SkillDataRecordA, unk86) == 0x86 ? 1 : -1];
typedef char Table04CategoryOffsetCheck[offsetof(SkillDataRecordA, sort.category) == 0x23 ? 1 : -1];
typedef char Table04IdentityOffsetCheck[offsetof(SkillDataRecordA, identity.id) == 0x20 ? 1 : -1];
typedef char Table04ExtraRecordOffsets[sizeof(Table04ExtraRecord) == 0x48 &&
    offsetof(Table04ExtraRecord, id) == 0x20 && offsetof(Table04ExtraRecord, flags) == 0x44 ? 1 : -1];
typedef char Table04ExtraModifierOffsets[offsetof(Table04ExtraRecord, modifier.percentage) == 0x2F &&
    offsetof(Table04ExtraRecord, modifier.category) == 0x33 ? 1 : -1];
typedef char Table04ExtraTriggerOffsets[offsetof(Table04ExtraRecord, trigger.triggeredSkill) == 0x34 &&
    offsetof(Table04ExtraRecord, trigger.triggerChance) == 0x36 && sizeof(Table04ExtraRecord) == 0x48 ? 1 : -1];
typedef char Table04SkillPropertiesOffsetCheck[
    offsetof(SkillDataRecordA, skillProperties) == 0x28 ? 1 : -1];
typedef char Table04BaseCostOffsetCheck[
    offsetof(SkillDataRecordA, cost.baseCost) == 0x22 ? 1 : -1];
typedef char Table04EffectPropertiesOffsetCheck[
    offsetof(SkillDataRecordA, effectProperties) == 0x28 ? 1 : -1];
typedef char Table04SpecialAvailabilityOffsetCheck[
    offsetof(SkillDataRecordA, specialAvailability.enabled) == 0x36 ? 1 : -1];
typedef char Table04ItemPropertiesOffsetCheck[offsetof(SkillDataRecordA, itemProperties) == 0x28 &&
    offsetof(SkillDataRecordA, listing.sortKey) == 0x2C &&
    offsetof(SkillDataRecordA, effectList.effects) == 0x32 &&
    offsetof(SkillDataRecordA, itemUse.flags) == 0x39 ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif
/* Finds the record of data table 4/1 with `id`: the add-on content's override first, else a search of the table. */
Table04ExtraRecord *dataTable41FindById(u32 id);
#ifdef __cplusplus
}
#endif
extern "C" {
u32 FUN_00333758(SkillDataRecordA *record);
}

extern "C" {
bool FUN_004aba9c(u32 arg0);
}

/* skillDataFindById, declared per game (its record type differs). */
#include "gamedata/SkillDataLookup.h"

#endif
