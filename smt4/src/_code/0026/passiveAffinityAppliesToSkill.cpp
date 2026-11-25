#include "gamedata/SkillDataRecord.h"
#include "shard/PassiveSkill.h"

enum {
    PASSIVE_FIXED_COST_EXCLUDED = 4000
};

/* Checks whether an affinity passive applies to a candidate inheritance skill. */
extern "C" bool passiveAffinityAppliesToSkill(const PassiveSkillRecord *passive, const SkillDataRecord *skill)
{
    if (passive->affinityBits.resistance != 5 && passive->affinityBits.resistance != 6) {
        return false;
    }
    switch (skill->sort.category) {
    case 0:
    case 1:
        if (skill->skillProperties.category == passive->affinityBits.element) {
            return true;
        }
        break;
    case 3:
        /* This element selector applies to the skill's cost rather than its category. */
        if (passive->affinityBits.element != 20) {
            break;
        }
        if (skill->costs.fixedCost) {
            if (skill->costs.fixedCost != PASSIVE_FIXED_COST_EXCLUDED) {
                return true;
            }
        } else if (skill->percentCost != 0) {
            return true;
        }
        break;
    }
    return false;
}
