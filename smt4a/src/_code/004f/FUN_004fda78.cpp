/* NON_MATCHING: reflection flag branch layout omits retail's five compiler NOP hints. */
/* Queues a reflection action for a battle actor and its entry group. */
#include "battle/btlReflect.h"
#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match7_BattleEffects.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {

s32 btlScriptUnitHasFlags(const BtlMainStateA *state);

ReflectAction *FUN_004fda78(s32 actor, s32 secondary, u32 options,
                          BattleRosterMotionA *target, s32 value, u16 extraId)
{
    ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)actor, (s16)secondary, options);
    action->kind = 8;
    action->value = value;
    action->target = (u32)target;
    action->first = btlFindEntryValue(target->group, 1) - 1;
    action->extraIds.third = extraId;
    if (value != 4) {
        if (value == 3) {
            if (btlScriptUnitHasFlags(btlGetMainState()) == 0) {
                return action;
            }
        }
        action->flagView.flags |= 4;
    }
    return action;
}
}
