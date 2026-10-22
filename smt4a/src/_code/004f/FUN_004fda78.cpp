/* NON_MATCHING: reflection flag branch layout omits retail's five compiler NOP hints. */
/* Queues a reflection action for a battle actor and its entry group. */
#include "battle/btlReflect.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match7_BattleEffects.h"

extern "C" {
ReflectAction *FUN_004102d8(ReflectContext *context, s32 actor, s32 secondary, u32 options);
BtlMainStateA *btlGetMainState(void);
s32 btlScriptUnitHasFlags(const BtlMainStateA *state);
s16 btlFindEntryValue(s32 group, u32 kind);

ReflectAction *FUN_004fda78(s32 actor, s32 secondary, u32 options,
                          BattleRosterMotionA *target, s32 value, u16 extraId)
{
    ReflectAction *action = FUN_004102d8(g_btlActionReflect, (s16)actor, (s16)secondary, options);
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
