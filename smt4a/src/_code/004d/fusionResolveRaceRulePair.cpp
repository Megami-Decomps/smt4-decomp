#include "camp/Unite/FusionCandidates.h"
#include "shard/W6_W6Match8_DevilRecordA.h"
#include "gamedata/PackedIdentifiers.h"

extern "C" {
FusionRaceRule *dataTable5Sub3Lookup(u32 race, u32 id);
u16 fusionFindClosestLevelEntry(FusionCandidateTables *tables, u32 race, u32 level);
u16 uniteFindClosestEligibleCandidate(FusionCandidateTables *tables, u32 race, u32 level, u32 flags);

// Apply a directional race rule to two demons and encode their resulting fusion pair.
u32 fusionResolveRaceRulePair(FusionCandidateTables *tables, u16 firstId, u16 secondId, PackedIdentifiers *pair)
{
    u16 result = 0;
    NkmBaseRecordA *first = nkmBaseGetRecord(firstId);
    NkmBaseRecordA *second = nkmBaseGetRecord(secondId);
    FusionRaceRule *rule = dataTable5Sub3Lookup(first->race, second->id);
    FusionRaceRule *reverse = dataTable5Sub3Lookup(second->race, first->id);
    if (first->id == second->id)
        return 0;
    if (rule == NULL) {
        if (reverse == NULL)
            return 0;
        rule = reverse;
    }
    if (rule->kind == 1) {
        u16 level = (first->id == rule->devilId ? second->level : first->level) + 1;
        u32 race = first->id == rule->devilId ? second->race : first->race;
        if (tables->races[race][0].level < level)
            level = tables->races[race][tables->counts[race] - 1].level;
        result = fusionFindClosestLevelEntry(tables, race, level);
        if (first->id == result || second->id == result || result == 0)
            return 0;
    }
    if (rule->kind == 3) {
        result = uniteFindClosestEligibleCandidate(tables, first->id == rule->devilId ? second->race : first->race,
            static_cast<u16>((first->id == rule->devilId ? second->level : first->level) - 1), 0);
        if (first->id == result || second->id == result || result == 0)
            return 0;
    }
    pair->firstIdentifier = firstId;
    pair->secondIdentifier = secondId;
    pair->resultIdentifier = result;
    return 1;
}
}
