/* NON_MATCHING: panel reset inlining and state-switch scheduling differ from retail. */
#include "ui/PanelTransition.h"

extern "C" {
void FUN_00201714(s32 *parameters, u32 *second, u32 *first, u32 *third,
                  f32 *scale, f32 *step, f32 *opacity);
void mathAdvanceClamped(f32 *value, f32 step, f32 target);
}

static __inline void resetPanelTransition(PanelTransition *transition)
{
    transition->frame = 0;
    transition->state = 0;
    transition->hold = 0;
    for (u32 index = 0; index < 8; ++index)
        transition->parameters[index] = 0;
    transition->scale[0] = 0.5f;
    transition->scale[1] = 0.5f;
    transition->scale[2] = 0.5f;
    transition->scaleStep[0] = 0.0f;
    transition->opacity = 0.5f;
    transition->second = 0;
    transition->first = 0;
    transition->third = 0;
}

/* Advance the delayed panel animation, optional hold, and clamped fade-out stages. */
extern "C" void FUN_00200b24(PanelTransition *transition)
{
    switch (transition->state) {
    case 1:
        if (transition->frame < transition->delay)
            break;
        transition->state = 2;
        /* Fall through to start the animated state immediately. */
    case 2:
        FUN_00201714(transition->parameters, &transition->second, &transition->first,
                     &transition->third, transition->scale, transition->scaleStep, &transition->opacity);
        if (transition->frame >= transition->duration) {
            if (transition->hold == 1)
                transition->state = 3;
            else
                resetPanelTransition(transition);
        }
        break;
    case 3:
        return;
    case 4:
        mathAdvanceClamped(&transition->scale[0], transition->scaleStep[0], 0.5f);
        mathAdvanceClamped(&transition->scale[1], transition->scaleStep[1], 0.5f);
        mathAdvanceClamped(&transition->scale[2], transition->scaleStep[2], 0.5f);
        if (transition->frame < transition->duration + 10)
            break;
        transition->state = 5;
        /* Fall through to restore the idle defaults. */
    case 5:
        resetPanelTransition(transition);
        break;
    }
    transition->frame++;
}
