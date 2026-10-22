/* The work area of the job whose step runs a two-stage open: wait for a loader, then a fade. */
#ifndef SHARD_CAMPMENUJOBWORK_H
#define SHARD_CAMPMENUJOBWORK_H

#include "common.h"
#include <stddef.h>

struct StagedOpenWork {
    /* 0x0000 */ u32 flags;
    /* 0x0004 */ u8 unk0004[0x17a0];
    /* 0x17A4 */ s32 state;
    /* 0x17A8 */ u8 unk17a8[0x4];
    /* 0x17AC */ u32 message;
    /* 0x17B0 */ u8 fade[0x20];
    /* 0x17D0 */ u8 loader[0x4];
};

typedef char StagedOpenWorkStateOffsetCheck[offsetof(StagedOpenWork, state) == 0x17a4 ? 1 : -1];
typedef char StagedOpenWorkLoaderOffsetCheck[offsetof(StagedOpenWork, loader) == 0x17d0 ? 1 : -1];

#endif
