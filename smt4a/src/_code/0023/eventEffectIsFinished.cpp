#include "event/2dEvent/EventEffect.h"

extern "C" {

extern EventEffectGlobalsA g_eventEffect;

/* True when there is no effect or it has finished. */
bool eventEffectIsFinished(void)
{
    s32 state = 0;

    if (g_eventEffect.effect != NULL) {
        state = g_eventEffect.effect->state;
    }
    return g_eventEffect.effect == NULL || state == EVENT_EFFECT_DONE;
}

} /* extern "C" */
