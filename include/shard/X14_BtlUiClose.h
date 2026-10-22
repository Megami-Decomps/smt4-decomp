/* Battle UI state used when the battle UI job closes (Apocalypse). */
#ifndef SHARD_X14_BTLUICLOSE_H
#define SHARD_X14_BTLUICLOSE_H

#include "common.h"
#include <stddef.h>

/* A heap block that owns a helper job. */
typedef struct BtlUiHelper {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 job;
} BtlUiHelper;

/* Module state at 0x5715f8. */
typedef struct BtlUiCloseState {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u16 helperActive;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ BtlUiHelper *helper;
    /* 0x0C */ u8 unk0C[0x34];
    /* 0x40 */ u64 ownedFlags;       /* display flags the UI set; cleared from the work on close */
} BtlUiCloseState;

/* The battle UI job's work area. */
typedef struct BtlUiCloseWork {
    /* 0x0000 */ u8 unk0000[0x80];
    /* 0x0080 */ u32 job;
    /* 0x0084 */ u8 unk0084[0x4524];
    /* 0x45A8 */ u64 flags;
} BtlUiCloseWork;

typedef char BtlUiCloseOffsets[offsetof(BtlUiCloseState, helper) == 0x8 &&
    offsetof(BtlUiCloseState, ownedFlags) == 0x40 && offsetof(BtlUiCloseWork, job) == 0x80 &&
    offsetof(BtlUiCloseWork, flags) == 0x45A8 && offsetof(BtlUiHelper, job) == 0x10 ? 1 : -1];

#endif
