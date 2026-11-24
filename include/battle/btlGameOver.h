/* battle/btlGameOver.c: the game-over screen. */
#ifndef BATTLE_BTLGAMEOVER_H
#define BATTLE_BTLGAMEOVER_H

#include "common.h"
#include <stddef.h>
#include "script/ScriptVm.h"

/* One of the game-over screen's two scaled sprites (IV). */
typedef struct BtlGameOverLayer {
    /* 0x00 */ f32 alpha;
    /* 0x04 */ f32 scale;       /* x and y scale about the pivot */
} BtlGameOverLayer;

/* Shin Megami Tensei IV layout: the script transition and splash animation share this work area. */
typedef struct BtlGameOver {
    /* 0x00 */ u32 state;
    /* 0x04 */ u32 flags;       /* bit 0: use the level-event files and skip the follow-up job */
    /* 0x08 */ u32 frameCounter;
    /* 0x0C */ union { void *dataA; u32 scriptFileAddress; };
    /* 0x10 */ ScriptProcess *process;
    /* 0x14 */ union { void *dataB; u32 messageFileAddress; };
    /* 0x18 */ u32 followupJob;
    /* 0x1C */ union { u32 drawEnabled; s32 splashPhase; };
    /* 0x20 */ f32 frontAlpha;  /* alpha of the sprite drawn last, over the layers */
    /* 0x24 */ f32 crossfadeFrame;
    /* 0x28 */ BtlGameOverLayer layers[2]; /* the two blended sprites scaled about a shared pivot */
    /* 0x38 */ s32 splashWait;
    /* 0x3C */ s32 touchRegion;
} BtlGameOver;

/* Apocalypse layout: the fields sit four bytes further on. */
typedef struct BtlGameOverA {
    union {
        /* 0x00 */ u8 unk00[0x10];
        /* 0x00 */ u32 state;
        struct {
            u8 unk00[8];
            /* 0x08 */ u32 frameCounter;
        } timing;
        struct {
            u8 unk00[0xC];
            /* 0x0C */ u32 phase;       /* step within the script-driven states */
        } step;
    };
    /* 0x10 */ void *dataA;
    /* 0x14 */ ScriptProcess *process;
    /* 0x18 */ void *dataB;
} BtlGameOverA;

struct BtlGameOverGlobalsA {
    BtlGameOverA *state; // 0x00
    u32 unk04;
    u32 blockedStates[2]; // 0x08
    u32 blockedTransitions[2]; // 0x10
    u32 forcedStates[2]; // 0x18
};

typedef char BtlGameOverFrameOffsetCheck[offsetof(BtlGameOverA, timing.frameCounter) == 8 ? 1 : -1];
typedef char BtlGameOverGlobalsSizeCheck[sizeof(BtlGameOverGlobalsA) == 0x20 ? 1 : -1];
typedef char BtlGameOverAStateOffsetCheck[
    offsetof(BtlGameOverA, state) == 0 && sizeof(BtlGameOverA) == 0x1C ? 1 : -1];

/* Work area of the job that owns the game-over state. */
typedef struct BtlGameOverOwner {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ u32 job;         /* job stopped when the state is destroyed */
} BtlGameOverOwner;

typedef struct BtlGameOverOwnerA {
    /* 0x00 */ u8 unk00[0x4C];
    /* 0x4C */ u32 job;
} BtlGameOverOwnerA;

struct BtlGameOverJobWork {
    union {
        /* 0x0000 */ u8 unk0000[0x2C];
        /* 0x0000 */ u32 parentJob;
    };
    /* 0x002C */ u32 job;
    /* 0x0030 */ u8 unk0030[0x58];
    /* 0x0088 */ s32 mode;
    /* 0x008C */ u8 unk008C[0x4414];
    /* 0x44A0 */ u64 flags;
};

struct BtlGameOverSequence {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 job;
    /* 0x08 */ u8 mode;
    /* 0x09 */ u8 unk09[3];
    /* 0x0C */ u32 state;
    /* 0x10 */ s32 phase;
    /* 0x14 */ s32 frame;
};

#ifdef __cplusplus
extern "C" {
#endif
/* The game-over screen's upper-screen draw (IV); `work` is the draw task's work area, unused. */
u32 btlGameOverDraw(BtlGameOver *gameOver, u32 work);
#ifdef __cplusplus
}
#endif

typedef char BtlGameOverSizeCheck[
    offsetof(BtlGameOver, drawEnabled) == 0x1C && offsetof(BtlGameOver, layers) == 0x28 &&
    offsetof(BtlGameOver, touchRegion) == 0x3C && sizeof(BtlGameOver) == 0x40 ? 1 : -1];
typedef char BtlGameOverASizeCheck[sizeof(BtlGameOverA) == 0x1C ? 1 : -1];
typedef char BtlGameOverOwnerSizeCheck[sizeof(BtlGameOverOwner) == 0x30 ? 1 : -1];
typedef char BtlGameOverOwnerASizeCheck[sizeof(BtlGameOverOwnerA) == 0x50 ? 1 : -1];
typedef char BtlGameOverSequenceSizeCheck[sizeof(BtlGameOverSequence) == 0x18 ? 1 : -1];
typedef char BtlGameOverJobWorkParentOffsetCheck[
    offsetof(BtlGameOverJobWork, parentJob) == 0 &&
    sizeof(BtlGameOverJobWork) == 0x44A8 ? 1 : -1];

#endif
