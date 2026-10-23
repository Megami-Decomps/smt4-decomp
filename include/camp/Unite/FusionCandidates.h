#ifndef CAMP_UNITE_FUSION_CANDIDATES_H
#define CAMP_UNITE_FUSION_CANDIDATES_H
#include "common.h"
#include <stddef.h>

struct FusionCandidateEntry {
    u16 id;
    u16 level;
};
struct FusionCandidateTables {
    u8 counts[65];
    u8 padding[3];
    FusionCandidateEntry *races[65];
};
struct FusionRaceRule {
    u32 race : 8;
    u32 devilId : 16;
    u32 kind : 8;
};
typedef char FusionCandidateTablesLayoutCheck[
    sizeof(FusionCandidateEntry) == 4 && offsetof(FusionCandidateEntry, level) == 2 &&
    offsetof(FusionCandidateTables, races) == 0x44 && sizeof(FusionRaceRule) == 4 ? 1 : -1];
#endif
