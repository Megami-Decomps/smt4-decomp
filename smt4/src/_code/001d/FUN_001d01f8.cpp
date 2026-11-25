/* NON_MATCHING: 2 lines: the category equality test uses the opposite order of the same two registers. */
#include "common.h"
#include "gamedata/SkillFlags.h"
#include "gamedata/SkillDataLookup.h"
#include "shard/PassiveSkill.h"
#include "gamedata/SkillPicker.h"

extern "C" {

/* Picks the best remaining candidate skill (cheapest bonus first, preferring the unit's element and the passives
   that go with it, penalising what is already chosen), moves it - and the first passive matching it - into
   the chosen list and clears them from the pools. Returns 1 when something was picked. */
u32 FUN_001d01f8(SkillPicker *picker)
{
    s32 best = -1;
    f32 bestScore = 0.0f;
    for (s32 i = 0; i < picker->candidates.count; i++) {
        if (picker->candidates.ids[i] == 0) {
            continue;
        }
        dataTable06Sub1GetRecord(picker->candidates.ids[i]);
        u32 id = picker->candidates.ids[i];
        SkillFlagsRecord *record = dataTable06Sub1GetRecord(id);
        u32 cost = record->flags & SKILL_PICKER_BASE_POINTS_MASK;
        f32 score = skillPickerInitialScore(cost);
        s32 element = idMapLookup(id);
        if (picker->preferredElement == element) {
            score += 1.0f;
        }
        const SkillDataRecord *match = skillDataFindById(id);
        if (match != NULL) {
            for (s32 j = 0; j < picker->passives.count; j++) {
                if (picker->passives.ids[j] != 0 && passiveAffinityAppliesToSkill(passiveSkillLookupRecord(picker->passives.ids[j]), match) != 0) {
                    score += 1.0f;
                    break;
                }
            }
        }
        for (s32 j = 0; j < picker->chosen.count; j++) {
            if (idMapLookup(picker->chosen.ids[j]) == element) {
                score -= 1.0f;
            }
            if (dataTable06Sub1GetRecord(picker->chosen.ids[j])->category == record->category) {
                score -= 1.0f;
            }
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
        picker->chosen.ids[picker->chosen.count] = picker->candidates.ids[best];
        picker->chosen.count++;
        const SkillDataRecord *match = skillDataFindById(picker->candidates.ids[best]);
        if (match != NULL) {
            for (s32 j = 0; j < picker->passives.count; j++) {
                if (picker->passives.ids[j] != 0 && passiveAffinityAppliesToSkill(passiveSkillLookupRecord(picker->passives.ids[j]), match) != 0) {
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
