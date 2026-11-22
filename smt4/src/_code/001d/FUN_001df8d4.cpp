/* NON_MATCHING: 34 lines with idMapLookup's real prototype, u8 (u16) from gamedata/SkillFlags.h (20 with the
 * old local s32 (u32) one); retail converts the power once (vcvt into s0, copied to s16; a named f32 power gives the copy in the other direction), loads preferredElement after saving the element, compares the categories in the other register order and keeps the rank's category in r1. */
#include "common.h"
#include "gamedata/SkillFlags.h"
#include "gamedata/SkillDataLookup.h"
#include "shard/PassiveSkill.h"
#include "gamedata/SkillPicker.h"

extern "C" {

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
        if (best < 0) {
            bestScore = score;
            best = i;
            bestRank = picker->rankByType[typeRecord->category];
        } else {
            s32 rank = picker->rankByType[typeRecord->category];
            if (rank > bestRank)
                continue;
            if (rank == bestRank) {
                if (bestScore > score)
                    continue;
                if (bestScore == score && picker->candidates.ids[i] > picker->candidates.ids[best])
                    continue;
            }
            bestScore = score;
            best = i;
            bestRank = rank;
        }
    }
    if (best >= 0) {
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
    return 0;
}

} /* extern "C" */
