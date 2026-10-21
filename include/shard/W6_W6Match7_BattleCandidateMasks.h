#ifndef SHARD_W6_W6MATCH7_BATTLECANDIDATEMASKS_H
#define SHARD_W6_W6MATCH7_BATTLECANDIDATEMASKS_H
#include "common.h"

struct BattleCandidateMasks {
    /* 0x00 */ u64 required;
    /* 0x08 */ u8 unk08[0x10];
    /* 0x18 */ u64 unavailable;
    union {
        /* 0x20 */ u8 unk20[8];
        /* 0x20 */ u64 singleAction;
    };
    /* 0x28 */ u64 excluded;
};

extern "C" BattleCandidateMasks g_btlCandidateMasks;
#endif
