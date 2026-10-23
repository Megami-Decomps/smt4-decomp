/* NON_MATCHING: retail keeps duplicate scan indices; the readable loop shares them and changes comparison/register allocation. */
#include "gamedata/BattleUnitSkills.h"
#include "gamedata/DevilRecord.h"
#include "shard/W6_W6Match8_DevilRecordA.h"

// Both shared record types expose only prefixes; these views preserve their boundaries.
struct BattleUnitSkillProgressViewA {
    BtlUnitRecordA record;
    u8 unk44[0x1E];
    /* 0x62 */ u16 id;
    /* 0x64 */ u16 level;
    u8 unk66;
    /* 0x67 */ u8 blocked;
};
struct DevilLearnedSkillsViewA {
    DevilRecordA record;
    u8 unk40[0x10];
    /* 0x50 */ DevilLearnedSkill skills[8];
};
extern "C" {
s32 recordContainsPairedId(BtlUnitRecordA* record, u16 skill);

// Collect skills learned within the level increase; return whether none remain beyond it.
u32 FUN_004cd0c8(BattleUnitSkillProgressViewA* unit, s32 levelIncrease, u16* output)
{
    if (unit->blocked) {
        return 0;
    }
    DevilLearnedSkillsViewA* demon = reinterpret_cast<DevilLearnedSkillsViewA*>(FUN_00184310(unit->id));
    DevilLearnedSkill candidates[8] = {0};
    s32 candidateCount = 0;
    s32 thresholdIndex = 0;
    u32 complete = 1;
    for (s32 index = 0; index < 8; ++index) {
        if (demon->skills[index].id != 0 && demon->skills[index].unk00 > unit->level) {
            if (recordContainsPairedId(&unit->record, demon->skills[index].id)) {
                continue;
            }
            candidates[candidateCount].unk00 = demon->skills[thresholdIndex].unk00;
            candidates[candidateCount].id = demon->skills[index].id;
            ++candidateCount;
        }
        ++thresholdIndex;
    }
    s32 outputCount = 0;
    for (s32 index = 0; index < 8; ++index) {
        if (candidates[index].id != 0) {
            u32 threshold = candidates[index].unk00;
            if (unit->level < threshold && static_cast<s32>(threshold) <= unit->level + levelIncrease &&
                !recordContainsPairedId(&unit->record, candidates[index].id)) {
                output[outputCount++] = candidates[index].id;
            }
            if (unit->level + levelIncrease < static_cast<s32>(candidates[index].unk00) &&
                !recordContainsPairedId(&unit->record, candidates[index].id)) {
                complete = 0;
            }
        }
    }
    return complete;
}
}
