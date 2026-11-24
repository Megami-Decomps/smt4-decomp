/* NON_MATCHING: 68 lines (28 shape). The first idMapLookup redundantly narrows the halfword; retail loads
 * preferredElement after saving the kind and compares the categories in the other register order. The append's
 * register allocation also differs. */
#include "common.h"
#include "gamedata/SkillFlags.h"
#include "gamedata/SkillDataLookup.h"
#include "shard/PassiveSkill.h"
#include "gamedata/SkillPicker.h"


extern "C" {

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
        u32 power = record->flags & SKILL_PICKER_BASE_POINTS_MASK;
        f32 score = skillPickerInitialScore(power);
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
