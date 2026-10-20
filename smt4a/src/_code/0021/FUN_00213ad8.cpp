#include "event/2dEvent/EventEffect.h"

extern "C" {

void jobStop(u32 job, s32 arg);
void asdMemFree(void *block);

extern EventEffectGlobalsA DAT_0057f3b4;

/* Stops the effect's job and frees it. */
void FUN_00213ad8(void)
{
    EventEffectA *effect = DAT_0057f3b4.effect;

    if (DAT_0057f3b4.effect != NULL) {
        jobStop(DAT_0057f3b4.effect->job, 0);
        asdMemFree(effect);
        DAT_0057f3b4.effect = NULL;
    }
}

} /* extern "C" */
