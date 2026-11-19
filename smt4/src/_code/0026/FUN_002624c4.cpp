/* NON_MATCHING: packed-result stores and skill-loop scheduling still differ.
 * The fourth argument is an output record; the return is the eligibility status. */
#include "common.h"
#include "gamedata/FusionCandidateFilter.h"
#include "gamedata/PackedIdentifiers.h"
#include "gamedata/GameDataAccess_VariantC.h"
#include "gamedata/NkmBaseRecord.h"
#include "gamedata/SkillFlags.h"
#include "gamedata/PairedKeyRecord.h"

typedef char FusionResultPackedSizeCheck[sizeof(PackedIdentifiers) == 8 ? 1 : -1];

extern "C" {

PairedKeyRecord* dataTable1fFindPairedKey(u16 first, u16 second);
void qsort(void* base, s32 count, s32 size, void* compare);
extern u8 halfwordKeyEmptyLastCompare;
// Builds the fusion result of two demons: product, inherited skills and cost.
u32 FUN_002624c4(FusionCandidateFilter* unit, u16 first, u16 second, PackedIdentifiers* result)
{
    u32 ret = 0;
    PairedKeyRecord* pair;
    if (first < second) {
        pair = dataTable1fFindPairedKey(first, second);
    } else {
        pair = dataTable1fFindPairedKey(second, first);
    }
    if (pair == NULL) return ret;
    if ((pair->value & 0xffff) == 0) return ret;
    if (!devilIsAvailable(reinterpret_cast<u32>(unit), pair->value & 0xffff)) return ret;
    if (!fusionCandidateMatchesParentFilter(unit, first, second, pair->value & 0xffff)) return ret;

    result->firstIdentifier = first;
    result->secondIdentifier = second;
    result->resultIdentifier = pair->value;
    result->cost = 0;

    NkmBaseRecord *record = nkmBaseGetRecord(pair->value & 0xffff);
    for (s32 i = 0; i < 8; i++) {
        if (record->skills[i] != 0) {
            unit->skills[unit->skillCount] = record->skills[i];
            unit->skillCount++;
        }
    }
    if (unit->skillCount < 0x18) unit->skills[unit->skillCount] = 0;
    for (s32 i = 0; i < 0x18; i++) {
        u16 id = unit->skills[i];
        if (id != 0 && (dataTable06Sub1GetRecord(id)->flags & 0x20) == 0) unit->skills[i] = 0;
    }
    qsort(unit->skills, unit->skillCount, 2, &halfwordKeyEmptyLastCompare);
    s32 oldCount = unit->skillCount;
    unit->skillCount = 0;
    for (s32 i = 0; i < oldCount; i++) {
        if (unit->skills[i] == 0) break;
        unit->skillCount++;
    }

    if (unit->availableOnly != 0) {
        s32 cost = record->level * 0x14 + record->stats[0] + record->stats[1] + record->stats[2] +
                   record->stats[3] + record->stats[4];
        for (s32 i = 0; i < 0x18; i++) {
            u16 id = unit->skills[i];
            if (id == 0) break;
            cost += (dataTable06Sub1GetRecord(id)->flags & 0x1f) * 5;
        }
        result->cost = cost;
    }
    ret = battleCandidateMatchesSkillFilters(unit, first, second, result->resultIdentifier);
    return ret;
}

} /* extern "C" */
