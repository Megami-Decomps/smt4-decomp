/* Global at 0x57F248: a pointer (at 4) to a record whose fields are read and decremented one at a
 * time by the shard functions. */
#ifndef SHARD_BLOCK57F248_H
#define SHARD_BLOCK57F248_H

#include "common.h"

typedef struct Record57f248 {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ u8 unk008;
    /* 0x009 */ u8 unk009[0x641];
    /* 0x64A */ s16 unk64A;
    /* 0x64C */ s16 unk64C;
    /* 0x64E */ s16 unk64E;
    /* 0x650 */ s16 unk650;
    /* 0x652 */ u8 unk652[6];
    /* 0x658 */ u32 unk658;
    /* 0x65C */ u8 unk65C[4];
    /* 0x660 */ u32 unk660;
    /* 0x664 */ u32 unk664;
    /* 0x668 */ u8 unk668[8];
    /* 0x670 */ u32 unk670;
} Record57f248;

typedef struct Block57f248 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Record57f248 *record;
} Block57f248;

extern Block57f248 DAT_0057f248;

#endif
