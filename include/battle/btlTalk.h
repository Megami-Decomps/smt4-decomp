/* battle/btlTalk.c: the demon negotiation (talk) screen. */
#ifndef BATTLE_BTLTALK_H
#define BATTLE_BTLTALK_H

#include "common.h"
#include "script/ScriptVm.h"
#include <stddef.h>

struct BtlTalkOwner;

/* The unit the talk is held with, as far as the screen reads it. */
typedef struct BtlTalkUnitData {
    /* 0x000 */ u8 unk000[0x14E];
    /* 0x14E */ s16 talkValue;
} BtlTalkUnitData;

typedef struct BtlTalkUnit {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ BtlTalkUnitData *data;
} BtlTalkUnit;

/* The talk screen's state, one heap block owned by a module global (Shin Megami Tensei IV). */
typedef struct BtlTalk {
    /* 0x00 */ struct BtlTalkOwner *owner;
    /* 0x04 */ BtlTalkUnit *unit;
    /* 0x08 */ void *dataA;     /* heap blocks freed on teardown */
    /* 0x0C */ void *dataB;
    /* 0x10 */ ScriptProcess *process;   /* script process object */
    /* 0x14 */ void *dataC;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u32 argA;
    /* 0x20 */ u32 argB;
    /* 0x24 */ u8 unk24[0x0C];
    /* 0x30 */ s32 talkValue;
    /* 0x34 */ s8 choices[0x80]; /* 0xFF = empty */
    /* 0xB4 */ u8 unkB4[4];
    /* 0xB8 */ u32 unkB8;
    /* 0xBC */ u32 unkBC;
    /* 0xC0 */ u32 unkC0;
    /* 0xC4 */ u8 unkC4;
    /* 0xC5 */ u8 unkC5;
    /* 0xC6 */ u8 unkC6[2];
    /* 0xC8 */ s32 selected;
} BtlTalk;

typedef char BtlTalkSizeCheck[sizeof(BtlTalk) == 0xCC ? 1 : -1];

/* Negotiation work in Apocalypse. The 0x100-byte used-marker array is
 * initialized to -1 by the session creator. */
typedef struct BtlTalkA {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ void *tableFile;
    /* 0x00C */ u8 unk00C[0x24];
    /* 0x030 */ s32 actorId;
    /* 0x034 */ s32 used[64];
    /* 0x134 */ u8 unk134[4];
    /* 0x138 */ u32 unk138;
    /* 0x13C */ u32 unk13C;
    /* 0x140 */ u32 unk140;
} BtlTalkA;

typedef char BtlTalkAPrefixCheck[offsetof(BtlTalkA, tableFile) == 8 &&
    offsetof(BtlTalkA, actorId) == 0x30 && offsetof(BtlTalkA, used) == 0x34 &&
    offsetof(BtlTalkA, unk138) == 0x138 ? 1 : -1];

struct BtlTalkTableFieldSetA {
    u16 values[5];
    u8 smallValues[2];
    u16 extraValues[2];
    u32 words[2];
};

struct BtlTalkTableGroupA {
    u8 flags[4];
    BtlTalkTableFieldSetA entries[3];
};

struct BtlTalkTableRecordA {
    /* 0x00 */ u16 values[3];
    /* 0x06 */ u8 category;
    /* 0x07 */ u8 unk07;
    /* 0x08 */ BtlTalkTableGroupA groups[3];
    /* 0xEC */ s16 enabled;
    /* 0xEE */ u16 requiredFlag;
};

typedef char BtlTalkTableRecordACheck[sizeof(BtlTalkTableRecordA) == 0xf0 &&
    offsetof(BtlTalkTableRecordA, groups) == 8 && offsetof(BtlTalkTableRecordA, enabled) == 0xec &&
    offsetof(BtlTalkTableRecordA, requiredFlag) == 0xee ? 1 : -1];

/* Work area of the job that owns the talk screen (Shin Megami Tensei IV). */
typedef struct BtlTalkOwner {
    /* 0x00 */ u32 parentJob;
    /* 0x04 */ u8 unk04[0x1C];
    /* 0x20 */ u32 job;         /* job stopped when the screen is destroyed */
} BtlTalkOwner;

#endif
