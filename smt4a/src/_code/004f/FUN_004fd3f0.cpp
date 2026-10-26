/* NON_MATCHING: action stores lack retail writeback addressing and retain fewer zero-valued registers. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/btlReflect.h"
#include "battle/BattleHelpers_VariantB.h"

extern "C" {
void FUN_0047effc(s32, u32, u32);


/* Queue paired reflected actions, using a different second value for unflagged units. */
u32 FUN_004fd3f0(u32 actor, u32 unit, u32 target)
{
    ReflectAction *action;
    u32 secondValue;
    if (btlScriptUnitHasFlags(btlGetMainState())) {
        FUN_0047effc(0, unit, actor);
        secondValue = 0;
        action = btlQueueReflectAction(g_btlActionReflect, (s16)actor, 0, unit);
        action->flagView.flags |= 4;
        action->kind = 0x2B;
        action->target = target;
        action->value = 0;
        action->parameter = 0;
        action = btlQueueReflectAction(g_btlActionReflect, (s16)actor, 0, unit);
    } else {
        FUN_0047effc(0, unit, actor);
        secondValue = 0x10;
        action = btlQueueReflectAction(g_btlActionReflect, (s16)actor, 0, unit);
        action->flagView.flags |= 4;
        action->kind = 0x2B;
        action->target = target;
        action->value = 0;
        action->parameter = 0;
        action = btlQueueReflectAction(g_btlActionReflect, (s16)actor, 0, unit);
    }
    action->flagView.flags |= 4;
    action->target = target;
    action->kind = 0x2C;
    action->value = secondValue;
    action->parameter = 0;
    return 1;
}
}
