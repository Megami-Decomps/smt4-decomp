#ifndef GAMEDATA_FUSION_CANDIDATE_FILTER_H
#define GAMEDATA_FUSION_CANDIDATE_FILTER_H
#include "common.h"
#include <stddef.h>

/* Allocated as 0x180 bytes by FUN_001f3044 and initialized by FUN_003c9c94. */
struct FusionCandidateFilter {
    /* 0x000 */ u8 unk000[0x118];
    /* 0x118 */ s8 matchId;
    u8 unk119;
    /* 0x11A */ u16 id;
    /* 0x11C */ s8 matchRace;
    u8 unk11D;
    /* 0x11E */ u16 race;
    /* 0x120 */ s8 matchSkill;
    u8 unk121;
    /* 0x122 */ u16 skill;
    u8 unk124[0xE];
    /* 0x132 */ s8 matchAffinity;
    u8 unk133;
    /* 0x134 */ u16 affinity;
    /* 0x136 */ s8 requireParents;
    u8 unk137;
    /* 0x138 */ s16 requiredSlots[2];
    /* 0x13C */ s8 excludeParents;
    u8 unk13D;
    /* 0x13E */ s16 excludedSlots[2];
    /* 0x142 */ s8 allowSpecialRace;
    /* 0x143 */ s8 matchCategory;
    /* 0x144 */ u16 category;
    /* 0x146 */ u16 skills[24];
    u8 unk176[2];
    /* 0x178 */ s32 skillCount;
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
    offsetof(FusionCandidateFilter, matchSkill) == 0x120 &&
    offsetof(FusionCandidateFilter, skill) == 0x122 &&
    offsetof(FusionCandidateFilter, matchAffinity) == 0x132 &&
    offsetof(FusionCandidateFilter, affinity) == 0x134 &&
    offsetof(FusionCandidateFilter, matchCategory) == 0x143 &&
    offsetof(FusionCandidateFilter, category) == 0x144 &&
    offsetof(FusionCandidateFilter, skills) == 0x146 &&
    offsetof(FusionCandidateFilter, skillCount) == 0x178 &&
    sizeof(FusionCandidateFilter) == 0x180 ? 1 : -1];
struct StatBlock;
struct PackedIdentifiers;
extern "C" {
u32 FUN_002624b8(FusionCandidateFilter *owner, StatBlock *first, StatBlock *second,
                 PackedIdentifiers *result);
u32 FUN_002624c4(FusionCandidateFilter *owner, u16 first, u16 second,
                 PackedIdentifiers *result);
void FUN_00269bc4(FusionCandidateFilter *owner);
u16 fusionCandidateMatchesParentFilter(const FusionCandidateFilter *owner,
                                      u16 first, u16 second, u16 product);
u32 battleCandidateMatchesSkillFilters(FusionCandidateFilter *owner, u32 first,
                                       u32 second, u16 product);
}
#endif
