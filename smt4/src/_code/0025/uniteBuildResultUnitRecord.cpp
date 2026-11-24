#include "camp/Unite/UniteGlobals.h"
#include "gamedata/UnitStats.h"
#include "shard/W6_W6Match4_RelativeDirectory.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

extern "C" {
StatBlock *partyMemberFindById(u32 id); // declcheck: local (the shared declaration does not compile here or changes this unit)
void unitRecordBuild(u32 id, StatBlock *result);
void uniteMergeInheritedSkillsAndStats(void *context, const StatBlock *first,
    const StatBlock *second, const StatBlock *third, StatBlock *result);
void unitRecalculateEffectiveStats(StatBlock *unit);

/* Fills `result` for the selected fusion pair: mode 0 the fused demon with its inherited skills, 1 and 2 a copy
 * of the first or second parent. Returns 1 when it filled the result. */
u32 uniteBuildResultUnitRecord(StatBlock *result, s32 selection, s32 mode, u32)
{
    UniteWork *work = g_unite;
    u32 ok = 0;
    if (mode == 0) {
        if (work->resultPairsIV.pairs[selection].resultId) {
            unitRecordBuild(work->resultPairsIV.pairs[selection].resultId, result);
            StatBlock *first = partyMemberFindById(work->resultPairsIV.pairs[selection].firstId);
            StatBlock *second = partyMemberFindById(work->resultPairsIV.pairs[selection].secondId);
            if (first && second) {
                uniteMergeInheritedSkillsAndStats(work->context, first, second, NULL, result);
                uniteBuildInheritedSkillCandidates(work->resultPairsIV.pairs[selection].resultId, first, second);
                for (s32 candidate = 0; candidate < 24; ++candidate) {
                    if (work->secondListIV.indices[candidate] != 0 &&
                        !arrayContainsU16(result->skills.ids, 8, work->secondListIV.indices[candidate])) {
                        s32 count = flagCountUnlockedSlots(result);
                        for (s32 slot = 0; slot < count; ++slot) {
                            if (result->skills.ids[slot] == 0) {
                                result->skills.ids[slot] = work->secondListIV.indices[candidate];
                                break;
                            }
                        }
                    }
                }
                unitRecalculateEffectiveStats(result);
                ok = 1;
            }
        }
    } else if (mode == 1) {
        StatBlock *parent = partyMemberFindById(work->resultPairsIV.pairs[selection].firstId);
        if (parent) {
            *result = *parent;
            ok = 1;
        }
    } else if (mode == 2) {
        StatBlock *parent = partyMemberFindById(work->resultPairsIV.pairs[selection].secondId);
        if (parent) {
            *result = *parent;
            ok = 1;
        }
    }
    return ok;
}
}
