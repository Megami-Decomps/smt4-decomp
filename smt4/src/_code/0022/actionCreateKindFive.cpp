#include "battle/btlReflect.h"
#include "common.h"
extern "C" {


/* Create an action of kind five and attach its supplied value. */
ReflectAction *actionCreateKindFive(s32 id, u32 argument, u32 value)
{
    ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)id, 0, argument);
    action->kind = 5;
    action->value = value;
    return action;
}
}
