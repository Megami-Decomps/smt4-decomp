#include "battle/btlReflect.h"
#include "battle/btlDebug.h"
extern "C" {


void btlReflectCreateKind2b(s32 id, u32 argument, u32 target, u32 option, u32 value, s32 enabled)
{
    ReflectAction* action = btlQueueReflectAction(g_btlActionReflect, static_cast<s16>(id), 0, argument);
    if (enabled == 0) {
        action->flagView.flags |= 4;
    }
    action->kind = 0x2b;
    action->target = target;
    action->value = value;
    action->parameter = option;
}
}
