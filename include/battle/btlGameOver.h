/* battle/btlGameOver.c: the game-over screen. */
#ifndef BATTLE_BTLGAMEOVER_H
#define BATTLE_BTLGAMEOVER_H

#include "common.h"

/* Shin Megami Tensei IV layout. */
typedef struct BtlGameOver {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ void *dataA;     /* heap block */
    /* 0x10 */ void *process;   /* script process object */
    /* 0x14 */ void *dataB;     /* heap block */
} BtlGameOver;

/* Apocalypse layout: the fields sit four bytes further on. */
typedef struct BtlGameOverA {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ void *dataA;
    /* 0x14 */ void *process;
    /* 0x18 */ void *dataB;
} BtlGameOverA;

/* Work area of the job that owns the game-over state. */
typedef struct BtlGameOverOwner {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ u32 job;         /* job stopped when the state is destroyed */
} BtlGameOverOwner;

typedef struct BtlGameOverOwnerA {
    /* 0x00 */ u8 unk00[0x4C];
    /* 0x4C */ u32 job;
} BtlGameOverOwnerA;

#endif
