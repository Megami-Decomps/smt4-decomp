/* NON_MATCHING: register allocation and compare layout only - retail keeps the cost in s0 and the running score in s16, branches to the take path with a shared tail, and loads the kind bytes in the opposite register order; the logic and calls are identical. */
#include "common.h"

namespace {
/* A record of the skill table (dataTable06Sub1). */
struct SkillCostRecord {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u8 kind;
    /* 0x03 */ u8 flags;         /* bits 0-4: cost */
};

/* The skill inheritance picker's work: the candidate skills, the passive skills that may follow them and
   the skills already chosen. */
struct SkillPicker {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 *candidates;
    /* 0x08 */ s32 candidateCount;
    /* 0x0c */ u16 *passives;
    /* 0x10 */ s32 passiveCount;
    /* 0x14 */ u8 unk14[8];
    /* 0x1c */ u16 *chosen;
    /* 0x20 */ s32 chosenCount;
    /* 0x24 */ u8 unk24[8];
    /* 0x2c */ u8 element;
};
}

extern "C" {
SkillCostRecord *dataTable06Sub1GetRecord(u16 id);
s32 idMapLookup(u32 id);
void *dataTable40FindById(u32 id);
void *passiveSkillLookupRecord(u32 id);
s32 FUN_0026a604(void *passive, void *match);

/* Picks the best remaining candidate skill (cheapest bonus first, preferring the unit's element and the passives
   that go with it, penalising what is already chosen), moves it - and the first passive matching it - into
   the chosen list and clears them from the pools. Returns 1 when something was picked. */
u32 FUN_001d01f8(SkillPicker *picker)
{
    s32 best = -1;
    f32 bestScore = 0.0f;
    for (s32 i = 0; i < picker->candidateCount; i++) {
        if (picker->candidates[i] == 0) {
            continue;
        }
        dataTable06Sub1GetRecord(picker->candidates[i]);
        u32 id = picker->candidates[i];
        SkillCostRecord *record = dataTable06Sub1GetRecord(id);
        f32 cost = (f32)(u32)(record->flags & 0x1f);
        f32 score = cost;
        score += cost * 0.01f;
        s32 element = idMapLookup(id);
        if (picker->element == element) {
            score += 1.0f;
        }
        void *match = dataTable40FindById(id);
        if (match != NULL) {
            for (s32 j = 0; j < picker->passiveCount; j++) {
                if (picker->passives[j] != 0 && FUN_0026a604(passiveSkillLookupRecord(picker->passives[j]), match) != 0) {
                    score += 1.0f;
                    break;
                }
            }
        }
        for (s32 j = 0; j < picker->chosenCount; j++) {
            if (idMapLookup(picker->chosen[j]) == element) {
                score -= 1.0f;
            }
            if (dataTable06Sub1GetRecord(picker->chosen[j])->kind == record->kind) {
                score -= 1.0f;
            }
        }
        bool keep = best >= 0 && (bestScore > score || (bestScore == score && picker->candidates[i] > picker->candidates[best]));
        if (!keep) {
            bestScore = score;
            best = i;
        }
    }
    if (best >= 0) {
        picker->chosen[picker->chosenCount] = picker->candidates[best];
        picker->chosenCount++;
        void *match = dataTable40FindById(picker->candidates[best]);
        if (match != NULL) {
            for (s32 j = 0; j < picker->passiveCount; j++) {
                if (picker->passives[j] != 0 && FUN_0026a604(passiveSkillLookupRecord(picker->passives[j]), match) != 0) {
                    picker->chosen[picker->chosenCount] = picker->passives[j];
                    picker->chosenCount++;
                    picker->passives[j] = 0;
                    break;
                }
            }
        }
        picker->candidates[best] = 0;
        return 1;
    }
    return 0;
}

} /* extern "C" */
