#include "event/2dEvent/EventEffect.h"

extern "C" {

extern EventEffectGlobalsA g_eventEffect;

bool eventEffectIsLoaded(void)
{
    return g_eventEffect.unk08 != NULL;
}

} /* extern "C" */
