/* NON_MATCHING: retail retains redundant scan/skill counters and hoists completion into the first pass; readable compaction merges those counters (92/89), with different GPR/address scheduling. */
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
struct LearnedSkill {
    u16 level;
    u16 id;
};
struct DevilLearningRecord {
    DevilSortRecord common;
    u8 unk04[0x48];
    LearnedSkill learned[8]; // 0x4c
    u8 unk6c[0x28];
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
    const DevilLearningRecord* record = reinterpret_cast<const DevilLearningRecord*>(devilGetRecord(unit->id));
    LearnedSkill pending[8] = {};
    s32 pendingCount = 0;
    s32 levelIndex = 0;
    for (s32 i = 0; i < 8; ++i) {
        if (record->learned[i].id && record->learned[i].level > static_cast<u32>(unit->level)) {
            if (recordContainsPairedId(&unit->skills, record->learned[i].id)) {
                // Known future skills do not consume the next available learning level.
                continue;
            }
            pending[pendingCount].level = record->learned[levelIndex].level;
            pending[pendingCount].id = record->learned[i].id;
            ++pendingCount;
        }
        ++levelIndex;
    }

    u32 complete = 1;
    s32 outputCount = 0;
    for (s32 i = 0; i < 8; ++i) {
        if (pending[i].id) {
            const u32 level = pending[i].level;
            if (unit->level < level && static_cast<s32>(level) <= unit->level + levelGain
                && !recordContainsPairedId(&unit->skills, pending[i].id)) {
                output[outputCount++] = pending[i].id;
            }
            if (unit->level + levelGain < static_cast<s32>(pending[i].level)
                && !recordContainsPairedId(&unit->skills, pending[i].id)) {
                complete = 0;
            }
        }
    }
    return complete;
}
} // extern "C"
