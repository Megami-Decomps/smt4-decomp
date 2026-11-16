#include "battle/btlReflect.h"
#include "battle/BtlMainAccess.h"

extern "C" {

/* Queues reflection action 0x2d for the unit with four identifiers. */
static __inline void queueKind2dAction(s32 unit, u32 argument, s32 first, s32 second, s32 third,
                                       s32 fourth)
{
    ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)unit, 0, argument);
    action->kind = 0x2d;
    action->first = first;
    action->second = second;
    action->extraIds.third = third;
    action->extraIds.fourth = fourth;
}

/* Queues reflection action 0x2d with four halfword identifiers; returns 1. */
u32 FUN_004fcf0c(s32 unit, u32 argument, s32 first, s32 second, s32 third, s32 fourth)
{
    btlGetMainState();
    queueKind2dAction(unit, argument, first, second, third, fourth);
    return 1;
}

}
