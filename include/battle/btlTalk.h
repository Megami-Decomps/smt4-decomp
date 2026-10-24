/* battle/btlTalk.c: the demon negotiation (talk) screen. */
#ifndef BATTLE_BTLTALK_H
#define BATTLE_BTLTALK_H

#include "common.h"

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
    /* 0x10 */ void *process;   /* script process object */
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

/* The same block in Apocalypse; only the three trailing values are named. */
typedef struct BtlTalkA {
    /* 0x000 */ u8 unk000[0x138];
    /* 0x138 */ u32 unk138;
    /* 0x13C */ u32 unk13C;
    /* 0x140 */ u32 unk140;
} BtlTalkA;

/* Work area of the job that owns the talk screen (Shin Megami Tensei IV). */
typedef struct BtlTalkOwner {
    /* 0x00 */ u32 parentJob;
    /* 0x04 */ u8 unk04[0x1C];
    /* 0x20 */ u32 job;         /* job stopped when the screen is destroyed */
} BtlTalkOwner;

#endif
