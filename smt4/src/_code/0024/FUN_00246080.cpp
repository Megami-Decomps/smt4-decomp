/* NON_MATCHING: retail contains a discarded queue traversal; omitted rather than retaining dead work. */
#include "battle/BtlMainAccess.h"
#include "battle/btlReflect.h"
#include "battle/btlAction.h"
#include "battle/btlMain.h"

extern "C" {

s16 battleGetEntryHalfword(s32 memberId, u32 field);
s32 FUN_00293230(BtlMainState *battle);

/* Queue a reflected action with the target's zero-based entry id. */
ReflectAction *FUN_00246080(s32 actor, s32 secondary, u32 options, BtlActionRecord *target, s32 value)
{
    ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)actor, (s16)secondary, options);
    action->kind = 7;
    action->value = value;
    action->target = reinterpret_cast<u32>(target);
    action->first = battleGetEntryHalfword(target->memberId, 1) - 1;
    if (value != 4) {
        if (value == 3 && !FUN_00293230(btlGetMainState())) {
            return action;
        }
        action->flagView.flags |= 4;
    }
    return action;
}
}
