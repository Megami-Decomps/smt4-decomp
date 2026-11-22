#include "ui/PanelTransition.h"

extern "C" PanelTransition *g_effectColorOverride;

// Start easing the panel's three scales back to 0.5 in ten steps (state 4).
extern "C" void effectColorOverrideBeginFadeToGray(void)
{
    if (g_effectColorOverride != NULL) {
        g_effectColorOverride->scaleStep[0] = (0.5f - g_effectColorOverride->scale[0]) * 0.1f;
        g_effectColorOverride->scaleStep[1] = (0.5f - g_effectColorOverride->scale[1]) * 0.1f;
        g_effectColorOverride->scaleStep[2] = (0.5f - g_effectColorOverride->scale[2]) * 0.1f;
        g_effectColorOverride->state = 4;
    }
}
