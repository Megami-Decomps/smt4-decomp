/* NON_MATCHING: retail keeps duplicate scan indices; the readable loop shares them and changes comparison/register allocation. */
#include "gamedata/BattleUnitSkills.h"
#include "gamedata/DevilRecordA.h"

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
u32 FUN_004cd0c8(BattleUnitSkillProgressViewA* unit, s32 levelIncrease, u16* output)
{
    if (unit->blocked) {
        return 0;
    }
    DevilRecordA* demon = devilGetRecord(unit->id);
    DevilLearnedSkillA candidates[8] = {0};
    s32 candidateCount = 0;
    s32 thresholdIndex = 0;
    u32 complete = 1;
    for (s32 index = 0; index < 8; ++index) {
        if (demon->learnedSkills[index].id != 0 && demon->learnedSkills[index].level > unit->level) {
            if (recordContainsPairedId(&unit->record, demon->learnedSkills[index].id)) {
                continue;
            }
            candidates[candidateCount].level = demon->learnedSkills[thresholdIndex].level;
            candidates[candidateCount].id = demon->learnedSkills[index].id;
            ++candidateCount;
        }
        ++thresholdIndex;
    }
    s32 outputCount = 0;
    for (s32 index = 0; index < 8; ++index) {
        if (candidates[index].id != 0) {
            u32 threshold = candidates[index].level;
            if (unit->level < threshold && static_cast<s32>(threshold) <= unit->level + levelIncrease &&
                !recordContainsPairedId(&unit->record, candidates[index].id)) {
                output[outputCount++] = candidates[index].id;
            }
            if (unit->level + levelIncrease < static_cast<s32>(candidates[index].level) &&
                !recordContainsPairedId(&unit->record, candidates[index].id)) {
                complete = 0;
            }
        }
    }
    return complete;
}
}
