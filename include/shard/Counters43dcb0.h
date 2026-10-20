/* The counter block referenced from g_ifTouch + 4. */
#ifndef SHARD_COUNTERS43DCB0_H
#define SHARD_COUNTERS43DCB0_H

#include "common.h"

typedef struct Counters43dcb0 {
    /* 0x0000 */ u8 unk0000[0x8];
    /* 0x0008 */ u8 unk08;
    /* 0x0009 */ u8 unk0009[0x641];
    /* 0x064A */ s16 unk64A;
    /* 0x064C */ s16 unk64C;
    /* 0x064E */ s16 unk64E;
    /* 0x0650 */ s16 unk650;
    /* 0x0652 */ u8 unk0652[0x6];
    /* 0x0658 */ u32 unk658;
    /* 0x065C */ u8 unk065C[0x4];
    /* 0x0660 */ u32 unk660;
    /* 0x0664 */ u32 unk664;
    /* 0x0668 */ u8 unk0668[0x8];
    /* 0x0670 */ u32 unk670;
} Counters43dcb0;

typedef struct Holder43dcb0 {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ Counters43dcb0 *counters;
} Holder43dcb0;

extern Holder43dcb0 g_ifTouch;

#endif
