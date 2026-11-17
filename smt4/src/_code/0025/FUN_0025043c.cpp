/* NON_MATCHING: result code three is not retained across skill validation, and shared return-zero/three blocks have different placement. */
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "gamedata/SkillDataRecord.h"
#include <stddef.h>
#include "battle/BtlMainAccess.h"
#include "gamedata/SkillDataLookup.h"
#include "gamedata/ConsumableRecord.h"

extern "C" {
s32 FUN_0033fe6c(s32 side, s32 mode, ConsumableRecord *action, s32 enabled);
s32 itemEffectCheckApplicable(s32 side, s32 mode, SkillDataRecord *skill);

// Dispatch supported table-eight actions and skill targets unless the battle suppresses them.
u32 FUN_0025043c(s32 side, u16 actionId)
{
    if (actionId == 0)
        return 1;
    ConsumableRecord *action = itemTableGetItemRecord(actionId);
    if (action == NULL)
        return 1;
    if ((action->type != 2 && action->type != 3) || action->kind != 1)
        return 2;
    if (action->skillId != 0) {
        SkillDataRecord *skill = skillDataFindById(action->skillId);
        if (skill == NULL)
            return 1;
        if (skill->effectProperties.mode != 2 && skill->effectProperties.mode != 3)
            return 2;
        switch (skill->sort.category) {
        case 0:
        case 1:
        case 2:
        case 5:
        case 6:
        case 10:
            break;
        default:
            if ((btlGetMainState()->editorControl.flags & 0x02000000) == 0) {
                if (skill->sort.category != 3) {
                    switch (skill->effectProperties.targeting) {
                    case 0:
                    case 1:
                    case 3:
                    case 4:
                    case 5:
                    case 6:
                    case 8:
                        return 0;
                    }
                }
                u32 result = itemEffectCheckApplicable(side, 1, skill);
                if (result != 0)
                    result = 3;
                return result;
            }
        }
        return 0;
    }
    if ((btlGetMainState()->editorControl.flags & 0x02000000) != 0)
        return 0;
    u32 result = FUN_0033fe6c(side, 1, action, 1);
    if (result != 0)
        result = 3;
    return result;
}
}
