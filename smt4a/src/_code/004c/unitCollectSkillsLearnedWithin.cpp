/* NON_MATCHING: retail increments the id index before the level index (an addne on the skip path), ours after the loop compare; the zero for the level index is moved before `complete`'s 1 and the completeness compare tests its operands the other way round (12 lines). */
#include "gamedata/BattleUnitSkills.h"
#include "gamedata/NkmBaseRecordA.h"

// The battle unit record exposes only a prefix; this view preserves its boundary.
struct BattleUnitSkillProgressViewA {
    BtlUnitRecordA record;
    u8 unk44[0x1E];
    /* 0x62 */ u16 id;
    /* 0x64 */ u16 level;
    u8 unk66;
    /* 0x67 */ u8 blocked;
};
extern "C" {
s32 recordContainsPairedId(BtlUnitRecordA* record, u16 skill);

// Collect skills learned within the level increase; return whether none remain beyond it.
u32 unitCollectSkillsLearnedWithin(BattleUnitSkillProgressViewA* unit, s32 levelIncrease, u16* output)
{
    if (unit->blocked) {
        return 0;
    }
    NkmBaseRecordA* demon = nkmBaseGetRecord(unit->id);
    DevilLearnedSkillA candidates[8] = {0};
    s32 candidateCount = 0;
    s32 thresholdIndex = 0;
    u32 complete = 1;
    s32 skillIndex = 0;
    for (s32 index = 0; index < 8; ++index, ++skillIndex) {
        if (demon->learnedSkills[index].id != 0 && demon->learnedSkills[index].level > unit->level) {
            if (recordContainsPairedId(&unit->record, demon->learnedSkills[index].id)) {
                continue;
            }
            candidates[candidateCount].level = demon->learnedSkills[thresholdIndex].level;
            candidates[candidateCount].id = demon->learnedSkills[skillIndex].id;
            ++candidateCount;
        }
        ++thresholdIndex;
    }
    s32 outputCount = 0;
    for (s32 index = 0; index < 8; ++index) {
        if (candidates[index].id != 0) {
            if (candidates[index].level > unit->level && unit->level + levelIncrease >= candidates[index].level &&
                !recordContainsPairedId(&unit->record, candidates[index].id)) {
                output[outputCount++] = candidates[index].id;
            }
            if (unit->level + levelIncrease < candidates[index].level &&
                !recordContainsPairedId(&unit->record, candidates[index].id)) {
                complete = 0;
            }
        }
    }
    return complete;
}
}
