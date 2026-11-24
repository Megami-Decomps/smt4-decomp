#ifndef BATTLE_BTLMARKERSTEP_H
#define BATTLE_BTLMARKERSTEP_H

#include "shard/W5_W5Match4_BattleVectorTransition.h"
#include <stddef.h>

/* The source a battle UI marker follows. */
struct BtlMarkerSource {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ BattleVector3 offset;
    /* 0x3C */ u8 unk3C[0x26];
    /* 0x62 */ s16 id;
};

/* One step of a marker request: enqueue it, then wait for the resulting UI handle to finish. */
struct BtlMarkerStep {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u16 result;     /* 1 to continue, 0 when finished */
    /* 0x04 */ u8 unk04;
    /* 0x05 */ u8 flags;
    /* 0x06 */ u8 unk06[0xE];
    /* 0x14 */ BtlMarkerSource *unit;
    /* 0x18 */ u8 unk18[4];
    /* 0x1C */ u32 secondId;
    /* 0x20 */ s8 phase;
    /* 0x21 */ u8 unk21;
    /* 0x22 */ u8 compact;
    /* 0x23 */ u8 unk23;
    /* 0x24 */ s16 count;
    /* 0x26 */ s16 handle;
    /* 0x28 */ s32 kind;
    /* 0x2C */ u8 unk2C[0x18];
    /* 0x44 */ u8 emphasised;
    /* 0x45 */ u8 unk45[7];
    /* 0x4C */ u32 firstId;
};

typedef char BtlMarkerSourceOffsets[offsetof(BtlMarkerSource, offset) == 0x30 &&
    offsetof(BtlMarkerSource, id) == 0x62 ? 1 : -1];
typedef char BtlMarkerStepOffsets[offsetof(BtlMarkerStep, unit) == 0x14 &&
    offsetof(BtlMarkerStep, phase) == 0x20 && offsetof(BtlMarkerStep, handle) == 0x26 &&
    offsetof(BtlMarkerStep, emphasised) == 0x44 && offsetof(BtlMarkerStep, firstId) == 0x4C ? 1 : -1];

#endif
