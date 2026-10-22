#ifndef GAMEDATA_INHERITEDAFFINITIES_H
#define GAMEDATA_INHERITEDAFFINITIES_H
#include "common.h"
#include <stddef.h>
struct AffinitySourcePair {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u16 first;
    /* 0x0A */ u8 unk0A[2];
    /* 0x0C */ u16 second;
};
struct InheritedAffinityRecord {
    /* 0x00 */ u8 unk00[0x74];
    /* 0x74 */ s16 affinities[18];
};
typedef char AffinitySourcePairOffsetsCheck[offsetof(AffinitySourcePair, first) == 8 &&
    offsetof(AffinitySourcePair, second) == 0xC ? 1 : -1];
typedef char InheritedAffinityOffsetCheck[offsetof(InheritedAffinityRecord, affinities) == 0x74 ? 1 : -1];
#endif
