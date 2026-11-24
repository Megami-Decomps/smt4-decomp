#include "battle/btlReflect.h"
#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match7_BattleEffects.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/BattleHelpers_VariantB.h"

extern "C" {

/* Queues a reflection action for a battle actor and its entry group. */
ReflectAction *btlReflectQueueTargetEntryAction(s32 actor, s32 secondary, u32 options,
                          BattleRosterMotionA *target, s32 value, u16 extraId)
{
    ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)actor, (s16)secondary, options);
    action->kind = 8;
    action->value = value;
    action->target = (u32)target;
    action->first = btlFindEntryValue(target->group, 1) - 1;
    action->extraIds.third = extraId;
    if (value != 4 && value != 3) {
        action->flagView.flags |= 4;
    }
    if (value == 3 && btlScriptUnitHasFlags(btlGetMainState())) {
        action->flagView.flags |= 4;
    }
    return action;
}
} /* extern "C" */
