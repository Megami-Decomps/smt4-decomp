/* NON_MATCHING: retail converts the power once (vcvt into s0, copied to the score in s16) where this converts it twice, loads preferredElement after saving the kind, compares the two categories in the other register order, and reads the chosen list with add/ldm before hoisting the zero for the candidate store. */
#include "common.h"
#include "gamedata/SkillFlags.h"
#include "gamedata/SkillDataLookup.h"
#include "shard/PassiveSkill.h"
#include "gamedata/SkillPicker.h"


extern "C" {
s32 idMapLookup(u32 id);

/* Scores every candidate (power, plus a bonus for the wanted kind and for a held passive that
 * boosts it, minus a penalty for kinds and elements already chosen), moves the best one (the lower id
 * on a tie) to the chosen list and returns whether there was one. */
u32 FUN_001cffd0(SkillPicker *picker)
{
    s32 best = -1;
    f32 bestScore = 0.0f;
    for (s32 i = 0; i < picker->candidates.count; i++) {
        u32 id = picker->candidates.ids[i];
        if (id == 0 || idMapLookup(id) != 6)
            continue;
        dataTable06Sub1GetRecord(picker->candidates.ids[i]);
        u32 skill = picker->candidates.ids[i];
        SkillFlagsRecord *record = dataTable06Sub1GetRecord(skill);
        u32 power = record->flags & 0x1F;
        f32 score = (f32)power;
        score += (f32)power * 0.01f;
        s32 kind = idMapLookup(skill);
        if (picker->preferredElement == kind)
            score += 1.0f;
        const SkillDataRecord *skillData = skillDataFindById(skill);
        if (skillData != NULL) {
            for (s32 j = 0; j < picker->passives.count; j++) {
                if (picker->passives.ids[j] != 0 && FUN_0026a604(passiveSkillLookupRecord(picker->passives.ids[j]), skillData)) {
                    score += 1.0f;
                    break;
                }
            }
        }
        for (s32 j = 0; j < picker->chosen.count; j++) {
            if (idMapLookup(picker->chosen.ids[j]) == kind)
                score -= 1.0f;
            if (record->category == dataTable06Sub1GetRecord(picker->chosen.ids[j])->category)
                score -= 1.0f;
        }
        if (best < 0) {
            bestScore = score;
            best = i;
        } else if (bestScore > score) {
            continue;
        } else if (bestScore != score || picker->candidates.ids[i] <= picker->candidates.ids[best]) {
            bestScore = score;
            best = i;
        }
    }
    if (best >= 0) {
        SkillIdList *chosen = &picker->chosen;
        chosen->ids[chosen->count] = picker->candidates.ids[best];
        chosen->count++;
        picker->candidates.ids[best] = 0;
        return 1;
    }
    return 0;
}

} /* extern "C" */
