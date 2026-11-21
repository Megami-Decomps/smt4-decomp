/* NON_MATCHING: retail predicates the category load and the second targeting compare (ldrbeq/cmpeq, movne/cmpne)
   where armcc branches; the loop and the returns match. */
/* Tests the selected skill target or each occupied party slot according to its targeting mode. */
#include "gamedata/SkillDataRecord.h"
#include "shard/Shard0031.h"
#include "gamedata/SaveSlotTable.h"

extern "C" {
s32 skillApplyToParty(s32 target, s32 skill, s32 query);
s32 skillApplyToMemberAndCharge(s32 target, s32 slot, s32 skill, s32 query);

u32 FUN_002684d0(s32 skillId, s32 target)
{
    SkillDataRecordA *skill = skillDataFindById(skillId);
    if (skill == NULL) {
        return 0;
    }
    if ((skill->effectProperties.mode == 1 || skill->effectProperties.mode == 3) && skill->sort.category == 3) {
        if (skill->effectProperties.targeting == 3 || skill->effectProperties.targeting == 8) {
            return skillApplyToParty(target, skillId, 1) == 0;
        }
        SaveSlotTableA *party = gameGetSlotTable();
        s32 result;
        for (s32 i = -1; i < 24; ++i) {
            if (i < 0) {
                result = skillApplyToMemberAndCharge(target, -1, skillId, 1);
            } else {
                s32 slot = party->party[i];
                if (slot >= 0) {
                    result = skillApplyToMemberAndCharge(target, slot, skillId, 1);
                }
            }
            if (result == 0) {
                return 1;
            }
        }
    }
    if (skillId == 140 || skillId == 147) {
        return 1;
    }
    return 0;
}
}
