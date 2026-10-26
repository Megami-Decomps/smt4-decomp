/* NON_MATCHING: the (s16) actor id is now converted once; retail's action stores use writeback addressing through nested members and keeps its zeros in separate registers. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/btlReflect.h"

extern "C" {
s32 FUN_00293230(BtlMainState *battle);
void FUN_0023c1bc(s32 side, u32 options, u32 actor);


// Queue the paired reflect operations; the battle mode selects the second operation's flag.
u32 FUN_002267b8(u32 actor, u32 options, u32 target)
{
    s16 actorId = (s16)actor;
    u32 secondValue;
    ReflectAction *action;
    if (FUN_00293230(btlGetMainState()) != 0) {
        FUN_0023c1bc(0, options, actor);
        secondValue = 0;
        action = btlQueueReflectAction(g_btlActionReflect, actorId, 0, options);
        action->flagView.flags |= 4;
        action->kind = 0x21;
        action->target = target;
        action->value = 0;
        action->parameter = 0;
        action = btlQueueReflectAction(g_btlActionReflect, actorId, 0, options);
    } else {
        FUN_0023c1bc(0, options, actor);
        secondValue = 0x10;
        action = btlQueueReflectAction(g_btlActionReflect, actorId, 0, options);
        action->flagView.flags |= 4;
        action->kind = 0x21;
        action->target = target;
        action->value = 0;
        action->parameter = 0;
        action = btlQueueReflectAction(g_btlActionReflect, actorId, 0, options);
    }
    action->flagView.flags |= 4;
    action->target = target;
    action->kind = 0x22;
    action->value = secondValue;
    action->parameter = 0;
    return 1;
}
}
