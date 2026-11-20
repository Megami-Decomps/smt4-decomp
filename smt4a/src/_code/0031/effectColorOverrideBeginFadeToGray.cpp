/* NON_MATCHING: same operations; retail loads the three scales singly into s4/s3/s2 (the build merges the last two
 * into vldmia), subtracts them before loading the 0.1f step and storing the state, and stores the steps like a
 * three-float copy (the third, then the first two with vstmia) where the build stores them singly in order. */
#include "ui/PanelTransition.h"

extern "C" PanelTransition *g_effectColorOverride;

// Start easing the panel's three scales back to 0.5 in ten steps (state 4).
extern "C" void effectColorOverrideBeginFadeToGray(void)
{
    PanelTransition *transition = g_effectColorOverride;
    if (transition != NULL) {
        transition->scaleStep[0] = (0.5f - transition->scale[0]) * 0.1f;
        transition->scaleStep[1] = (0.5f - transition->scale[1]) * 0.1f;
        transition->scaleStep[2] = (0.5f - transition->scale[2]) * 0.1f;
        transition->state = 4;
    }
}
