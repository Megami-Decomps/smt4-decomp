/* battle/btlStage.c: the battle stage model. */
#ifndef BATTLE_BTLSTAGE_H
#define BATTLE_BTLSTAGE_H

#include "common.h"

/* The stage model's work block. Only the fields used so far are named. */
typedef struct BtlStage {
    /* 0x00 */ u8 unk00[0xA0];
    /* 0xA0 */ s32 state;      /* 0 = off, 1..4 = setup, run, teardown (see the update function) */
    /* 0xA4 */ u8 unkA4[0x1C];
    /* 0xC0 */ void *context;  /* the stage context copied in on setup */
} BtlStage;

/* Apocalypse keeps the stage context and the stage model's block side by side. */
typedef struct BtlStageGlobals {
    /* 0x00 */ void *context;  /* heap block made by the stage setup */
    /* 0x04 */ BtlStage *stage;
} BtlStageGlobals;

/* Work area of the job that owns the stage (Apocalypse layout). */
typedef struct BtlStageOwnerA {
    /* 0x00 */ u8 unk00[0x54];
    /* 0x54 */ u32 job;       /* job stopped when the stage is destroyed */
} BtlStageOwnerA;

#endif
