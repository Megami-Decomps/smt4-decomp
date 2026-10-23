#ifndef GAMEDATA_FUSION_CANDIDATE_FILTER_H
#define GAMEDATA_FUSION_CANDIDATE_FILTER_H
#include "common.h"
#include <stddef.h>

struct FusionCandidateFilter {
    /* 0x000 */ u8 unk000[0x118];
    /* 0x118 */ u8 matchId;
    u8 unk119;
    /* 0x11A */ u16 id;
    /* 0x11C */ u8 matchRace;
    u8 unk11D;
    /* 0x11E */ u16 race;
    u8 unk120[0x16];
    /* 0x136 */ u8 requireParents;
    u8 unk137;
    /* 0x138 */ s16 requiredSlots[2];
    /* 0x13C */ u8 excludeParents;
    u8 unk13D;
    /* 0x13E */ s16 excludedSlots[2];
    /* 0x142 */ u8 allowSpecialRace;
    u8 unk143[0x39];
    /* 0x17C */ u8 excludeMarked;
    /* 0x17D */ u8 availableOnly;
};
typedef char FusionCandidateFilterOffsets[
    offsetof(FusionCandidateFilter, id) == 0x11A &&
    offsetof(FusionCandidateFilter, requiredSlots) == 0x138 &&
    offsetof(FusionCandidateFilter, excludedSlots) == 0x13E &&
    offsetof(FusionCandidateFilter, availableOnly) == 0x17D &&
    sizeof(FusionCandidateFilter) == 0x17E ? 1 : -1];
#endif
