/* NON_MATCHING: the rank comes from the first record lookup, as retail spills it; retail converts the power once (vcvt into s0, copied to s16), loads preferredElement after saving the element, compares the categories in the other register order, computes the rank in each arm of the take test and places the return-0 exit after the literal pool. */
#include "common.h"
#include "gamedata/SkillFlags.h"
#include "gamedata/SkillDataLookup.h"
#include "shard/PassiveSkill.h"
#include "gamedata/SkillPicker.h"

extern "C" {
s32 idMapLookup(u32 id);

/* Picks the next skill to learn from the candidates, preferring the lowest rank of its type, then
 * the best score (power, preferred element, matching passives, minus duplicates of what was
 * already chosen), then the lowest id; moves it to the chosen list together with the first
 * passive that fits it. Returns 1 when one was picked. */
u32 FUN_001df8d4(SkillPicker *picker)
{
    s32 best = -1;
    s32 bestRank = -1;
    f32 bestScore = 0.0f;
    for (s32 i = 0; i < picker->candidates.count; i++) {
        if (picker->candidates.ids[i] == 0 || idMapLookup(picker->candidates.ids[i]) == 6)
            continue;
        SkillFlagsRecord *typeRecord = dataTable06Sub1GetRecord(picker->candidates.ids[i]);
        u32 id = picker->candidates.ids[i];
        SkillFlagsRecord *record = dataTable06Sub1GetRecord(id);
        u32 power = record->flags & 31;
        f32 score = (f32)power;
        score += (f32)power * 0.01f;
        s32 element = idMapLookup(id);
        if (picker->preferredElement == element)
            score += 1.0f;
        const SkillDataRecord *skill = skillDataFindById(id);
        if (skill != NULL) {
            for (s32 j = 0; j < picker->passives.count; j++) {
                if (picker->passives.ids[j] != 0 && FUN_0026a604(passiveSkillLookupRecord(picker->passives.ids[j]), skill)) {
                    score += 1.0f;
                    break;
                }
            }
        }
        for (s32 k = 0; k < picker->chosen.count; k++) {
            if (idMapLookup(picker->chosen.ids[k]) == element)
                score -= 1.0f;
            if (dataTable06Sub1GetRecord(picker->chosen.ids[k])->category == record->category)
                score -= 1.0f;
        }
        s32 rank = picker->rankByType[typeRecord->category];
        if (best < 0) {
            bestScore = score;
            best = i;
            bestRank = rank;
        } else if (rank > bestRank) {
            continue;
        } else if (rank != bestRank) {
            bestScore = score;
            best = i;
            bestRank = rank;
        } else if (bestScore > score) {
            continue;
        } else if (bestScore != score || picker->candidates.ids[i] <= picker->candidates.ids[best]) {
            bestScore = score;
            best = i;
            bestRank = rank;
        }
    }
    if (best < 0)
        return 0;
    picker->chosen.ids[picker->chosen.count] = picker->candidates.ids[best];
    picker->chosen.count++;
    const SkillDataRecord *skill = skillDataFindById(picker->candidates.ids[best]);
    if (skill != NULL) {
        for (s32 j = 0; j < picker->passives.count; j++) {
            if (picker->passives.ids[j] != 0 && FUN_0026a604(passiveSkillLookupRecord(picker->passives.ids[j]), skill)) {
                picker->chosen.ids[picker->chosen.count] = picker->passives.ids[j];
                picker->chosen.count++;
                picker->passives.ids[j] = 0;
                break;
            }
        }
    }
    picker->candidates.ids[best] = 0;
    return 1;
}

} /* extern "C" */
