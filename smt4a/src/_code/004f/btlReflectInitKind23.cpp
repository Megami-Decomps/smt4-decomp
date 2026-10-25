#include "battle/btlReflect.h"
extern "C" {



// Initialize the kind-23 reflected action and its payload.
void btlReflectInitKind23(s32 id, u32 flags, u32 target, u32 option, u32 extra)
{
    ReflectAction* action = btlQueueReflectAction(g_btlActionReflect, (s16)id, 0, flags);
    action->kind = 0x17;
    action->value = target;
    action->wordValues.unk18 = extra;
    action->parameter = option;
}
}
