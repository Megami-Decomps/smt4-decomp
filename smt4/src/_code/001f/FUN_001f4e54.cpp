/* NON_MATCHING: retail unrolls the six animation-counter resets; this loop remains rolled. */
#include "battle/ActorCardAnimations.h"
#include "font/ComWin/ComWin.h"

extern "C" {
s32 FUN_00293230(u32);
}

/* Reset one card's animation channels and select its default sprite animations. */
extern "C" void FUN_001f4e54(ActorCardAnimations *owner, s32 slot)
{
    owner->animation.states[slot] = 1;
    owner->animation.frames[slot] = 0;
    owner->animation.times[slot] = 0.0f;
    owner->animation.blocked[slot] = 0;
    for (s32 i = 0; i < 6; ++i) {
        owner->animation.counters[i][slot] = 0;
    }
    if (FUN_00293230(owner->unit) != 0) {
        owner->animation.blocked[slot] = 1;
        owner->animation.states[slot] = 5;
        return;
    }
    spriteStartAnimationByIndex(&owner->sprites[0][slot], 11);
    spriteStartAnimationByIndex(&owner->sprites[1][slot], 13);
    spriteStartAnimationByIndex(&owner->sprites[2][slot], 14);
}
