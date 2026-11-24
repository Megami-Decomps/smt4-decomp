/* NON_MATCHING: register allocation and scheduling only: retail initializes the completion result
 * before the two skill cursors and compares the level bounds in the opposite operand order. */
#include "shard/W5_W5Match2_PairedIds.h"
#include "shard/W6_W6Match5_DevilSort.h"

namespace {
struct SkillLearningUnit {
    PairedIdList skills;
    u16 flags;
    u16 id;
    u8 level;
    u8 unk49[2];
    u8 blocked;
};
}

extern "C" {
s32 recordContainsPairedId(const PairedIdList*, u32 id);

u32 devilCollectLevelGainSkills(void* context, s32 levelGain, u16* output)
{
    SkillLearningUnit* unit = static_cast<SkillLearningUnit*>(context);
    if (unit->blocked) {
        return 0;
    }
    const NkmBaseRecord *record = nkmBaseGetRecord(unit->id);
    DevilLearnedSkill pending[8] = {};
    s32 pendingCount = 0;
    s32 skillIndex = 0;
    s32 levelIndex = 0;
    u32 complete = 1;
    for (s32 i = 0; i < 8; ++i) {
        if (record->learnedSkills[i].id && record->learnedSkills[i].level > static_cast<u32>(unit->level)) {
            if (recordContainsPairedId(&unit->skills, record->learnedSkills[i].id)) {
                /* Known future skills do not consume the next available learning level. */
                ++skillIndex;
                continue;
            }
            pending[pendingCount].level = record->learnedSkills[levelIndex].level;
            pending[pendingCount].id = record->learnedSkills[skillIndex].id;
            ++pendingCount;
        }
        ++skillIndex;
        ++levelIndex;
    }

    s32 outputCount = 0;
    for (s32 i = 0; i < 8; ++i) {
        if (pending[i].id) {
            if (unit->level < pending[i].level && pending[i].level <= unit->level + levelGain
                && !recordContainsPairedId(&unit->skills, pending[i].id)) {
                output[outputCount++] = pending[i].id;
            }
            if (unit->level + levelGain < pending[i].level
                && !recordContainsPairedId(&unit->skills, pending[i].id)) {
                complete = 0;
            }
        }
    }
    return complete;
}
} // extern "C"
