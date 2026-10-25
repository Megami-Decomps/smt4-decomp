/* NON_MATCHING: retail unrolls the six animation-counter resets; this loop remains rolled. */
#include "battle/ActorCardAnimations.h"
#include "ui/UiSpriteState.h"

extern "C" {
s32 btlScriptUnitHasFlags(u32);
}

/* Reset one card's animation channels and select its default sprite animations. */
extern "C" void FUN_002b1264(ActorCardAnimationsA *owner, s32 slot)
{
    owner->animation.states[slot] = 1;
    owner->animation.frames[slot] = 0;
    owner->animation.times[slot] = 0.0f;
    owner->animation.blocked[slot] = 0;
    for (s32 i = 0; i < 6; ++i) {
        owner->animation.counters[i][slot] = 0;
    }
    if (btlScriptUnitHasFlags(owner->unit) != 0) {
        owner->animation.blocked[slot] = 1;
        owner->animation.states[slot] = 5;
        return;
    }
    uiSpriteSelectAnim(&owner->sprites[0][slot], 11);
    uiSpriteSelectAnim(&owner->sprites[1][slot], 13);
    uiSpriteSelectAnim(&owner->sprites[2][slot], 14);
}
