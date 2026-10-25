/* NON_MATCHING: retail computes the last part's boolean before loading its part pointer; the build loads the pointer chain first. */
#include "shard/W6_W6Match2_AnimationVisualState.h"

// Selects one of three visual parts according to the animation state.
extern "C" void FUN_0034d504(AnimationVisualState* visual)
{
    u32 selected = 0;
    if (visual->state == 4) {
        selected = 1;
    } else if (visual->state == 5) {
        selected = 2;
    }
    if (visual->binding != NULL) {
        visual->binding->model->parts[0]->enabled = selected == 0;
        visual->binding->model->parts[1]->enabled = selected == 1;
        visual->binding->model->parts[2]->enabled = selected == 2;
    }
}
