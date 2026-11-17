#include "gamedata/FusionCandidateFilter.h"
#include "shard/W6_W6Match5_DevilSort.h"
#include "gamedata/UnitRecordAccess.h"

extern "C" {
u32 FUN_0029dde0();
s32 itemGetFlagBit1(u16);
s32 partyMemberFindById(u16);

/* Test result eligibility and the requested parent-slot restrictions. */
u16 fusionCandidateMatchesParentFilter(const FusionCandidateFilter *filter, u16 firstParent, u16 secondParent, u16 resultId)
{
    DevilRecord *result = (DevilRecord *)devilGetRecord(resultId);
    if (!(result->flags & 1))
        return 0;
    if (filter->matchId) {
        if (result->id != filter->id)
            return 0;
    } else if (filter->matchRace && result->race != filter->race) {
        return 0;
    }
    if (filter->availableOnly && result->level > FUN_0029dde0())
        return 0;
    if (filter->excludeMarked && itemGetFlagBit1(result->id))
        return 0;
    if (filter->availableOnly && partyMemberFindById(result->id))
        return 0;

    DevilRecord *first = devilGetRecord(firstParent);
    DevilRecord *second = devilGetRecord(secondParent);
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
