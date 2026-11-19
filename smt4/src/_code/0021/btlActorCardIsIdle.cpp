#include "battle/ActorCardAnimations.h"
#include "battle/ActorCardAnimationApi.h"

/* Report whether the card is outside its four active animation phases. */
extern "C" s32 btlActorCardIsIdle(const ActorCardAnimations *owner, u32 slot)
{
    s32 outside = 1;
    if ((u32)(owner->animation.states[slot] - 1) < 4) {
        outside = 0;
    }
    return outside;
}
