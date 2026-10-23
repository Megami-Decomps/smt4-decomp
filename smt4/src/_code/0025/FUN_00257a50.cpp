/* NON_MATCHING: work reload, result-bitfield zero test, parent registers and shared return layout differ. */
#include "shard/W5_W5Match2_UniteWork.h"
#include "gamedata/UnitStats.h"

extern "C" {
extern UniteWork *g_unite;
StatBlock *partyMemberFindById(u32 id);
void FUN_0029dc74(u32 id, StatBlock *result);
void uniteMergeInheritedSkillsAndStats(void *context, const StatBlock *first,
    const StatBlock *second, const StatBlock *third, StatBlock *result);
void uniteBuildInheritedSkillCandidates(u32 id, const StatBlock *first, const StatBlock *second);
s32 FUN_0029cde0(const u16 *skills, s32 count, u16 skill);
s32 flagCountUnlockedSlots(const StatBlock *unit);
void unitRecalculateEffectiveStats(StatBlock *unit);
void rt_memcpy_w(void *destination, const void *source, u32 size);

u32 FUN_00257a50(StatBlock *result, s32 selection, s32 mode, u32)
{
    // The retail bitfields span one 64-bit allocation unit. A local view avoids
    // increasing the alignment and size of the shared four-byte-aligned work.
    struct ResultPairBits {
        u64 firstId : 15;
        u64 secondId : 15;
        u64 firstType : 2;
        u64 secondType : 2;
        u64 resultId : 15;
        u64 reserved : 15;
    };
    typedef char ResultPairBitsSizeCheck[sizeof(ResultPairBits) == 8 ? 1 : -1];
    UniteWork *work = g_unite;
    const ResultPairBits *pair = reinterpret_cast<const ResultPairBits *>(
        &work->resultPairsIV.pairs[selection]);
    switch (mode) {
    case 0: {
        if (work->resultPairsIV.pairs[selection].resultId == 0) {
            return 0;
        }
        FUN_0029dc74(pair->resultId, result);
        StatBlock *first = partyMemberFindById(pair->firstId);
        StatBlock *second = partyMemberFindById(pair->secondId);
        if (first == NULL || second == NULL) {
            return 0;
        }
        uniteMergeInheritedSkillsAndStats(work->context, first, second, NULL, result);
        uniteBuildInheritedSkillCandidates(pair->resultId, first, second);
        for (s32 candidate = 0; candidate < 24; ++candidate) {
            u16 skill = work->secondListIV.indices[candidate];
            if (skill != 0 && !FUN_0029cde0(result->skills.ids, 8, skill)) {
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
        break;
    }
    case 1: {
        StatBlock *parent = partyMemberFindById(pair->firstId);
        if (parent == NULL) {
            return 0;
        }
        rt_memcpy_w(result, parent, sizeof(*result));
        break;
    }
    case 2: {
        StatBlock *parent = partyMemberFindById(pair->secondId);
        if (parent == NULL) {
            return 0;
        }
        rt_memcpy_w(result, parent, sizeof(*result));
        break;
    }
    default:
        return 0;
    }
    return 1;
}
}
