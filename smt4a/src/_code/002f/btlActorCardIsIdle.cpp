#include "battle/ActorCardAnimations.h"
#include "battle/BtlUiObjCQuery.h"

/* Tests whether the requested card is idle rather than in an animation state. */
extern "C" bool btlActorCardIsIdle(const ActorCardAnimationsA *cards, s32 index)
{
    bool idle = true;
    if (static_cast<u32>(cards->animation.states[index] - 1) < 4)
        idle = false;
    return idle;
}
