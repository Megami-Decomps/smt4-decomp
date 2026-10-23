/* battle/btlStage.c: the battle stage model. */
#ifndef BATTLE_BTLSTAGE_H
#define BATTLE_BTLSTAGE_H

#include "common.h"
#include <stddef.h>

struct BtlStageIdPair { s32 stageId, stageVariant; };

/* The stage model's work block. Only the fields used so far are named. */
typedef struct BtlStage {
    /* 0x00 */ union {
        u8 unk00[0xA0];
        struct {
            u8 unk00[0x84];
            /* 0x84 */ BtlStageIdPair identifiers;
            /* 0x8C */ s16 selection;
            /* 0x8E */ u8 unk8E[2];
            /* 0x90 */ f32 parameters[3];
        } setup;
        struct {
            /* 0x00 */ u8 unk00BeforeInput[8];
            /* 0x08 */ u32 first;
            /* 0x0C */ u32 second;
        } setupInput;
    };
    /* 0xA0 */ s32 state;      /* 0 = off, 1..4 = setup, run, teardown (see the update function) */
    union {
        /* 0xA4 */ u8 unkA4[0x1C];
        struct {
            /* 0xA4 */ BtlStageIdPair identifiers;
            /* 0xAC */ s16 selection;
            u8 unkAE[2];
            /* 0xB0 */ f32 parameters[3];
            /* 0xBC */ u16 frame;
        } apocalypse;
    };
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
typedef char BtlStageSetupOffsets[sizeof(BtlStage) == 0xC4 &&
    offsetof(BtlStage, setup.identifiers.stageId) == 0x84 &&
    offsetof(BtlStage, setup.identifiers.stageVariant) == 0x88 &&
    offsetof(BtlStage, setup.selection) == 0x8C && offsetof(BtlStage, setup.parameters) == 0x90 ? 1 : -1];
typedef char BtlStageApocalypseOffsets[offsetof(BtlStage, apocalypse.identifiers) == 0xA4 &&
    offsetof(BtlStage, apocalypse.selection) == 0xAC &&
    offsetof(BtlStage, apocalypse.parameters) == 0xB0 ? 1 : -1];
typedef char BtlStageUpdateOffsets[
    offsetof(BtlStage, setupInput.first) == 8 &&
    offsetof(BtlStage, setupInput.second) == 0xC &&
    offsetof(BtlStage, apocalypse.frame) == 0xBC &&
    sizeof(BtlStage) == 0xC4 ? 1 : -1];

#endif
