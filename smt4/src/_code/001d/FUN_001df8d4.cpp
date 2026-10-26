/* NON_MATCHING: readable rebuild from asm of the learn-order picker; armcc here keeps the best score/rank in different registers and orders the float compares (retail: vcmpe then vcmp on s17/s16 with 0.01f in s19 and 1.0f in s18). */
#include "common.h"
#include "gamedata/SkillFlags.h"
#include "gamedata/DataTable40.h"

/* The skill learn picker. */
struct SkillPicker {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 *candidates;
    /* 0x08 */ s32 candidateCount;
    /* 0x0C */ u16 *passives;
    /* 0x10 */ s32 passiveCount;
    /* 0x14 */ u8 unk14[0x8];
    /* 0x1C */ u16 *chosen;
    /* 0x20 */ s32 chosenCount;
    /* 0x24 */ u8 unk24[8];
    /* 0x2C */ u8 preferredElement;
    /* 0x2D */ u8 unk2D[3];
    /* 0x30 */ s32 rankByType[8];
};

extern "C" {
s32 idMapLookup(u32 id);
void *passiveSkillLookupRecord(u32 id);
s32 FUN_0026a604(void *passive, void *skill);

/* Picks the next skill to learn from the candidates, preferring the lowest rank of its type, then
 * the best score (power, preferred element, matching passives, minus duplicates of what was
 * already chosen), then the lowest id; moves it to the chosen list together with the first
 * passive that fits it. Returns 1 when one was picked. */
u32 FUN_001df8d4(SkillPicker *picker)
{
    s32 best = -1;
    s32 bestRank = -1;
    f32 bestScore = 0.0f;
    for (s32 i = 0; i < picker->candidateCount; i++) {
        u32 id = picker->candidates[i];
        if (id == 0 || idMapLookup(id) == 6)
            continue;
        SkillFlagsRecord *record = dataTable06Sub1GetRecord(id);
        f32 power = (f32)(record->flags & 31);
        f32 score = power + power * 0.01f;
        s32 element = idMapLookup(id);
        if (picker->preferredElement == element)
            score += 1.0f;
        void *skill = dataTable40FindById(id);
        if (skill != NULL) {
            for (s32 j = 0; j < picker->passiveCount; j++) {
                if (picker->passives[j] != 0 && FUN_0026a604(passiveSkillLookupRecord(picker->passives[j]), skill)) {
                    score += 1.0f;
                    break;
                }
            }
        }
        for (s32 k = 0; k < picker->chosenCount; k++) {
            if (idMapLookup(picker->chosen[k]) == element)
                score -= 1.0f;
            if (dataTable06Sub1GetRecord(picker->chosen[k])->category == record->category)
                score -= 1.0f;
        }
        s32 rank = picker->rankByType[record->category];
        if (best < 0) {
            bestScore = score;
            best = i;
            bestRank = rank;
        } else if (rank < bestRank ||
                   (rank == bestRank &&
                    (score > bestScore || (score == bestScore && picker->candidates[i] <= picker->candidates[best])))) {
            bestScore = score;
            best = i;
            bestRank = rank;
        }
    }
    if (best < 0)
        return 0;
    picker->chosen[picker->chosenCount] = picker->candidates[best];
    picker->chosenCount++;
    void *skill = dataTable40FindById(picker->candidates[best]);
    if (skill != NULL) {
        for (s32 j = 0; j < picker->passiveCount; j++) {
            if (picker->passives[j] != 0 && FUN_0026a604(passiveSkillLookupRecord(picker->passives[j]), skill)) {
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

} /* extern "C" */
