#ifndef SHARD_W6_W6MATCH3_RECORD08SUB2_H
#define SHARD_W6_W6MATCH3_RECORD08SUB2_H

#include "common.h"

struct Record08Sub2SortKeys {
    /* 0x00 */ u8 unk00[0x59];
    /* 0x59 */ u8 alternatePrimary;
    /* 0x5A */ u8 unk5a[0xc];
    /* 0x66 */ s16 primary;
    /* 0x68 */ u8 unk68[0x30];
    /* 0x98 */ u16 secondary;
};

#endif
