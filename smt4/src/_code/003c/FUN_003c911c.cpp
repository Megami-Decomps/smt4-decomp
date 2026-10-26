/* NON_MATCHING: race/level ternaries now load as retail (conditional ldrb); the u64 bitfield result store (retail packs with bic/orr and one strd), the rule-null arm layout and result register numbering still differ. */
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
        u8 level = (first->id == rule->sourceId ? second->level : first->level) + 1;
        u32 race = first->id == rule->sourceId ? second->race : first->race;
        FusionLevelEntry *levels = selection->levels[race];
        if (levels[0].level < level)
            level = static_cast<u8>(levels[selection->counts[race] - 1].level);
        result = FUN_003c9948(selection, race, level);
        if (first->id == result || second->id == result || result == 0)
            return 0;
    }
    if (rule->kind == 3) {
        result = demonFindClosestEligibleLevel(selection, first->id == rule->sourceId ? second->race : first->race,
            static_cast<u8>((first->id == rule->sourceId ? second->level : first->level) - 1), 0);
        if (first->id == result || second->id == result || result == 0)
            return 0;
    }
    output->first = firstId;
    output->second = secondId;
    output->result = result;
    return 1;
}
}
