#ifndef SHARD_W6_W6MATCH7_BATTLECANDIDATEMASKS_H
#define SHARD_W6_W6MATCH7_BATTLECANDIDATEMASKS_H
#include "common.h"
#include <stddef.h>

struct BattleCandidateMasks {
    /* 0x00 */ u64 required;
    union {
        /* 0x08 */ u8 unk08[0x10];
        struct {
            /* 0x08 */ u64 direct;
            /* 0x10 */ u64 scaled;
        } maximumSource;
    };
    /* 0x18 */ u64 unavailable;
    union {
        /* 0x20 */ u8 unk20[8];
        /* 0x20 */ u64 singleAction;
    };
    /* 0x28 */ u64 excluded;
    /* 0x30 */ u64 unk30;
};


typedef char BattleCandidateMasksLayoutCheck[offsetof(BattleCandidateMasks, unk30) == 0x30 ? 1 : -1];
typedef char BattleCandidateMaximumSourceOffsetsCheck[
    offsetof(BattleCandidateMasks, maximumSource.direct) == 8 &&
    offsetof(BattleCandidateMasks, maximumSource.scaled) == 0x10 &&
    sizeof(BattleCandidateMasks) == 0x38 ? 1 : -1];

extern "C" BattleCandidateMasks g_btlCandidateMasks;
#endif
