#ifndef GAMEDATA_FUSION_CANDIDATE_FILTER_H
#define GAMEDATA_FUSION_CANDIDATE_FILTER_H
#include "common.h"
#include <stddef.h>

struct FusionCandidateFilter {
    /* 0x000 */ u8 unk000[0x118];
    /* 0x118 */ s8 matchId;
    u8 unk119;
    /* 0x11A */ u16 id;
    /* 0x11C */ s8 matchRace;
    u8 unk11D;
    /* 0x11E */ u16 race;
    u8 unk120[0x16];
    /* 0x136 */ s8 requireParents;
    u8 unk137;
    /* 0x138 */ s16 requiredSlots[2];
    /* 0x13C */ s8 excludeParents;
    u8 unk13D;
    /* 0x13E */ s16 excludedSlots[2];
    /* 0x142 */ s8 allowSpecialRace;
    u8 unk143[0x39];
    /* 0x17C */ s8 excludeMarked;
    /* 0x17D */ s8 availableOnly;
};
typedef char FusionCandidateFilterOffsets[
    offsetof(FusionCandidateFilter, matchId) == 0x118 &&
    offsetof(FusionCandidateFilter, matchRace) == 0x11C &&
    offsetof(FusionCandidateFilter, requireParents) == 0x136 &&
    offsetof(FusionCandidateFilter, excludeParents) == 0x13C &&
    offsetof(FusionCandidateFilter, allowSpecialRace) == 0x142 &&
    offsetof(FusionCandidateFilter, excludeMarked) == 0x17C &&
    offsetof(FusionCandidateFilter, id) == 0x11A &&
    offsetof(FusionCandidateFilter, requiredSlots) == 0x138 &&
    offsetof(FusionCandidateFilter, excludedSlots) == 0x13E &&
    offsetof(FusionCandidateFilter, availableOnly) == 0x17D &&
    sizeof(FusionCandidateFilter) == 0x17E ? 1 : -1];
#endif
