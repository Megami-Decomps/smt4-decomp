/* NON_MATCHING: the shared result flag and the merged parent copy now follow retail; remaining: retail reads g_unite
 * twice at entry (the pair base and the work kept in r6) and tests resultId with a 32-bit load and mask of the
 * pair's second word, where the build reuses the pair's 64-bit bitfield read; registers follow from that. */
#include "camp/Unite/UniteGlobals.h"
#include "gamedata/UnitStats.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

extern "C" {
StatBlock *partyMemberFindById(u32 id);
void FUN_0029dc74(u32 id, StatBlock *result);
void uniteMergeInheritedSkillsAndStats(void *context, const StatBlock *first,
    const StatBlock *second, const StatBlock *third, StatBlock *result);
void uniteBuildInheritedSkillCandidates(u32 id, const StatBlock *first, const StatBlock *second);
s32 flagCountUnlockedSlots(const StatBlock *unit);
void unitRecalculateEffectiveStats(StatBlock *unit);
void __aeabi_memcpy4(void *destination, const void *source, u32 size);

/* Fills `result` for the selected fusion pair: mode 0 the fused demon with its inherited skills, 1 and 2 a copy
 * of the first or second parent. Returns 1 when it filled the result. */
u32 FUN_00257a50(StatBlock *result, s32 selection, s32 mode, u32)
{
    u32 ok = 0;
    UniteWork *work = g_unite;
    const UnitePairEntryIV *pair = &work->resultPairsIV.pairs[selection];
    switch (mode) {
    case 0: {
        if (work->resultPairsIV.pairs[selection].resultId == 0) {
            break;
        }
        FUN_0029dc74(pair->resultId, result);
        StatBlock *first = partyMemberFindById(pair->firstId);
        StatBlock *second = partyMemberFindById(pair->secondId);
        if (first == NULL || second == NULL) {
            break;
        }
        uniteMergeInheritedSkillsAndStats(work->context, first, second, NULL, result);
        uniteBuildInheritedSkillCandidates(pair->resultId, first, second);
        for (s32 candidate = 0; candidate < 24; ++candidate) {
            u16 skill = work->secondListIV.indices[candidate];
            if (skill != 0 && !arrayContainsU16(result->skills.ids, 8, skill)) {
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
        break;
    }
    case 1: {
        StatBlock *parent = partyMemberFindById(pair->firstId);
        if (parent != NULL) {
            __aeabi_memcpy4(result, parent, sizeof(*result));
            ok = 1;
        }
        break;
    }
    case 2: {
        StatBlock *parent = partyMemberFindById(pair->secondId);
        if (parent != NULL) {
            __aeabi_memcpy4(result, parent, sizeof(*result));
            ok = 1;
        }
        break;
    }
    }
    return ok;
}
}
