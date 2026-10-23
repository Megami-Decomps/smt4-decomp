/* NON_MATCHING: compiler retains the full filter base beside its halfword-field base, changing saved registers. */
#include "gamedata/FusionCandidateFilter.h"
#include "gamedata/DevilRecord.h"

extern "C" {
u32 FUN_0029dde0();
s32 FUN_0029ea68(u16);
s32 partyMemberFindById(u16);
GameUnitSortRecord *gameGetUnitRecord(s32);

/* Test result eligibility and the requested parent-slot restrictions. */
u16 FUN_003c8db4(const FusionCandidateFilter *filter, u16 firstParent, u16 secondParent, u16 resultId)
{
    DevilRecord *result = (DevilRecord *)devilGetRecord(resultId);
    if (!(result->fusion.flags & 1))
        return 0;
    if (filter->matchId) {
        if (result->header.id != filter->id)
            return 0;
    } else if (filter->matchRace && result->header.race != filter->race) {
        return 0;
    }
    if (filter->availableOnly && result->header.level > FUN_0029dde0())
        return 0;
    if (filter->excludeMarked && FUN_0029ea68(result->header.id))
        return 0;
    if (filter->availableOnly && partyMemberFindById(result->header.id))
        return 0;

    DevilSortRecord *first = devilGetRecord(firstParent);
    DevilSortRecord *second = devilGetRecord(secondParent);
    if (!filter->allowSpecialRace && (first->race == 0x26 || second->race == 0x26))
        return 0;
    if (filter->requireParents) {
        if (u32(filter->requiredSlots[0]) < 24) {
            u16 id = gameGetUnitRecord(filter->requiredSlots[0])->id;
            if (id != firstParent && id != secondParent)
                return 0;
        }
        if (u32(filter->requiredSlots[1]) < 24) {
            u16 id = gameGetUnitRecord(filter->requiredSlots[1])->id;
            if (id != firstParent && id != secondParent)
                return 0;
        }
    }
    if (filter->excludeParents) {
        if (u32(filter->excludedSlots[0]) < 24) {
            u16 id = gameGetUnitRecord(filter->excludedSlots[0])->id;
            if (id == firstParent || id == secondParent)
                return 0;
        }
        if (u32(filter->excludedSlots[1]) < 24) {
            u16 id = gameGetUnitRecord(filter->excludedSlots[1])->id;
            if (id == firstParent || id == secondParent)
                return 0;
        }
    }
    return 1;
}
}
