/* NON_MATCHING: effect/targeting tests are the table-record bitfields (target 3 or 8 = single target; retail returns 0 when the single-target query succeeds), the party scan is one loop from slot -1 reusing the previous result for empty slots, and the tails are branch-shaped; armcc still does not predicate the `&&`/`||` chains the way retail does and emits a stray nop after the single-target call. */
#include "gamedata/SkillDataRecord.h"
#include "shard/Shard0031.h"
#include "gamedata/SkillDataLookup.h"
#include "gamedata/SaveSlotTableIV.h"
#include "gamedata/SkillFieldUse.h"

/* Checks whether a field skill can be used on the player or a stocked unit. */
extern "C" s32 skillCanUseInField(u32 skillId, s32 user)
{
    const SkillDataRecord *skill = skillDataFindById(skillId);
    if (skill == NULL) return 0;
    if ((skill->effectProperties.mode == 1 || skill->effectProperties.mode == 3) && skill->sort.category == 3) {
        if (skill->effectProperties.targeting == 3 || skill->effectProperties.targeting == 8) {
            return skillUseOnParty(user, skillId, 1) == 0;
        } else {
            const SaveSlotTableIV *party = gameGetSlotTable();
            s32 result = 1; /* Empty slots reuse the previous query's result. */
            for (s32 i = -1; i < 24; ++i) {
                if (i < 0) {
                    result = skillUseOnTarget(user, -1, skillId, 1);
                } else {
                    s32 slot = party->stock[i];
                    if (slot >= 0)
                        result = skillUseOnTarget(user, slot, skillId, 1);
                }
                if (result == 0) return 1;
            }
        }
    }
    if (skillId == 0x8C) return 1;
    return 0;
}
