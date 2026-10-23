/* NON_MATCHING: canonical action stores do not use retail writeback addressing; zero values are coalesced into fewer saved registers. */
#include "battle/btlMain.h"
#include "battle/btlReflect.h"

extern "C" {
BtlMainState *btlGetMainState(void);
s32 FUN_00293230(BtlMainState *battle);
void FUN_0023c1bc(s32 side, u32 options, u32 actor);
ReflectAction *btlQueueReflectAction(ReflectContext *context, s32 actor, s32 secondary, u32 options);

// Queue the paired reflect operations; the battle mode selects the second operation's flag.
u32 FUN_002267b8(u32 actor, u32 options, u32 target)
{
    u32 secondValue;
    ReflectAction *action;
    if (FUN_00293230(btlGetMainState()) != 0) {
        FUN_0023c1bc(0, options, actor);
        secondValue = 0;
        action = btlQueueReflectAction(g_btlActionReflect, (s16)actor, 0, options);
        action->flagView.flags |= 4;
        action->kind = 0x21;
        action->target = target;
        action->value = 0;
        action->parameter = 0;
        action = btlQueueReflectAction(g_btlActionReflect, (s16)actor, 0, options);
    } else {
        FUN_0023c1bc(0, options, actor);
        secondValue = 0x10;
        action = btlQueueReflectAction(g_btlActionReflect, (s16)actor, 0, options);
        action->flagView.flags |= 4;
        action->kind = 0x21;
        action->target = target;
        action->value = 0;
        action->parameter = 0;
        action = btlQueueReflectAction(g_btlActionReflect, (s16)actor, 0, options);
    }
    action->flagView.flags |= 4;
    action->target = target;
    action->kind = 0x22;
    action->value = secondValue;
    action->parameter = 0;
    return 1;
}
}
