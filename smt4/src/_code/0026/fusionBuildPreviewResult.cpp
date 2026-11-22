/* NON_MATCHING: 96 lines: retail sets ret = 1 only after the skill loops (keeping the zero in ret's register r9) and fails the parent filter straight to the pop; the result record is copied with ldm/strd and the record pointer and loop registers differ. */
#include "common.h"
#include "gamedata/NkmBaseRecord.h"
#include "gamedata/SkillFlags.h"
#include "gamedata/PairedKeyRecord.h"
#include "gamedata/PackedIdentifiers.h"

/* Demon being assembled by the fusion preview. */
struct FusionPreviewUnit {
    u8 unk00[0x146];
    u16 skills[0x18];   // 0x146
    s32 skillCount;     // 0x178
    u8 unk17c;
    u8 hasCost;         // 0x17d
};

extern "C" {

PairedKeyRecord* dataTable1fFindPairedKey(u16 first, u16 second);
s32 devilIsAvailable(FusionPreviewUnit* unit, u16 id);
void qsort(void* base, s32 count, s32 size, void* compare);
s32 fusionCandidateMatchesParentFilter(FusionPreviewUnit* unit, u32 first, u32 second, u16 product);
u32 battleCandidateMatchesSkillFilters(FusionPreviewUnit* unit, u32 first, u32 second, u16 product);
extern u8 halfwordKeyEmptyLastCompare;
/* Builds the fusion result of two demons (product, inherited skills and cost) and returns whether it passes the skill filters. */
u32 fusionBuildPreviewResult(FusionPreviewUnit* unit, u16 first, u16 second, PackedIdentifiers* result)
{
    u32 ret = 0;
    PairedKeyRecord* pair;
    if (first < second) {
        pair = dataTable1fFindPairedKey(first, second);
    } else {
        pair = dataTable1fFindPairedKey(second, first);
    }
    if (pair != NULL && (pair->value & 0xffff) != 0 && devilIsAvailable(unit, pair->value & 0xffff) &&
        fusionCandidateMatchesParentFilter(unit, first, second, pair->value & 0xffff)) {
        ret = 1;
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
        if (unit->hasCost != 0) {
            s32 cost = record->level * 0x14 + record->stats[0] + record->stats[1] + record->stats[2] +
                       record->stats[3] + record->stats[4];
            for (s32 i = 0; i < 0x18; i++) {
                u16 id = unit->skills[i];
                if (id == 0) break;
                cost += (dataTable06Sub1GetRecord(id)->flags & 0x1f) * 5;
            }
            result->cost = cost;
        }
    }
    if (ret != 0) {
        ret = battleCandidateMatchesSkillFilters(unit, first, second, result->resultIdentifier);
    }
    return ret;
}

} /* extern "C" */
