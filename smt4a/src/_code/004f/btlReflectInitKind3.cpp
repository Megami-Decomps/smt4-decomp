#include "battle/btlReflect.h"
extern "C" {



// Initialize the kind-3 reflected action from two ids and four payload values.
void btlReflectInitKind3(s32 first, s32 second, u32 flags, u32 value,
                  u32 option, u32 auxiliary, u32 target)
{
    ReflectAction* action = btlQueueReflectAction(g_btlActionReflect, (s16)first, (s16)second, flags);
    action->kind = 3;
    action->target = value;
    action->value = target;
    action->parameter = option;
    action->wordValues.second = auxiliary;
}
}
