#include "event/2dEvent/EventEffect.h"

extern "C" {

void jobStop(u32 job, s32 arg);
void asdMemFree(void *block);

extern EventEffectGlobalsA g_eventEffect;

/* Stops the effect's job and frees it. */
void eventEffectDestroy(void)
{
    EventEffectA *effect = g_eventEffect.effect;

    if (g_eventEffect.effect != NULL) {
        jobStop(g_eventEffect.effect->job, 0);
        asdMemFree(effect);
        g_eventEffect.effect = NULL;
    }
}

} /* extern "C" */
