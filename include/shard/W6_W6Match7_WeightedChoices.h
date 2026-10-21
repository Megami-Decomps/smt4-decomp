#ifndef SHARD_W6_W6MATCH7_WEIGHTEDCHOICES_H
#define SHARD_W6_W6MATCH7_WEIGHTEDCHOICES_H

#include "common.h"

struct WeightedAlternateChoice {
    /* 0x00 */ u16 id;
    /* 0x02 */ u16 weight;
};

struct WeightedAlternateRecord {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 id;
    /* 0x22 */ u8 unk22[6];
    /* 0x28 */ WeightedAlternateChoice choices[5];
};

#endif
