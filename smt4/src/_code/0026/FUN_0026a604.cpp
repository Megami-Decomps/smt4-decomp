/* NON_MATCHING: retail tests the 0xa000 selector bits in their own block after the skill-kind dispatch and shares one false return; armcc predicates the test and returns false inline. */
#include "gamedata/SkillDataRecord.h"
#include "shard/PassiveSkill.h"

extern "C" {
bool FUN_0026a604(const PassiveSkillRecord *passive, const SkillDataRecord *skill)
{
    u32 packed = passive->affinity;
    if (((packed >> 16) & 0xf) != 5 && ((packed >> 16) & 0xf) != 6) {
        return false;
    }
    if (skill->sort.category == 0 || skill->sort.category == 1) {
        return skill->skillProperties.category == ((packed >> 11) & 0x1f);
    }
    if (skill->sort.category != 3) {
        return false;
    }
    if ((packed & 0xf800) != 0xa000) {
        return false;
    }
    if (skill->costs.fixedCost) {
        return skill->costs.fixedCost != 4000;
    }
    return skill->percentCost != 0;
}
}
