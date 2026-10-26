#include "battle/ActorCardAnimations.h"
#include "ui/UiSpriteState.h"
#include "battle/BattleHelpers_VariantB.h"

extern "C" {
}

/* Reset one card's animation channels and select its default sprite animations. */
extern "C" void actorCardAnimationReset(ActorCardAnimationsA *owner, s32 slot)
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
    if (btlScriptUnitHasFlags(reinterpret_cast<const BtlMainStateA *>(owner->unit)) != 0) {
        owner->animation.blocked[slot] = 1;
        owner->animation.states[slot] = 5;
        return;
    }
    uiSpriteSelectAnim(&owner->sprites[0][slot], 11);
    uiSpriteSelectAnim(&owner->sprites[1][slot], 13);
    uiSpriteSelectAnim(&owner->sprites[2][slot], 14);
}
