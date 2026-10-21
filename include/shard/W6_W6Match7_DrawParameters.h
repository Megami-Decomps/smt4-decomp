#ifndef SHARD_W6_W6MATCH7_DRAWPARAMETERS_H
#define SHARD_W6_W6MATCH7_DRAWPARAMETERS_H

#include "common.h"

/* The interleaved halfword/word packet filled by paramsInit. */
typedef struct Params002c312c {
    /* 0x00 */ u16 h0;
    /* 0x02 */ u16 h2;
    /* 0x04 */ u16 h4;
    /* 0x06 */ u16 h6;
    /* 0x08 */ u16 h8;
    /* 0x0a */ u16 unk0a;
    /* 0x0c */ u32 w0c;
    /* 0x10 */ u32 w10;
    /* 0x14 */ u32 w14;
    /* 0x18 */ u32 w18;
    /* 0x1c */ u32 w1c;
} Params002c312c;

#endif
