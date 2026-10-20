/* battle/btlTalk.c: the demon negotiation (talk) screen. */
#ifndef BATTLE_BTLTALK_H
#define BATTLE_BTLTALK_H

#include "common.h"

/* The talk screen's state, one heap block owned by a module global (Shin Megami Tensei IV). */
typedef struct BtlTalk {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ void *dataA;     /* heap blocks freed on teardown */
    /* 0x0C */ void *dataB;
    /* 0x10 */ void *process;   /* script process object */
    /* 0x14 */ void *dataC;
    /* 0x18 */ u8 unk18[0xA0];
    /* 0xB8 */ u32 unkB8;
    /* 0xBC */ u32 unkBC;
    /* 0xC0 */ u32 unkC0;
} BtlTalk;

/* The same block in Apocalypse; only the three trailing values are named. */
typedef struct BtlTalkA {
    /* 0x000 */ u8 unk000[0x138];
    /* 0x138 */ u32 unk138;
    /* 0x13C */ u32 unk13C;
    /* 0x140 */ u32 unk140;
} BtlTalkA;

/* Work area of the job that owns the talk screen (Shin Megami Tensei IV). */
typedef struct BtlTalkOwner {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u32 job;         /* job stopped when the screen is destroyed */
} BtlTalkOwner;

#endif
