/* The status-down screen's work area behind g_statusDown (Apocalypse). */
#ifndef SHARD_X14_STATUSDOWN_H
#define SHARD_X14_STATUSDOWN_H

#include "common.h"
#include <stddef.h>

/* The screen's script and its two heap blocks. */
typedef struct StatusDownScript {
    /* 0x00 */ u8 unk00[0xC0];
    /* 0xC0 */ void *dataA;
    /* 0xC4 */ void *dataB;
    /* 0xC8 */ void *process;
} StatusDownScript;

/* The touch region ids, reset to -1 as a block. */
typedef struct StatusDownTouchIds {
    /* 0x00 */ s32 ids[21];
} StatusDownTouchIds;

typedef struct StatusDown {
    /* 0x0000 */ u32 job;
    union {
        /* 0x0004 */ u8 unk0004[0x540];
        struct {
            u8 unk0004BeforeIndicators[0x538];
            /* 0x053c */ s32 first;
            /* 0x0540 */ s32 second;
        } indicators;
    };
    /* 0x0544 */ StatusDownTouchIds touch;
    /* 0x0598 */ u8 unk0598[2];
    /* 0x059A */ u8 touchRegionCount;
    /* 0x059B */ u8 unk059B[0x1E1D];
    /* 0x23B8 */ void *slot;
    /* 0x23BC */ u8 unk23BC[0xF0];
    /* 0x24AC */ StatusDownScript script;
} StatusDown;

extern "C" StatusDown *g_statusDown;

typedef char StatusDownOffsets[offsetof(StatusDown, touch) == 0x544 &&
    offsetof(StatusDown, touchRegionCount) == 0x59A && offsetof(StatusDown, slot) == 0x23B8 &&
    offsetof(StatusDown, script) == 0x24AC ? 1 : -1];
typedef char StatusDownIndicatorOffsets[
    offsetof(StatusDown, indicators.first) == 0x53c &&
    offsetof(StatusDown, indicators.second) == 0x540 ? 1 : -1];

#endif
