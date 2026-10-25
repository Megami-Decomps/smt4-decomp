#ifndef STATUS_EXPERIENCEBARS_H
#define STATUS_EXPERIENCEBARS_H

#include "common.h"
#include <stddef.h>

/* The experience animation and its cached bar widths, indexed by saved unit record. */
struct ExperienceBarStateIV {
    u8 unk0000[0xd3a0];
    /* 0xd3a0 */ u64 playerProgress;
    /* 0xd3a8 */ u64 unitProgress[24];
    /* 0xd468 */ u16 playerWidth;
    /* 0xd46a */ u16 unitWidths[24];
    /* 0xd49a */ s16 playerRankDelta;
    /* 0xd49c */ s16 unitRankDelta[24];
    u8 unkD4CC[0x32];
    /* 0xd4fe */ u8 playerFull;
    /* 0xd4ff */ u8 unitFull[24];
    u8 unkD517[0x1a];
    /* 0xd531 */ s8 unitRankMode[24];
};
typedef char ExperienceBarStateOffsets[
    offsetof(ExperienceBarStateIV, playerWidth) == 0xd468 &&
    offsetof(ExperienceBarStateIV, playerRankDelta) == 0xd49a &&
    offsetof(ExperienceBarStateIV, playerFull) == 0xd4fe &&
    offsetof(ExperienceBarStateIV, unitRankMode) == 0xd531 ? 1 : -1];

#endif
