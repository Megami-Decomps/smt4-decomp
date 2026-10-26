/* NON_MATCHING: the packed pair is read/written as one ldrd/strd u64 in retail (we emit separate word loads), the last-candidate index is computed from the entry count differently, and the ids sit in different saved registers. */
#include "camp/Unite/FusionCandidates.h"
#include "shard/W6_W6Match8_DevilRecordA.h"
#include "gamedata/PackedIdentifiers.h"

extern "C" {
FusionRaceRule *dataTable5Sub3Lookup(u32 race, u32 id);
u16 FUN_004dc154(FusionCandidateTables *tables, u32 race, u32 level);
u16 uniteFindClosestEligibleCandidate(FusionCandidateTables *tables, u32 race, u32 level, u32 flags);

// Apply a directional race rule to two demons and encode their resulting fusion pair.
u32 FUN_004db2b8(FusionCandidateTables *tables, u16 firstId, u16 secondId, PackedIdentifiers *pair)
{
    u16 result = 0;
    DevilRecordA *first = FUN_00184310(firstId);
    DevilRecordA *second = FUN_00184310(secondId);
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
        u16 level;
        u32 race;
        if (first->id == rule->devilId) {
            level = second->level;
            race = second->race;
        } else {
            level = first->level;
            race = first->race;
        }
        ++level;
        FusionCandidateEntry *entries = tables->races[race];
        if (entries[0].level < level)
            level = entries[tables->counts[race] - 1].level;
        result = FUN_004dc154(tables, race, level);
        if (first->id == result || second->id == result || result == 0)
            return 0;
    }
    if (rule->kind == 3) {
        u16 level;
        u32 race;
        if (first->id == rule->devilId) {
            level = second->level;
            race = second->race;
        } else {
            level = first->level;
            race = first->race;
        }
        result = uniteFindClosestEligibleCandidate(tables, race, (u16)(level - 1), 0);
        if (first->id == result || second->id == result || result == 0)
            return 0;
    }
    pair->firstIdentifier = firstId;
    pair->secondIdentifier = secondId;
    pair->resultIdentifier = result;
    return 1;
}
}
