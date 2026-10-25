/* NON_MATCHING: value store at0x28 is scheduled after the kind/pair stores instead of before them; all other instructions match. */
#include "battle/btlReflect.h"
extern "C" {


// Configure action22's value and pair, setting its option flag when first is nonzero.
u32 btlReflectSetValuePair(s32 actor, u32 flags, u32 value, s32 first, u32 second)
{
    ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)actor, 0, flags);
    if (first != 0) {
        action->flagView.flags |= 4;
    }
    action->value = value;
    action->kind = 22;
    action->first = first;
    action->second = second;
    return 1;
}
}
