#include "gfx/AnimationVisualCompletion.h"

/* Reports whether the third child of the state-five animation has finished. */
extern "C" u8 animationVisualIsComplete(const AnimationVisualState *state)
{
    if (state->state == 5) {
        return animationVisualChildIsComplete(state->binding, 2);
    }
    return 0;
}
