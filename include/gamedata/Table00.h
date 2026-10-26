#ifndef GAMEDATA_TABLE00_H
#define GAMEDATA_TABLE00_H

#include "common.h"
#include <stddef.h>

struct Table00Choice {
    /* 0x00 */ u16 value;
    /* 0x02 */ u8 unk02[4];
};

struct Table00Record {
    /* 0x00 */ u16 id;
    union {
        /* 0x02 */ u16 level;           /* bit 15 is a flag */
        /* 0x02 */ u8 unk02[2];
    };
    /* 0x04 */ s32 maxHp;
    /* 0x08 */ s32 maxMp;
    /* 0x0C */ u8 unk0C[6];
    /* 0x12 */ u16 levelA;
    /* 0x14 */ u16 levelB;
    /* 0x16 */ u16 flags;
    union {
        /* 0x18 */ u8 unk18[0x48];
        struct {
            /* 0x18 */ u8 unk18[0x38];
            /* 0x50 */ u16 ids[8];
        } skillList;
        struct {
            /* 0x18 */ u8 unk18[0x30];
            /* 0x48 */ u16 ids[8];
        } copiedIds;
    };
    /* 0x60 */ Table00Choice choices[3];
    /* 0x72 */ u8 unk72[0x0E];
    /* 0x80 */ u16 relatedIds[3];
    union {
        /* 0x86 */ u8 unk86[0x22];
        struct {
            u8 prefix[0x18];
            /* 0x9E */ u8 first;
            /* 0x9F */ u8 second;
        } arrangement;
        struct {
            /* 0x86 */ u8 unk86BeforeValue[0x1C];
            /* 0xA2 */ u8 value;
            /* 0xA3 */ u8 variation;
        } bustUp;
        struct {
            /* 0x86 */ u8 unk86BeforeSelection[0x1A];
            /* 0xA0 */ u16 selectionId;
        } selection;
        struct {
            /* 0x86 */ u8 unk86[2];
            /* 0x88 */ s16 id;
        } portrait;
        struct {
            u8 prefix[6];
            /* 0x8C */ s16 resourceId;
        } battleTexture;
        struct {
            /* 0x86 */ u16 id;
        } successor;
        struct {
            /* 0x86 */ u8 unk86BeforeHeight[0x1C];
            /* 0xA2 */ u8 value;           /* 0 tall, 1 average, 2 low */
        } height;
    };
};

typedef char Table00RecordFieldsCheck[
    offsetof(Table00Record, level) == 2 && offsetof(Table00Record, maxHp) == 4 &&
    offsetof(Table00Record, maxMp) == 8 && offsetof(Table00Record, levelA) == 0x12 &&
    offsetof(Table00Record, levelB) == 0x14 && offsetof(Table00Record, flags) == 0x16 &&
    offsetof(Table00Record, successor.id) == 0x86 && offsetof(Table00Record, height.value) == 0xA2 ? 1 : -1];
typedef char Table00RecordSizeCheck[sizeof(Table00Record) == 0xA8 ? 1 : -1];
typedef char Table00SkillListOffsetCheck[offsetof(Table00Record, skillList.ids) == 0x50 ? 1 : -1];
typedef char Table00CopiedIdsOffsetCheck[offsetof(Table00Record, copiedIds.ids) == 0x48 ? 1 : -1];
typedef char Table00ArrangementOffsetCheck[
    offsetof(Table00Record, arrangement.first) == 0x9E &&
    offsetof(Table00Record, arrangement.second) == 0x9F ? 1 : -1];

typedef char Table00SelectionOffsetCheck[
    offsetof(Table00Record, selection.selectionId) == 0xA0 &&
    offsetof(Table00Record, id) == 0 &&
    sizeof(Table00Record) == 0xA8 ? 1 : -1];

typedef char Table00BustUpValueOffsetCheck[
    offsetof(Table00Record, bustUp.value) == 0xA2 &&
    sizeof(Table00Record) == 0xA8 ? 1 : -1];
typedef char Table00PortraitOffsetCheck[
    offsetof(Table00Record, portrait.id) == 0x88 ? 1 : -1];
typedef char Table00BustUpVariationOffsetCheck[
    offsetof(Table00Record, bustUp.variation) == 0xA3 ? 1 : -1];
typedef char Table00BattleTextureOffsetCheck[
    offsetof(Table00Record, battleTexture.resourceId) == 0x8C && sizeof(Table00Record) == 0xA8 ? 1 : -1];

#endif
