/* NON_MATCHING: retail reloads the countdown after both paths of the conditional decrement. */
#include "classes/Obj422318.h"

/* Advance the countdown and the child before the subtype-specific update. */
void Obj422318::update()
{
    if (frames > 0) {
        frames--;
    }
    if (frames == 0) {
        timerFlags &= ~1;
    }
    if (child != NULL) {
        child->update();
    }
    updateMotion();
}
