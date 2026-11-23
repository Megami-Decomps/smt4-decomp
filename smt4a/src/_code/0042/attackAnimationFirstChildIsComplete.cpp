#include "gfx/AnimationVisualCompletion.h"

/* Reports whether the first child of the state-three animation has finished. */
extern "C" bool attackAnimationFirstChildIsComplete(const AnimationVisualState *state)
{
    if (state->state == 3) {
        return animationVisualChildIsComplete(state->binding, 0);
    }
    return false;
}
