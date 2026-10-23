/* NON_MATCHING: the scale-step zero store is scheduled before the integer reset stores instead of after the scales. */
#include "ui/PanelTransition.h"

static __inline void resetPanelTransition(PanelTransition *transition)
{
    transition->frame = 0;
    transition->state = 0;
    transition->hold = 0;
    transition->parameters[0] = 0;
    transition->parameters[1] = 0;
    transition->parameters[2] = 0;
    transition->parameters[3] = 0;
    transition->parameters[4] = 0;
    transition->parameters[5] = 0;
    transition->parameters[6] = 0;
    transition->parameters[7] = 0;
    transition->scale[0] = 0.5f;
    transition->scale[1] = 0.5f;
    transition->scale[2] = 0.5f;
    transition->scaleStep[0] = 0.0f;
    transition->opacity = 0.5f;
    transition->second = 0;
    transition->first = 0;
    transition->third = 0;
}

extern "C" {
void mathAdvanceClamped(f32 *value, f32 step, f32 target);
void FUN_002c2ea0(s32 *parameters, u32 *second, u32 *first, u32 *third,
                  f32 *scale, f32 *step, f32 *opacity);

/* Advance the delayed, active, held, and closing phases of a panel transition. */
void FUN_002c1664(PanelTransition *transition)
{
    switch (transition->state) {
    case 1:
        if (transition->frame < transition->delay) {
            break;
        }
        transition->state = 2;
        // Fall through once the delay is exhausted.
    case 2:
        FUN_002c2ea0(transition->parameters, &transition->second, &transition->first,
                      &transition->third, transition->scale, transition->scaleStep, &transition->opacity);
        if (transition->frame < transition->duration) {
            break;
        }
        if (transition->hold == 1) {
            transition->state = 3;
        } else {
            resetPanelTransition(transition);
        }
        break;
    case 3:
        return;
    case 4:
        mathAdvanceClamped(&transition->scale[0], transition->scaleStep[0], 0.5f);
        mathAdvanceClamped(&transition->scale[1], transition->scaleStep[1], 0.5f);
        mathAdvanceClamped(&transition->scale[2], transition->scaleStep[2], 0.5f);
        if (transition->frame < transition->duration + 10) {
            break;
        }
        transition->state = 5;
        // Fall through to restore the inactive defaults.
    case 5:
        resetPanelTransition(transition);
        break;
    }
    ++transition->frame;
}
}
