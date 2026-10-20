/* The status-down screen's object (smt4a g_statusDown, 0x588fe8): its state machine and timer. */
#ifndef SHARD_W4_W4MATCH5_STATUSDOWN_H
#define SHARD_W4_W4MATCH5_STATUSDOWN_H

#include "common.h"

/* A state with its predecessor. */
typedef struct StateTrack {
    u32 state;
    u32 previous;
} StateTrack;

typedef struct StatusDown {
    /* 0x0000 */ u8 unk0000[0x518];
    /* 0x0518 */ StateTrack track;
    /* 0x0520 */ u8 unk0520[4];
    /* 0x0524 */ u32 timer;
    /* 0x0528 */ u8 unk0528[0x134];
    /* 0x065c */ s32 selection;       /* -1 when none */
    /* 0x0660 */ u8 unk0660[0x1e3c];
    /* 0x249c */ u32 value249c;
} StatusDown;

extern StatusDown *g_statusDown;

#endif
