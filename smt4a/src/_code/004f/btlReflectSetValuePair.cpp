#include "battle/btlReflect.h"
extern "C" {


// Configure action31's value and pair, setting its option flag when first is nonzero.
u32 btlReflectSetValuePair(s32 actor, u32 flags, u32 value, u16 first, u16 second)
{
    ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)actor, 0, flags);
    if (first != 0) {
        action->flagView.flags |= 4;
    }
    action->kind = 31;
    action->value = value;
    action->first = first;
    action->second = second;
    return 1;
}
}
