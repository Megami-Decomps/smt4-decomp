/* Data table 0, section 1: the devil compendium's base records (0xA8 bytes each), found by id with
 * dataTable00FindById() (gamedata/Table00Lookup.h of each game). IV's layout is Table00Record,
 * Apocalypse's Table00RecordA. */
#ifndef GAMEDATA_TABLE00_H
#define GAMEDATA_TABLE00_H

#include "common.h"
#include <stddef.h>

/* One drop of a record: an item and its chance. */
struct Table00Choice {
    /* 0x00 */ u16 value;               /* the item */
    /* 0x02 */ u16 chance;
    /* 0x04 */ u16 unk04;
};

/* IV's record. */
struct Table00Record {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 level;
    /* 0x03 */ u8 levelFlags;           /* bit 0: preferred by sprite templates; bit 7: priority */
    /* 0x04 */ s32 maxHp;
    /* 0x08 */ s32 maxMp;
    /* 0x0C */ u16 stats[5];
    /* 0x16 */ u16 flags;
    /* 0x18 */ u8 unk18[0xC];
    /* 0x24 */ u16 resistances[8];
    /* 0x34 */ u8 unk34[0x14];
    /* 0x48 */ u16 skills[8];
    /* 0x58 */ Table00Choice drops[3];
    /* 0x6A */ u16 unk6A;
    /* 0x6C */ u32 experience;
    /* 0x70 */ u32 price;               /* the compendium price */
    /* 0x74 */ s32 unk74;
    /* 0x78 */ u32 money;
    /* 0x7C */ u16 linkedIds[3];        /* demons whose registration also counts */
    /* 0x82 */ u16 talkTargetId;
    /* 0x84 */ u16 unk84;
    /* 0x86 */ u16 successorId;
    /* 0x88 */ s16 portraitId;          /* also the battle texture id */
    /* 0x8A */ char aiScriptName[6];     /* battle/AI/<name>.bf */
    /* 0x90 */ u8 unk90[0xE];
    /* 0x9E */ u8 arrangementFirst;     /* also the attack type */
    /* 0x9F */ u8 arrangementSecond;
    /* 0xA0 */ u16 selectionId;         /* also the help skill id */
    /* 0xA2 */ u8 bustUp;
    /* 0xA3 */ u8 unkA3;
    /* 0xA4 */ u8 variant;
    /* 0xA5 */ u8 scriptFlags;          /* read bit by bit by the script commands */
    /* 0xA6 */ u8 unkA6[2];
};

typedef char Table00RecordOffsetCheck[sizeof(Table00Record) == 0xA8 &&
    offsetof(Table00Record, level) == 2 && offsetof(Table00Record, maxHp) == 4 &&
    offsetof(Table00Record, stats) == 0xC && offsetof(Table00Record, flags) == 0x16 &&
    offsetof(Table00Record, resistances) == 0x24 && offsetof(Table00Record, skills) == 0x48 &&
    offsetof(Table00Record, drops) == 0x58 && offsetof(Table00Record, experience) == 0x6C &&
    offsetof(Table00Record, money) == 0x78 && offsetof(Table00Record, linkedIds) == 0x7C &&
    offsetof(Table00Record, portraitId) == 0x88 && offsetof(Table00Record, aiScriptName) == 0x8A &&
    offsetof(Table00Record, arrangementFirst) == 0x9E && offsetof(Table00Record, selectionId) == 0xA0 &&
    offsetof(Table00Record, variant) == 0xA4 ? 1 : -1];

/* Apocalypse's record. */
struct Table00RecordA {
    /* 0x00 */ u16 id;
    /* 0x02 */ u16 level;               /* bit 15 is a flag */
    /* 0x04 */ s32 maxHp;
    /* 0x08 */ s32 maxMp;
    /* 0x0C */ u16 stats[5];            /* the thresholds scripts compare the player's stats with */
    /* 0x16 */ u16 flags;
    /* 0x18 */ u8 unk18[0x38];
    /* 0x50 */ u16 skills[8];
    /* 0x60 */ Table00Choice choices[3];
    /* 0x72 */ u8 unk72[2];
    /* 0x74 */ u32 experience;          /* scripts read it divided by 4 */
    /* 0x78 */ u8 unk78[4];
    /* 0x7C */ u32 money;
    /* 0x80 */ u16 relatedIds[3];
    /* 0x86 */ u16 successorId;
    /* 0x88 */ s16 portraitId;
    /* 0x8A */ u16 unk8A;               /* reported by a script command */
    /* 0x8C */ s16 battleTextureId;
    /* 0x8E */ u8 unk8E[0x14];
    /* 0xA2 */ u8 bustUp;               /* the bust-up height: 0 tall, 1 average, 2 low */
    /* 0xA3 */ u8 bustUpVariation;
    /* 0xA4 */ u8 variant;              /* the texture variant drawn for the demon */
    /* 0xA5 */ u8 scriptFlags;          /* read bit by bit by the script commands; bits 2-7: the talk bust-up category */
    /* 0xA6 */ u8 unkA6[2];
};

typedef char Table00RecordAOffsetCheck[sizeof(Table00RecordA) == 0xA8 &&
    offsetof(Table00RecordA, level) == 2 && offsetof(Table00RecordA, maxHp) == 4 &&
    offsetof(Table00RecordA, stats) == 0xC && offsetof(Table00RecordA, flags) == 0x16 &&
    offsetof(Table00RecordA, skills) == 0x50 && offsetof(Table00RecordA, choices) == 0x60 &&
    offsetof(Table00RecordA, experience) == 0x74 && offsetof(Table00RecordA, relatedIds) == 0x80 &&
    offsetof(Table00RecordA, portraitId) == 0x88 && offsetof(Table00RecordA, battleTextureId) == 0x8C &&
    offsetof(Table00RecordA, bustUp) == 0xA2 && offsetof(Table00RecordA, variant) == 0xA4 && offsetof(Table00RecordA, scriptFlags) == 0xA5 ? 1 : -1];

#endif
