/* NON_MATCHING: readable rebuild of the skill candidate pick; retail keeps the best score in s17 and the running score in s16, with the 1.0 and 0.01 constants in s18/s19 loaded under the first loop test, which armcc here schedules differently. */
#include "common.h"

/* A skill-learning candidate pool: pick the best candidate and move it to the chosen list. */
struct SkillPicker {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 *candidates;
    /* 0x08 */ s32 candidateCount;
    /* 0x0C */ u16 *passives;       /* skills the demon already holds */
    /* 0x10 */ s32 passiveCount;
    /* 0x14 */ u8 unk14[8];
    /* 0x1C */ u16 *chosen;
    /* 0x20 */ s32 chosenCount;
    /* 0x24 */ u8 unk24[8];
    /* 0x2C */ u8 wantedKind;
};

struct SkillRecord06 {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u8 element;
    /* 0x03 */ u8 power;            /* low five bits */
};

extern "C" {
s32 idMapLookup(u32 id);
SkillRecord06 *dataTable06Sub1GetRecord(u32 id);
void *dataTable40FindById(u32 id);
void *passiveSkillLookupRecord(u32 id);
s32 FUN_0026a604(void *passive, void *skill);

/* Scores every candidate (power, plus a bonus for the wanted kind and for a held passive that
 * boosts it, minus a penalty for kinds and elements already chosen), moves the best one (the lower id
 * on a tie) to the chosen list and returns whether there was one. */
u32 FUN_001cffd0(SkillPicker *picker)
{
    s32 best = -1;
    f32 bestScore = 0.0f;
    for (s32 i = 0; i < picker->candidateCount; i++) {
        u32 id = picker->candidates[i];
        if (id == 0 || idMapLookup(id) != 6)
            continue;
        dataTable06Sub1GetRecord(picker->candidates[i]);
        u32 skill = picker->candidates[i];
        SkillRecord06 *record = dataTable06Sub1GetRecord(skill);
        f32 power = (f32)(record->power & 0x1F);
        f32 score = power + power * 0.01f;
        s32 kind = idMapLookup(skill);
        if (picker->wantedKind == kind)
            score += 1.0f;
        void *skillData = dataTable40FindById(skill);
        if (skillData != NULL) {
            for (s32 j = 0; j < picker->passiveCount; j++) {
                if (picker->passives[j] != 0 && FUN_0026a604(passiveSkillLookupRecord(picker->passives[j]), skillData)) {
                    score += 1.0f;
                    break;
                }
            }
        }
        for (s32 j = 0; j < picker->chosenCount; j++) {
            if (idMapLookup(picker->chosen[j]) == kind)
                score -= 1.0f;
            if (record->element == dataTable06Sub1GetRecord(picker->chosen[j])->element)
                score -= 1.0f;
        }
        if (best < 0 || score > bestScore ||
            (score == bestScore && picker->candidates[i] <= picker->candidates[best])) {
            best = i;
            bestScore = score;
        }
    }
    if (best < 0)
        return 0;
    picker->chosen[picker->chosenCount] = picker->candidates[best];
    picker->chosenCount++;
    picker->candidates[best] = 0;
    return 1;
}

} /* extern "C" */
