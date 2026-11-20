#include "ui/UiSpriteApi.h"
#include "battle/ActorCardAnimations.h"
#include "battle/ActorCardAnimationApi.h"
#include "font/ComWin/ComWin.h"

extern "C" {
s32 btlScriptUnitIsIncapacitated(u32);
}

/* Reset one card's animation channels and select its default sprite animations. */
extern "C" void FUN_001f4e54(ActorCardAnimations *owner, s32 slot)
{
    owner->animation.states[slot] = 1;
    owner->animation.frames[slot] = 0;
    owner->animation.times[slot] = 0.0f;
    owner->animation.blocked[slot] = 0;
    owner->animation.counters[0][slot] = 0;
    owner->animation.counters[1][slot] = 0;
    owner->animation.counters[2][slot] = 0;
    owner->animation.counters[3][slot] = 0;
    owner->animation.counters[4][slot] = 0;
    owner->animation.counters[5][slot] = 0;
    if (btlScriptUnitIsIncapacitated(owner->unit) != 0) {
        owner->animation.blocked[slot] = 1;
        owner->animation.states[slot] = 5;
        return;
    }
    spriteStartAnimationByIndex(&owner->sprites[0][slot], 11);
    spriteStartAnimationByIndex(&owner->sprites[1][slot], 13);
    spriteStartAnimationByIndex(&owner->sprites[2][slot], 14);
}
