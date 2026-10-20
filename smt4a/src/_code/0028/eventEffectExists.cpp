#include "event/2dEvent/EventEffect.h"

extern "C" {

extern EventEffectGlobalsA g_eventEffect;

bool eventEffectExists(void)
{
    return g_eventEffect.effect != NULL;
}

} /* extern "C" */
