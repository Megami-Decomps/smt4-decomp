#ifndef GAMEDATA_TABLE04RECORD_H
#define GAMEDATA_TABLE04RECORD_H
#include "common.h"
#include <stddef.h>

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
    };
    union {
        /* 0x2C */ u8 unk2C[0x10];
        struct {
            u8 prefix[0xA];
            /* 0x36 */ u8 enabled;
        } specialAvailability;
    };
    /* 0x3C */ u32 flags;
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
typedef char Table04CategoryOffsetCheck[sizeof(Table04Record) == 0x40 &&
    offsetof(Table04Record, sort.category) == 0x23 ? 1 : -1];
typedef char Table04IdentityOffsetCheck[offsetof(Table04Record, identity.id) == 0x20 &&
    sizeof(Table04Record) == 0x40 ? 1 : -1];
typedef char Table04ExtraRecordOffsets[sizeof(Table04ExtraRecord) == 0x48 &&
    offsetof(Table04ExtraRecord, id) == 0x20 && offsetof(Table04ExtraRecord, flags) == 0x44 ? 1 : -1];
typedef char Table04ExtraTriggerOffsets[offsetof(Table04ExtraRecord, trigger.triggeredSkill) == 0x34 &&
    offsetof(Table04ExtraRecord, trigger.triggerChance) == 0x36 && sizeof(Table04ExtraRecord) == 0x48 ? 1 : -1];
typedef char Table04SkillPropertiesOffsetCheck[
    offsetof(Table04Record, skillProperties) == 0x28 ? 1 : -1];
typedef char Table04BaseCostOffsetCheck[
    offsetof(Table04Record, cost.baseCost) == 0x22 && sizeof(Table04Record) == 0x40 ? 1 : -1];
typedef char Table04EffectPropertiesOffsetCheck[
    offsetof(Table04Record, effectProperties) == 0x28 &&
    sizeof(Table04Record) == 0x40 ? 1 : -1];
typedef char Table04SpecialAvailabilityOffsetCheck[
    offsetof(Table04Record, specialAvailability.enabled) == 0x36 && sizeof(Table04Record) == 0x40 ? 1 : -1];
#endif
