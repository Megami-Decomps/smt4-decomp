#ifndef STATUS_EXPERIENCEBARS_H
#define STATUS_EXPERIENCEBARS_H

#include "common.h"
#include <stddef.h>

/* The experience animation and its cached bar widths. Index 0 is the player, index 1 + n saved unit record n. */
struct ExperienceBarStateIV {
    u8 unk0000[0xd3a0];
    /* 0xd3a0 */ u64 progress[25];   /* gained experience, 12-bit fixed point */
    /* 0xd468 */ u16 widths[25];     /* bar width shown, in sprite pixels */
    /* 0xd49a */ s16 rankDelta[25];  /* levels already gained, added to the base level */
    u8 unkD4CC[0x32];
    /* 0xd4fe */ s8 full[25];        /* the bar is full (s8: retail reads it through the split 0xd400 base) */
    u8 unkD517[0x1a];
    /* 0xd531 */ s8 unitRankMode[24]; /* by saved unit record: the third argument of the unit's cost lookup */
};
typedef char ExperienceBarStateOffsets[
    offsetof(ExperienceBarStateIV, widths) == 0xd468 &&
    offsetof(ExperienceBarStateIV, rankDelta) == 0xd49a &&
    offsetof(ExperienceBarStateIV, full) == 0xd4fe &&
    offsetof(ExperienceBarStateIV, unitRankMode) == 0xd531 ? 1 : -1];

#endif
