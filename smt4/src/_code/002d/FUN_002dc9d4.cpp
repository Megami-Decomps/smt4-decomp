#include "shard/PassiveSkill.h"
#include "shard/W6_W6Match5_DevilSort.h"

struct DevilSkillEntry {
    u16 devilId;
    u16 skillId;
};

extern "C" {
const PassiveSkillRecord *dataTable12FindBySortKey(u16);
s32 FUN_00257444(s32);

// Order demon skills by descending category, race and level, then ascending id.
s32 FUN_002dc9d4(const DevilSkillEntry *left, const DevilSkillEntry *right)
{
    const PassiveSkillRecord *leftSkill = dataTable12FindBySortKey(left->skillId);
    const PassiveSkillRecord *rightSkill = dataTable12FindBySortKey(right->skillId);
    devilGetRecord(left->devilId);
    devilGetRecord(right->devilId);
    s32 rightCategory = FUN_00257444(static_cast<s16>(rightSkill->sortKey));
    s32 difference = rightCategory - FUN_00257444(static_cast<s16>(leftSkill->sortKey));
    if (difference == 0) {
        const DevilSortRecord *leftDevil = devilGetRecord(left->devilId);
        const DevilSortRecord *rightDevil = devilGetRecord(right->devilId);
        difference = rightDevil->race - leftDevil->race;
        if (difference == 0) {
            difference = rightDevil->level - leftDevil->level;
            if (difference == 0)
                difference = leftDevil->id - rightDevil->id;
        }
    }
    return difference;
}
}
