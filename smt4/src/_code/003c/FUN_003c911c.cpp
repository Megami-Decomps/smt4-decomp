/* NON_MATCHING: special-fusion packed result stores and selection registers differ. */
#include "shard/W6_W6Match5_DevilSort.h"
#include "shard/W6_W6Match8_FusionSelection.h"

namespace {
/* IV keeps fifty-six race slots; the shared selection record describes Apocalypse. */
struct FusionRaceSelectionIV {
    u8 counts[56];
    FusionLevelEntry *levels[56];
};
struct FusionRaceRule {
    u32 flags : 8;
    u32 sourceId : 16;
    u32 kind : 8;
};
struct FusionRaceResult {
    u64 first : 15;
    u64 second : 15;
    u64 flags : 4;
    u64 result : 15;
    u64 reserved : 15;
};
}
extern "C" {
const FusionRaceRule *dataTable5Sub3Lookup(u32 race, u32 id);
u32 FUN_003c9948(FusionRaceSelectionIV *selection, u32 race, u32 level);
u32 demonFindClosestEligibleLevel(FusionRaceSelectionIV *selection, u32 race, u32 level, s32 mode);

u32 FUN_003c911c(FusionRaceSelectionIV *selection, u16 firstId, u16 secondId, FusionRaceResult *output)
{
    u32 result = 0;
    DevilSortRecord *first = devilGetRecord(firstId);
    DevilSortRecord *second = devilGetRecord(secondId);
    const FusionRaceRule *rule = dataTable5Sub3Lookup(first->race, second->id);
    const FusionRaceRule *reverseRule = dataTable5Sub3Lookup(second->race, first->id);
    if (first->id == second->id)
        return 0;
    if (rule == NULL) {
        rule = reverseRule;
        if (rule == NULL)
            return 0;
    }
    if (rule->kind == 1) {
        DevilSortRecord *other = first->id == rule->sourceId ? second : first;
        u32 race = other->race;
        u8 level = other->level + 1;
        FusionLevelEntry *levels = selection->levels[race];
        if (levels[0].level < level)
            level = static_cast<u8>(levels[selection->counts[race] - 1].level);
        result = FUN_003c9948(selection, race, level);
        if (first->id == result || second->id == result || result == 0)
            return 0;
    }
    if (rule->kind == 3) {
        DevilSortRecord *other = first->id == rule->sourceId ? second : first;
        result = demonFindClosestEligibleLevel(selection, other->race, static_cast<u8>(other->level - 1), 0);
        if (first->id == result || second->id == result || result == 0)
            return 0;
    }
    output->first = firstId;
    output->second = secondId;
    output->result = result;
    return 1;
}
}
