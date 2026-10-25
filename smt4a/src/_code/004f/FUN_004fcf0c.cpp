/* NON_MATCHING: retail retains the first/second IDs in R4/R5 and stacked IDs in R6/R7; compiled code swaps these saved-register pairs despite otherwise identical instructions. */
#include "battle/btlReflect.h"
extern "C" {
void* btlGetMainState(void);


// Enqueues a type-0x2d reflection action with four halfword IDs.
u32 FUN_004fcf0c(s32 source, u32 target, u32 first, u32 second, u32 third, u32 fourth)
{
    btlGetMainState();
    ReflectAction* action = btlQueueReflectAction(g_btlActionReflect, static_cast<s16>(source), 0, target);
    action->kind = 0x2d;
    action->first = first;
    action->second = second;
    action->extraIds.third = third;
    action->extraIds.fourth = fourth;
    return 1;
}
}
