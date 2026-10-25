#include "battle/btlReflect.h"
#include "common.h"
extern "C" {


/* Create action seventeen with both supplied argument words. */
ReflectAction *actionCreateKindSeventeen(s32 id, u32 argument, u32 first, u32 second)
{
    ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)id, 0, argument);
    action->kind = 17;
    action->value = first;
    action->parameter = second;
    return action;
}
}
