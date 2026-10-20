#include "event/2dEvent/EventEffect.h"

extern "C" {

extern EventEffectGlobalsA DAT_0057f3b4;

/* True when there is no effect or it has finished. */
bool FUN_00239134(void)
{
    s32 state = 0;

    if (DAT_0057f3b4.effect != NULL) {
        state = DAT_0057f3b4.effect->state;
    }
    return DAT_0057f3b4.effect == NULL || state == EVENT_EFFECT_DONE;
}

} /* extern "C" */
